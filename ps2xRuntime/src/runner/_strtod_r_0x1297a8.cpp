#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _strtod_r
// Address: 0x1297a8 - 0x12a6a8
void _strtod_r_0x1297a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_strtod_r_0x1297a8");
#endif

    switch (ctx->pc) {
        case 0x1297f0u: goto label_1297f0;
        case 0x129860u: goto label_129860;
        case 0x1298b8u: goto label_1298b8;
        case 0x129938u: goto label_129938;
        case 0x129988u: goto label_129988;
        case 0x1299a8u: goto label_1299a8;
        case 0x129ae0u: goto label_129ae0;
        case 0x129b28u: goto label_129b28;
        case 0x129bd8u: goto label_129bd8;
        case 0x129bf8u: goto label_129bf8;
        case 0x129c28u: goto label_129c28;
        case 0x129c38u: goto label_129c38;
        case 0x129c50u: goto label_129c50;
        case 0x129c5cu: goto label_129c5c;
        case 0x129c68u: goto label_129c68;
        case 0x129ce8u: goto label_129ce8;
        case 0x129d08u: goto label_129d08;
        case 0x129d3cu: goto label_129d3c;
        case 0x129d74u: goto label_129d74;
        case 0x129d90u: goto label_129d90;
        case 0x129d94u: goto label_129d94;
        case 0x129dc8u: goto label_129dc8;
        case 0x129de8u: goto label_129de8;
        case 0x129e3cu: goto label_129e3c;
        case 0x129edcu: goto label_129edc;
        case 0x129f08u: goto label_129f08;
        case 0x129f28u: goto label_129f28;
        case 0x129f6cu: goto label_129f6c;
        case 0x129f7cu: goto label_129f7c;
        case 0x129f90u: goto label_129f90;
        case 0x129f9cu: goto label_129f9c;
        case 0x129facu: goto label_129fac;
        case 0x129fb4u: goto label_129fb4;
        case 0x129fb8u: goto label_129fb8;
        case 0x129fd0u: goto label_129fd0;
        case 0x129fd8u: goto label_129fd8;
        case 0x129fe4u: goto label_129fe4;
        case 0x12a004u: goto label_12a004;
        case 0x12a020u: goto label_12a020;
        case 0x12a02cu: goto label_12a02c;
        case 0x12a03cu: goto label_12a03c;
        case 0x12a04cu: goto label_12a04c;
        case 0x12a100u: goto label_12a100;
        case 0x12a10cu: goto label_12a10c;
        case 0x12a11cu: goto label_12a11c;
        case 0x12a134u: goto label_12a134;
        case 0x12a148u: goto label_12a148;
        case 0x12a1acu: goto label_12a1ac;
        case 0x12a1d4u: goto label_12a1d4;
        case 0x12a1ecu: goto label_12a1ec;
        case 0x12a204u: goto label_12a204;
        case 0x12a250u: goto label_12a250;
        case 0x12a25cu: goto label_12a25c;
        case 0x12a268u: goto label_12a268;
        case 0x12a300u: goto label_12a300;
        case 0x12a318u: goto label_12a318;
        case 0x12a320u: goto label_12a320;
        case 0x12a328u: goto label_12a328;
        case 0x12a33cu: goto label_12a33c;
        case 0x12a348u: goto label_12a348;
        case 0x12a354u: goto label_12a354;
        case 0x12a360u: goto label_12a360;
        case 0x12a38cu: goto label_12a38c;
        case 0x12a394u: goto label_12a394;
        case 0x12a3a0u: goto label_12a3a0;
        case 0x12a3ccu: goto label_12a3cc;
        case 0x12a3e4u: goto label_12a3e4;
        case 0x12a404u: goto label_12a404;
        case 0x12a418u: goto label_12a418;
        case 0x12a424u: goto label_12a424;
        case 0x12a430u: goto label_12a430;
        case 0x12a43cu: goto label_12a43c;
        case 0x12a44cu: goto label_12a44c;
        case 0x12a46cu: goto label_12a46c;
        case 0x12a480u: goto label_12a480;
        case 0x12a490u: goto label_12a490;
        case 0x12a544u: goto label_12a544;
        case 0x12a558u: goto label_12a558;
        case 0x12a568u: goto label_12a568;
        case 0x12a57cu: goto label_12a57c;
        case 0x12a594u: goto label_12a594;
        case 0x12a5acu: goto label_12a5ac;
        case 0x12a5c4u: goto label_12a5c4;
        case 0x12a5d8u: goto label_12a5d8;
        case 0x12a5f0u: goto label_12a5f0;
        case 0x12a624u: goto label_12a624;
        case 0x12a630u: goto label_12a630;
        case 0x12a63cu: goto label_12a63c;
        case 0x12a648u: goto label_12a648;
        case 0x12a654u: goto label_12a654;
        case 0x12a678u: goto label_12a678;
        default: break;
    }

    ctx->pc = 0x1297a8u;

    // 0x1297a8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1297a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1297ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1297acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1297b0: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x1297b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x1297b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1297b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1297b8: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x1297b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x1297bc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1297bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1297c0: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x1297c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x1297c4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1297c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1297c8: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1297c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x1297cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1297ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1297d0: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x1297d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x1297d4: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x1297d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x1297d8: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x1297d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x1297dc: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x1297dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x1297e0: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1297e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x1297e4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1297e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1297e8: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1297e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1297ec: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1297ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_1297f0:
    // 0x1297f0: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x1297f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1297f4: 0x2c62002e  sltiu       $v0, $v1, 0x2E
    ctx->pc = 0x1297f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
    // 0x1297f8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1297F8u;
    {
        const bool branch_taken_0x1297f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1297FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1297F8u;
            // 0x1297fc: 0x92a60000  lbu         $a2, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1297f8) {
            ctx->pc = 0x129844u;
            goto label_129844;
        }
    }
    ctx->pc = 0x129800u;
    // 0x129800: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x129800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x129804: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x129804u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x129808: 0x244221e0  addiu       $v0, $v0, 0x21E0
    ctx->pc = 0x129808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8672));
    // 0x12980c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12980cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x129810: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x129810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x129814: 0x800008  jr          $a0
    ctx->pc = 0x129814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12981Cu: goto label_12981c;
            case 0x129824u: goto label_129824;
            case 0x12983Cu: goto label_12983c;
            case 0x129844u: goto label_129844;
            case 0x129A94u: goto label_129a94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12981Cu;
label_12981c:
    // 0x12981c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12981cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129820: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x129820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_129824:
    // 0x129824: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x129824u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x129828: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x129828u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12982c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12982Cu;
    {
        const bool branch_taken_0x12982c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12982Cu;
            // 0x129830: 0x92a60000  lbu         $a2, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12982c) {
            ctx->pc = 0x129844u;
            goto label_129844;
        }
    }
    ctx->pc = 0x129834u;
    // 0x129834: 0x10000387  b           . + 4 + (0x387 << 2)
    ctx->pc = 0x129834u;
    {
        const bool branch_taken_0x129834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129834u;
            // 0x129838: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129834) {
            ctx->pc = 0x12A654u;
            goto label_12a654;
        }
    }
    ctx->pc = 0x12983Cu;
label_12983c:
    // 0x12983c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x12983Cu;
    {
        const bool branch_taken_0x12983c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12983Cu;
            // 0x129840: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12983c) {
            ctx->pc = 0x1297F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1297f0;
        }
    }
    ctx->pc = 0x129844u;
label_129844:
    // 0x129844: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x129844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x129848: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x129848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12984c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x12984cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x129850: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x129850u;
    {
        const bool branch_taken_0x129850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x129854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129850u;
            // 0x129854: 0x61600  sll         $v0, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129850) {
            ctx->pc = 0x129884u;
            goto label_129884;
        }
    }
    ctx->pc = 0x129858u;
    // 0x129858: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x129858u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12985c: 0x0  nop
    ctx->pc = 0x12985cu;
    // NOP
label_129860:
    // 0x129860: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x129860u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x129864: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x129864u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x129868: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x129868u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12986c: 0x0  nop
    ctx->pc = 0x12986cu;
    // NOP
    // 0x129870: 0x0  nop
    ctx->pc = 0x129870u;
    // NOP
    // 0x129874: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129874u;
    {
        const bool branch_taken_0x129874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x129874) {
            ctx->pc = 0x129860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129860;
        }
    }
    ctx->pc = 0x12987Cu;
    // 0x12987c: 0x10400375  beqz        $v0, . + 4 + (0x375 << 2)
    ctx->pc = 0x12987Cu;
    {
        const bool branch_taken_0x12987c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12987Cu;
            // 0x129880: 0x61600  sll         $v0, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12987c) {
            ctx->pc = 0x12A654u;
            goto label_12a654;
        }
    }
    ctx->pc = 0x129884u;
label_129884:
    // 0x129884: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x129884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x129888: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x129888u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x12988c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12988cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129890: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x129890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x129894: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x129894u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129898: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x129898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x12989c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12989Cu;
    {
        const bool branch_taken_0x12989c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1298A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12989Cu;
            // 0x1298a0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12989c) {
            ctx->pc = 0x129910u;
            goto label_129910;
        }
    }
    ctx->pc = 0x1298A4u;
    // 0x1298a4: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x1298a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x1298a8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1298A8u;
    {
        const bool branch_taken_0x1298a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1298ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1298A8u;
            // 0x1298ac: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298a8) {
            ctx->pc = 0x129914u;
            goto label_129914;
        }
    }
    ctx->pc = 0x1298B0u;
    // 0x1298b0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1298b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1298b4: 0x2a820009  slti        $v0, $s4, 0x9
    ctx->pc = 0x1298b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
label_1298b8:
    // 0x1298b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1298B8u;
    {
        const bool branch_taken_0x1298b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1298BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1298B8u;
            // 0x1298bc: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298b8) {
            ctx->pc = 0x1298D4u;
            goto label_1298d4;
        }
    }
    ctx->pc = 0x1298C0u;
    // 0x1298c0: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x1298c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1298c4: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x1298c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1298c8: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1298c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1298cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1298CCu;
    {
        const bool branch_taken_0x1298cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1298D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1298CCu;
            // 0x1298d0: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298cc) {
            ctx->pc = 0x1298F0u;
            goto label_1298f0;
        }
    }
    ctx->pc = 0x1298D4u;
label_1298d4:
    // 0x1298d4: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x1298d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1298d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1298D8u;
    {
        const bool branch_taken_0x1298d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1298DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1298D8u;
            // 0x1298dc: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298d8) {
            ctx->pc = 0x1298F0u;
            goto label_1298f0;
        }
    }
    ctx->pc = 0x1298E0u;
    // 0x1298e0: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x1298e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x1298e4: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x1298e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x1298e8: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x1298e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1298ec: 0x6452ffd0  daddiu      $s2, $v0, -0x30
    ctx->pc = 0x1298ecu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
label_1298f0:
    // 0x1298f0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1298f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1298f4: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x1298f4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1298f8: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x1298f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1298fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1298FCu;
    {
        const bool branch_taken_0x1298fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1298FCu;
            // 0x129900: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1298fc) {
            ctx->pc = 0x129910u;
            goto label_129910;
        }
    }
    ctx->pc = 0x129904u;
    // 0x129904: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x129904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x129908: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x129908u;
    {
        const bool branch_taken_0x129908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12990Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129908u;
            // 0x12990c: 0x2a820009  slti        $v0, $s4, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129908) {
            ctx->pc = 0x1298B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1298b8;
        }
    }
    ctx->pc = 0x129910u;
label_129910:
    // 0x129910: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x129910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_129914:
    // 0x129914: 0x14820053  bne         $a0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x129914u;
    {
        const bool branch_taken_0x129914 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x129918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129914u;
            // 0x129918: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129914) {
            ctx->pc = 0x129A64u;
            goto label_129a64;
        }
    }
    ctx->pc = 0x12991Cu;
    // 0x12991c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12991cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x129920: 0x16800015  bnez        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x129920u;
    {
        const bool branch_taken_0x129920 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x129924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129920u;
            // 0x129924: 0x82a40000  lb          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129920) {
            ctx->pc = 0x129978u;
            goto label_129978;
        }
    }
    ctx->pc = 0x129928u;
    // 0x129928: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x129928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12992c: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12992Cu;
    {
        const bool branch_taken_0x12992c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x12992c) {
            ctx->pc = 0x129930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12992Cu;
            // 0x129930: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129958u;
            goto label_129958;
        }
    }
    ctx->pc = 0x129934u;
    // 0x129934: 0x0  nop
    ctx->pc = 0x129934u;
    // NOP
label_129938:
    // 0x129938: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x129938u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x12993c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x12993cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x129940: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x129940u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x129944: 0x0  nop
    ctx->pc = 0x129944u;
    // NOP
    // 0x129948: 0x0  nop
    ctx->pc = 0x129948u;
    // NOP
    // 0x12994c: 0x1082fffa  beq         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12994Cu;
    {
        const bool branch_taken_0x12994c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12994c) {
            ctx->pc = 0x129938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129938;
        }
    }
    ctx->pc = 0x129954u;
    // 0x129954: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x129954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_129958:
    // 0x129958: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x129958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x12995c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x12995Cu;
    {
        const bool branch_taken_0x12995c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12995Cu;
            // 0x129960: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12995c) {
            ctx->pc = 0x129A68u;
            goto label_129a68;
        }
    }
    ctx->pc = 0x129964u;
    // 0x129964: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x129964u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129968: 0x2486ffd0  addiu       $a2, $a0, -0x30
    ctx->pc = 0x129968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x12996c: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x12996cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x129970: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x129970u;
    {
        const bool branch_taken_0x129970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129970u;
            // 0x129974: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129970) {
            ctx->pc = 0x129988u;
            goto label_129988;
        }
    }
    ctx->pc = 0x129978u;
label_129978:
    // 0x129978: 0x2486ffd0  addiu       $a2, $a0, -0x30
    ctx->pc = 0x129978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x12997c: 0x2cc2000a  sltiu       $v0, $a2, 0xA
    ctx->pc = 0x12997cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x129980: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x129980u;
    {
        const bool branch_taken_0x129980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129980u;
            // 0x129984: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129980) {
            ctx->pc = 0x129A68u;
            goto label_129a68;
        }
    }
    ctx->pc = 0x129988u;
label_129988:
    // 0x129988: 0x10c0002e  beqz        $a2, . + 4 + (0x2E << 2)
    ctx->pc = 0x129988u;
    {
        const bool branch_taken_0x129988 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x12998Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129988u;
            // 0x12998c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129988) {
            ctx->pc = 0x129A44u;
            goto label_129a44;
        }
    }
    ctx->pc = 0x129990u;
    // 0x129990: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x129990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129994: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x129994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x129998: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x129998u;
    {
        const bool branch_taken_0x129998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12999Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129998u;
            // 0x12999c: 0x1284821  addu        $t1, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129998) {
            ctx->pc = 0x1299F4u;
            goto label_1299f4;
        }
    }
    ctx->pc = 0x1299A0u;
    // 0x1299a0: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x1299a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1299a4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1299a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1299a8:
    // 0x1299a8: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x1299a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1299ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1299ACu;
    {
        const bool branch_taken_0x1299ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1299B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1299ACu;
            // 0x1299b0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299ac) {
            ctx->pc = 0x1299C8u;
            goto label_1299c8;
        }
    }
    ctx->pc = 0x1299B4u;
    // 0x1299b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1299b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1299b8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1299b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1299bc: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1299bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1299c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1299C0u;
    {
        const bool branch_taken_0x1299c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1299C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1299C0u;
            // 0x1299c4: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299c0) {
            ctx->pc = 0x1299DCu;
            goto label_1299dc;
        }
    }
    ctx->pc = 0x1299C8u;
label_1299c8:
    // 0x1299c8: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x1299c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1299cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1299CCu;
    {
        const bool branch_taken_0x1299cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1299D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1299CCu;
            // 0x1299d0: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299cc) {
            ctx->pc = 0x1299DCu;
            goto label_1299dc;
        }
    }
    ctx->pc = 0x1299D4u;
    // 0x1299d4: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x1299d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x1299d8: 0x29078  dsll        $s2, $v0, 1
    ctx->pc = 0x1299d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 1);
label_1299dc:
    // 0x1299dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1299dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1299e0: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1299e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1299e4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1299E4u;
    {
        const bool branch_taken_0x1299e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1299E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1299E4u;
            // 0x1299e8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299e4) {
            ctx->pc = 0x1299A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1299a8;
        }
    }
    ctx->pc = 0x1299ECu;
    // 0x1299ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1299ECu;
    {
        const bool branch_taken_0x1299ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1299F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1299ECu;
            // 0x1299f0: 0x28420009  slti        $v0, $v0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1299ec) {
            ctx->pc = 0x129A00u;
            goto label_129a00;
        }
    }
    ctx->pc = 0x1299F4u;
label_1299f4:
    // 0x1299f4: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x1299f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1299f8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1299f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1299fc: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x1299fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_129a00:
    // 0x129a00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x129A00u;
    {
        const bool branch_taken_0x129a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129A00u;
            // 0x129a04: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a00) {
            ctx->pc = 0x129A24u;
            goto label_129a24;
        }
    }
    ctx->pc = 0x129A08u;
    // 0x129a08: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x129a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129a0c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x129a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x129a10: 0xc00013  mtlo        $a2
    ctx->pc = 0x129a10u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x129a14: 0x70820000  madd        $zero, $a0, $v0
    ctx->pc = 0x129a14u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x129a18: 0x2012  mflo        $a0
    ctx->pc = 0x129a18u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x129a1c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x129A1Cu;
    {
        const bool branch_taken_0x129a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129A1Cu;
            // 0x129a20: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a1c) {
            ctx->pc = 0x129A3Cu;
            goto label_129a3c;
        }
    }
    ctx->pc = 0x129A24u;
label_129a24:
    // 0x129a24: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x129a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x129a28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x129A28u;
    {
        const bool branch_taken_0x129a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129A28u;
            // 0x129a2c: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a28) {
            ctx->pc = 0x129A3Cu;
            goto label_129a3c;
        }
    }
    ctx->pc = 0x129A30u;
    // 0x129a30: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x129a30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x129a34: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x129a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x129a38: 0xc2902d  daddu       $s2, $a2, $v0
    ctx->pc = 0x129a38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
label_129a3c:
    // 0x129a3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x129A3Cu;
    {
        const bool branch_taken_0x129a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129A3Cu;
            // 0x129a40: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a3c) {
            ctx->pc = 0x129A48u;
            goto label_129a48;
        }
    }
    ctx->pc = 0x129A44u;
label_129a44:
    // 0x129a44: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x129a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_129a48:
    // 0x129a48: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x129a48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a4c: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x129a4cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x129a50: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x129a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x129a54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x129a54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a58: 0x2cc3000a  sltiu       $v1, $a2, 0xA
    ctx->pc = 0x129a58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x129a5c: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x129A5Cu;
    {
        const bool branch_taken_0x129a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x129a5c) {
            ctx->pc = 0x129988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129988;
        }
    }
    ctx->pc = 0x129A64u;
label_129a64:
    // 0x129a64: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x129a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_129a68:
    // 0x129a68: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x129A68u;
    {
        const bool branch_taken_0x129a68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x129A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129A68u;
            // 0x129a6c: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a68) {
            ctx->pc = 0x129A7Cu;
            goto label_129a7c;
        }
    }
    ctx->pc = 0x129A70u;
    // 0x129a70: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x129a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x129a74: 0x14820048  bne         $a0, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x129A74u;
    {
        const bool branch_taken_0x129a74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x129a74) {
            ctx->pc = 0x129B98u;
            goto label_129b98;
        }
    }
    ctx->pc = 0x129A7Cu;
label_129a7c:
    // 0x129a7c: 0x56800007  bnel        $s4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x129A7Cu;
    {
        const bool branch_taken_0x129a7c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x129a7c) {
            ctx->pc = 0x129A80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129A7Cu;
            // 0x129a80: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129A9Cu;
            goto label_129a9c;
        }
    }
    ctx->pc = 0x129A84u;
    // 0x129a84: 0x55000005  bnel        $t0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x129A84u;
    {
        const bool branch_taken_0x129a84 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x129a84) {
            ctx->pc = 0x129A88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129A84u;
            // 0x129a88: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129A9Cu;
            goto label_129a9c;
        }
    }
    ctx->pc = 0x129A8Cu;
    // 0x129a8c: 0x55400003  bnel        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x129A8Cu;
    {
        const bool branch_taken_0x129a8c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x129a8c) {
            ctx->pc = 0x129A90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129A8Cu;
            // 0x129a90: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129A9Cu;
            goto label_129a9c;
        }
    }
    ctx->pc = 0x129A94u;
label_129a94:
    // 0x129a94: 0x100002ef  b           . + 4 + (0x2EF << 2)
    ctx->pc = 0x129A94u;
    {
        const bool branch_taken_0x129a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129A94u;
            // 0x129a98: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129a94) {
            ctx->pc = 0x12A654u;
            goto label_12a654;
        }
    }
    ctx->pc = 0x129A9Cu;
label_129a9c:
    // 0x129a9c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x129a9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x129aa0: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x129aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x129aa4: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x129aa4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x129aa8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129AA8u;
    {
        const bool branch_taken_0x129aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x129AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129AA8u;
            // 0x129aac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129aa8) {
            ctx->pc = 0x129AC0u;
            goto label_129ac0;
        }
    }
    ctx->pc = 0x129AB0u;
    // 0x129ab0: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x129ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x129ab4: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129AB4u;
    {
        const bool branch_taken_0x129ab4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x129AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129AB4u;
            // 0x129ab8: 0x2482ffd0  addiu       $v0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ab4) {
            ctx->pc = 0x129ACCu;
            goto label_129acc;
        }
    }
    ctx->pc = 0x129ABCu;
    // 0x129abc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x129abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129ac0:
    // 0x129ac0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x129ac0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x129ac4: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x129ac4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x129ac8: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x129ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_129acc:
    // 0x129acc: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x129accu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x129ad0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x129AD0u;
    {
        const bool branch_taken_0x129ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129AD0u;
            // 0x129ad4: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ad0) {
            ctx->pc = 0x129B94u;
            goto label_129b94;
        }
    }
    ctx->pc = 0x129AD8u;
    // 0x129ad8: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x129AD8u;
    {
        const bool branch_taken_0x129ad8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x129ad8) {
            ctx->pc = 0x129ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129AD8u;
            // 0x129adc: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129B00u;
            goto label_129b00;
        }
    }
    ctx->pc = 0x129AE0u;
label_129ae0:
    // 0x129ae0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x129ae0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x129ae4: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x129ae4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x129ae8: 0x0  nop
    ctx->pc = 0x129ae8u;
    // NOP
    // 0x129aec: 0x0  nop
    ctx->pc = 0x129aecu;
    // NOP
    // 0x129af0: 0x0  nop
    ctx->pc = 0x129af0u;
    // NOP
    // 0x129af4: 0x1082fffa  beq         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129AF4u;
    {
        const bool branch_taken_0x129af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x129af4) {
            ctx->pc = 0x129AE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129ae0;
        }
    }
    ctx->pc = 0x129AFCu;
    // 0x129afc: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x129afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_129b00:
    // 0x129b00: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x129b00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x129b04: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x129B04u;
    {
        const bool branch_taken_0x129b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B04u;
            // 0x129b08: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b04) {
            ctx->pc = 0x129B8Cu;
            goto label_129b8c;
        }
    }
    ctx->pc = 0x129B0Cu;
    // 0x129b0c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x129b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129b10: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x129b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x129b14: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x129b14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x129b18: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x129b18u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x129b1c: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x129b1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x129b20: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x129B20u;
    {
        const bool branch_taken_0x129b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B20u;
            // 0x129b24: 0x2a61023  subu        $v0, $s5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b20) {
            ctx->pc = 0x129B64u;
            goto label_129b64;
        }
    }
    ctx->pc = 0x129B28u;
label_129b28:
    // 0x129b28: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x129b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x129b2c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x129B2Cu;
    {
        const bool branch_taken_0x129b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B2Cu;
            // 0x129b30: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b2c) {
            ctx->pc = 0x129B60u;
            goto label_129b60;
        }
    }
    ctx->pc = 0x129B34u;
    // 0x129b34: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x129b34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x129b38: 0x310b8  dsll        $v0, $v1, 2
    ctx->pc = 0x129b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 2);
    // 0x129b3c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x129b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x129b40: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x129b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x129b44: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x129b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x129b48: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x129b48u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x129b4c: 0x6442ffd0  daddiu      $v0, $v0, -0x30
    ctx->pc = 0x129b4cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
    // 0x129b50: 0x28830030  slti        $v1, $a0, 0x30
    ctx->pc = 0x129b50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x129b54: 0x1060fff4  beqz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x129B54u;
    {
        const bool branch_taken_0x129b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x129B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B54u;
            // 0x129b58: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b54) {
            ctx->pc = 0x129B28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129b28;
        }
    }
    ctx->pc = 0x129B5Cu;
    // 0x129b5c: 0x0  nop
    ctx->pc = 0x129b5cu;
    // NOP
label_129b60:
    // 0x129b60: 0x2a61023  subu        $v0, $s5, $a2
    ctx->pc = 0x129b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_129b64:
    // 0x129b64: 0x3c040098  lui         $a0, 0x98
    ctx->pc = 0x129b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)152 << 16));
    // 0x129b68: 0x3484967f  ori         $a0, $a0, 0x967F
    ctx->pc = 0x129b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)38527);
    // 0x129b6c: 0xdfa60010  ld          $a2, 0x10($sp)
    ctx->pc = 0x129b6cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129b70: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x129b70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x129b74: 0x82300a  movz        $a2, $a0, $v0
    ctx->pc = 0x129b74u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4));
    // 0x129b78: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x129b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x129b7c: 0x6182f  dsubu       $v1, $zero, $a2
    ctx->pc = 0x129b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x129b80: 0x67300b  movn        $a2, $v1, $a3
    ctx->pc = 0x129b80u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3));
    // 0x129b84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x129B84u;
    {
        const bool branch_taken_0x129b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B84u;
            // 0x129b88: 0xffa60010  sd          $a2, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b84) {
            ctx->pc = 0x129B98u;
            goto label_129b98;
        }
    }
    ctx->pc = 0x129B8Cu;
label_129b8c:
    // 0x129b8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x129B8Cu;
    {
        const bool branch_taken_0x129b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B8Cu;
            // 0x129b90: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b8c) {
            ctx->pc = 0x129B98u;
            goto label_129b98;
        }
    }
    ctx->pc = 0x129B94u;
label_129b94:
    // 0x129b94: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x129b94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_129b98:
    // 0x129b98: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x129B98u;
    {
        const bool branch_taken_0x129b98 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x129B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129B98u;
            // 0x129b9c: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b98) {
            ctx->pc = 0x129BACu;
            goto label_129bac;
        }
    }
    ctx->pc = 0x129BA0u;
    // 0x129ba0: 0x2aa280b  movn        $a1, $s5, $t2
    ctx->pc = 0x129ba0u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21));
    // 0x129ba4: 0x100002ab  b           . + 4 + (0x2AB << 2)
    ctx->pc = 0x129BA4u;
    {
        const bool branch_taken_0x129ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129BA4u;
            // 0x129ba8: 0xa8a80a  movz        $s5, $a1, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) == 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ba4) {
            ctx->pc = 0x12A654u;
            goto label_12a654;
        }
    }
    ctx->pc = 0x129BACu;
label_129bac:
    // 0x129bac: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x129bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x129bb0: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x129bb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x129bb4: 0x29ef00a  movz        $fp, $s4, $fp
    ctx->pc = 0x129bb4u;
    if (GPR_U64(ctx, 30) == 0) SET_GPR_U64(ctx, 30, GPR_U64(ctx, 20));
    // 0x129bb8: 0x69182f  dsubu       $v1, $v1, $t1
    ctx->pc = 0x129bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x129bbc: 0x282980b  movn        $s3, $s4, $v0
    ctx->pc = 0x129bbcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20));
    // 0x129bc0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x129bc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x129bc4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x129bc4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x129bc8: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x129bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x129bcc: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x129bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x129bd0: 0xc0a215c  jal         func_288570
    ctx->pc = 0x129BD0u;
    SET_GPR_U32(ctx, 31, 0x129BD8u);
    ctx->pc = 0x129BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129BD0u;
            // 0x129bd4: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129BD8u; }
        if (ctx->pc != 0x129BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129BD8u; }
        if (ctx->pc != 0x129BD8u) { return; }
    }
    ctx->pc = 0x129BD8u;
label_129bd8:
    // 0x129bd8: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x129bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129bdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129be0: 0x4c10006  bgez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x129BE0u;
    {
        const bool branch_taken_0x129be0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x129BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129BE0u;
            // 0x129be4: 0x8fb00068  lw          $s0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129be0) {
            ctx->pc = 0x129BFCu;
            goto label_129bfc;
        }
    }
    ctx->pc = 0x129BE8u;
    // 0x129be8: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x129be8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x129bec: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x129becu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x129bf0: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x129BF0u;
    SET_GPR_U32(ctx, 31, 0x129BF8u);
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129BF8u; }
        if (ctx->pc != 0x129BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129BF8u; }
        if (ctx->pc != 0x129BF8u) { return; }
    }
    ctx->pc = 0x129BF8u;
label_129bf8:
    // 0x129bf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129bfc:
    // 0x129bfc: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x129bfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x129c00: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x129C00u;
    {
        const bool branch_taken_0x129c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129C00u;
            // 0x129c04: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c00) {
            ctx->pc = 0x129C6Cu;
            goto label_129c6c;
        }
    }
    ctx->pc = 0x129C08u;
    // 0x129c08: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x129c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x129c0c: 0x2662fff7  addiu       $v0, $s3, -0x9
    ctx->pc = 0x129c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967287));
    // 0x129c10: 0x246320c8  addiu       $v1, $v1, 0x20C8
    ctx->pc = 0x129c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8392));
    // 0x129c14: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x129c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x129c18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x129c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x129c1c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x129c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c20: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x129C20u;
    SET_GPR_U32(ctx, 31, 0x129C28u);
    ctx->pc = 0x129C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129C20u;
            // 0x129c24: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129C28u; }
        if (ctx->pc != 0x129C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129C28u; }
        if (ctx->pc != 0x129C28u) { return; }
    }
    ctx->pc = 0x129C28u;
label_129c28:
    // 0x129c28: 0x6400005  bltz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x129C28u;
    {
        const bool branch_taken_0x129c28 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x129C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129C28u;
            // 0x129c2c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c28) {
            ctx->pc = 0x129C40u;
            goto label_129c40;
        }
    }
    ctx->pc = 0x129C30u;
    // 0x129c30: 0xc0a1a2e  jal         func_2868B8
    ctx->pc = 0x129C30u;
    SET_GPR_U32(ctx, 31, 0x129C38u);
    ctx->pc = 0x129C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129C30u;
            // 0x129c34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868B8u;
    if (runtime->hasFunction(0x2868B8u)) {
        auto targetFn = runtime->lookupFunction(0x2868B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129C38u; }
        if (ctx->pc != 0x129C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___floatdidf_0x2868b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129C38u; }
        if (ctx->pc != 0x129C38u) { return; }
    }
    ctx->pc = 0x129C38u;
label_129c38:
    // 0x129c38: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x129C38u;
    {
        const bool branch_taken_0x129c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129C38u;
            // 0x129c3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c38) {
            ctx->pc = 0x129C60u;
            goto label_129c60;
        }
    }
    ctx->pc = 0x129C40u;
label_129c40:
    // 0x129c40: 0x12107a  dsrl        $v0, $s2, 1
    ctx->pc = 0x129c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> 1);
    // 0x129c44: 0x32440001  andi        $a0, $s2, 0x1
    ctx->pc = 0x129c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x129c48: 0xc0a1a2e  jal         func_2868B8
    ctx->pc = 0x129C48u;
    SET_GPR_U32(ctx, 31, 0x129C50u);
    ctx->pc = 0x129C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129C48u;
            // 0x129c4c: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868B8u;
    if (runtime->hasFunction(0x2868B8u)) {
        auto targetFn = runtime->lookupFunction(0x2868B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129C50u; }
        if (ctx->pc != 0x129C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___floatdidf_0x2868b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129C50u; }
        if (ctx->pc != 0x129C50u) { return; }
    }
    ctx->pc = 0x129C50u;
label_129c50:
    // 0x129c50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c54: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x129C54u;
    SET_GPR_U32(ctx, 31, 0x129C5Cu);
    ctx->pc = 0x129C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129C54u;
            // 0x129c58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129C5Cu; }
        if (ctx->pc != 0x129C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129C5Cu; }
        if (ctx->pc != 0x129C5Cu) { return; }
    }
    ctx->pc = 0x129C5Cu;
label_129c5c:
    // 0x129c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x129c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_129c60:
    // 0x129c60: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x129C60u;
    SET_GPR_U32(ctx, 31, 0x129C68u);
    ctx->pc = 0x129C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129C60u;
            // 0x129c64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129C68u; }
        if (ctx->pc != 0x129C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129C68u; }
        if (ctx->pc != 0x129C68u) { return; }
    }
    ctx->pc = 0x129C68u;
label_129c68:
    // 0x129c68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x129c68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129c6c:
    // 0x129c6c: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x129c6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x129c70: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x129C70u;
    {
        const bool branch_taken_0x129c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129C70u;
            // 0x129c74: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c70) {
            ctx->pc = 0x129D44u;
            goto label_129d44;
        }
    }
    ctx->pc = 0x129C78u;
    // 0x129c78: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x129c78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129c7c: 0x50400276  beql        $v0, $zero, . + 4 + (0x276 << 2)
    ctx->pc = 0x129C7Cu;
    {
        const bool branch_taken_0x129c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129c7c) {
            ctx->pc = 0x129C80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129C7Cu;
            // 0x129c80: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A658u;
            goto label_12a658;
        }
    }
    ctx->pc = 0x129C84u;
    // 0x129c84: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x129C84u;
    {
        const bool branch_taken_0x129c84 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x129C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129C84u;
            // 0x129c88: 0x28420017  slti        $v0, $v0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c84) {
            ctx->pc = 0x129D10u;
            goto label_129d10;
        }
    }
    ctx->pc = 0x129C8Cu;
    // 0x129c8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x129C8Cu;
    {
        const bool branch_taken_0x129c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129C8Cu;
            // 0x129c90: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c8c) {
            ctx->pc = 0x129CA8u;
            goto label_129ca8;
        }
    }
    ctx->pc = 0x129C94u;
    // 0x129c94: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x129c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x129c98: 0x244220c8  addiu       $v0, $v0, 0x20C8
    ctx->pc = 0x129c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8392));
    // 0x129c9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x129c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ca0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x129CA0u;
    {
        const bool branch_taken_0x129ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129CA0u;
            // 0x129ca4: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ca0) {
            ctx->pc = 0x129D00u;
            goto label_129d00;
        }
    }
    ctx->pc = 0x129CA8u;
label_129ca8:
    // 0x129ca8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x129ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x129cac: 0x743823  subu        $a3, $v1, $s4
    ctx->pc = 0x129cacu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x129cb0: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x129cb0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129cb4: 0x24e20016  addiu       $v0, $a3, 0x16
    ctx->pc = 0x129cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 22));
    // 0x129cb8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x129cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x129cbc: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x129CBCu;
    {
        const bool branch_taken_0x129cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129CBCu;
            // 0x129cc0: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129cbc) {
            ctx->pc = 0x129D48u;
            goto label_129d48;
        }
    }
    ctx->pc = 0x129CC4u;
    // 0x129cc4: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x129cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x129cc8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x129cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x129ccc: 0x261020c8  addiu       $s0, $s0, 0x20C8
    ctx->pc = 0x129cccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8392));
    // 0x129cd0: 0x67182f  dsubu       $v1, $v1, $a3
    ctx->pc = 0x129cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 7));
    // 0x129cd4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x129cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x129cd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x129cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129cdc: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x129cdcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129ce0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x129CE0u;
    SET_GPR_U32(ctx, 31, 0x129CE8u);
    ctx->pc = 0x129CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129CE0u;
            // 0x129ce4: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129CE8u; }
        if (ctx->pc != 0x129CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129CE8u; }
        if (ctx->pc != 0x129CE8u) { return; }
    }
    ctx->pc = 0x129CE8u;
label_129ce8:
    // 0x129ce8: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x129ce8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129cec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x129cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129cf0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x129cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x129cf4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x129cf4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x129cf8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x129cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x129cfc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x129cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_129d00:
    // 0x129d00: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x129D00u;
    SET_GPR_U32(ctx, 31, 0x129D08u);
    ctx->pc = 0x129D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129D00u;
            // 0x129d04: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129D08u; }
        if (ctx->pc != 0x129D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129D08u; }
        if (ctx->pc != 0x129D08u) { return; }
    }
    ctx->pc = 0x129D08u;
label_129d08:
    // 0x129d08: 0x10000252  b           . + 4 + (0x252 << 2)
    ctx->pc = 0x129D08u;
    {
        const bool branch_taken_0x129d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129D08u;
            // 0x129d0c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d08) {
            ctx->pc = 0x12A654u;
            goto label_12a654;
        }
    }
    ctx->pc = 0x129D10u;
label_129d10:
    // 0x129d10: 0xdfa60010  ld          $a2, 0x10($sp)
    ctx->pc = 0x129d10u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129d14: 0x28c2ffea  slti        $v0, $a2, -0x16
    ctx->pc = 0x129d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967274) ? 1 : 0);
    // 0x129d18: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x129D18u;
    {
        const bool branch_taken_0x129d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129D18u;
            // 0x129d1c: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d18) {
            ctx->pc = 0x129D48u;
            goto label_129d48;
        }
    }
    ctx->pc = 0x129D20u;
    // 0x129d20: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x129d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x129d24: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x129d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x129d28: 0x244220c8  addiu       $v0, $v0, 0x20C8
    ctx->pc = 0x129d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8392));
    // 0x129d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x129d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d30: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x129d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x129d34: 0xc0a20a8  jal         func_2882A0
    ctx->pc = 0x129D34u;
    SET_GPR_U32(ctx, 31, 0x129D3Cu);
    ctx->pc = 0x129D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129D34u;
            // 0x129d38: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2882A0u;
    if (runtime->hasFunction(0x2882A0u)) {
        auto targetFn = runtime->lookupFunction(0x2882A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129D3Cu; }
        if (ctx->pc != 0x129D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2882a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129D3Cu; }
        if (ctx->pc != 0x129D3Cu) { return; }
    }
    ctx->pc = 0x129D3Cu;
label_129d3c:
    // 0x129d3c: 0x10000245  b           . + 4 + (0x245 << 2)
    ctx->pc = 0x129D3Cu;
    {
        const bool branch_taken_0x129d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129D3Cu;
            // 0x129d40: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d3c) {
            ctx->pc = 0x12A654u;
            goto label_12a654;
        }
    }
    ctx->pc = 0x129D44u;
label_129d44:
    // 0x129d44: 0x2931023  subu        $v0, $s4, $s3
    ctx->pc = 0x129d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_129d48:
    // 0x129d48: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x129d48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x129d4c: 0x1a000057  blez        $s0, . + 4 + (0x57 << 2)
    ctx->pc = 0x129D4Cu;
    {
        const bool branch_taken_0x129d4c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x129D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129D4Cu;
            // 0x129d50: 0x3207000f  andi        $a3, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d4c) {
            ctx->pc = 0x129EACu;
            goto label_129eac;
        }
    }
    ctx->pc = 0x129D54u;
    // 0x129d54: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x129D54u;
    {
        const bool branch_taken_0x129d54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129D54u;
            // 0x129d58: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d54) {
            ctx->pc = 0x129D78u;
            goto label_129d78;
        }
    }
    ctx->pc = 0x129D5Cu;
    // 0x129d5c: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x129d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x129d60: 0x244220c8  addiu       $v0, $v0, 0x20C8
    ctx->pc = 0x129d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8392));
    // 0x129d64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x129d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d68: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x129d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x129d6c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x129D6Cu;
    SET_GPR_U32(ctx, 31, 0x129D74u);
    ctx->pc = 0x129D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129D6Cu;
            // 0x129d70: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129D74u; }
        if (ctx->pc != 0x129D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129D74u; }
        if (ctx->pc != 0x129D74u) { return; }
    }
    ctx->pc = 0x129D74u;
label_129d74:
    // 0x129d74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x129d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129d78:
    // 0x129d78: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x129d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x129d7c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x129d7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x129d80: 0x1200009a  beqz        $s0, . + 4 + (0x9A << 2)
    ctx->pc = 0x129D80u;
    {
        const bool branch_taken_0x129d80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129D80u;
            // 0x129d84: 0x2a020135  slti        $v0, $s0, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)309) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d80) {
            ctx->pc = 0x129FECu;
            goto label_129fec;
        }
    }
    ctx->pc = 0x129D88u;
    // 0x129d88: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x129D88u;
    {
        const bool branch_taken_0x129d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129d88) {
            ctx->pc = 0x129D8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129D88u;
            // 0x129d8c: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129DB0u;
            goto label_129db0;
        }
    }
    ctx->pc = 0x129D90u;
label_129d90:
    // 0x129d90: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x129d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_129d94:
    // 0x129d94: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x129d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x129d98: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x129d98u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x129d9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x129d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x129da0: 0x1440021d  bnez        $v0, . + 4 + (0x21D << 2)
    ctx->pc = 0x129DA0u;
    {
        const bool branch_taken_0x129da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129DA0u;
            // 0x129da4: 0xdc711928  ld          $s1, 0x1928($v1) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 6440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129da0) {
            ctx->pc = 0x12A618u;
            goto label_12a618;
        }
    }
    ctx->pc = 0x129DA8u;
    // 0x129da8: 0x1000022b  b           . + 4 + (0x22B << 2)
    ctx->pc = 0x129DA8u;
    {
        const bool branch_taken_0x129da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129DA8u;
            // 0x129dac: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129da8) {
            ctx->pc = 0x12A658u;
            goto label_12a658;
        }
    }
    ctx->pc = 0x129DB0u;
label_129db0:
    // 0x129db0: 0x1200008e  beqz        $s0, . + 4 + (0x8E << 2)
    ctx->pc = 0x129DB0u;
    {
        const bool branch_taken_0x129db0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x129DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129DB0u;
            // 0x129db4: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129db0) {
            ctx->pc = 0x129FECu;
            goto label_129fec;
        }
    }
    ctx->pc = 0x129DB8u;
    // 0x129db8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x129DB8u;
    {
        const bool branch_taken_0x129db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129DB8u;
            // 0x129dbc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129db8) {
            ctx->pc = 0x129E04u;
            goto label_129e04;
        }
    }
    ctx->pc = 0x129DC0u;
    // 0x129dc0: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x129dc0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
    // 0x129dc4: 0x0  nop
    ctx->pc = 0x129dc4u;
    // NOP
label_129dc8:
    // 0x129dc8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x129dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x129dcc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x129DCCu;
    {
        const bool branch_taken_0x129dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129DCCu;
            // 0x129dd0: 0x26432190  addiu       $v1, $s2, 0x2190 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129dcc) {
            ctx->pc = 0x129DECu;
            goto label_129dec;
        }
    }
    ctx->pc = 0x129DD4u;
    // 0x129dd4: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x129dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x129dd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x129dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x129ddc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x129ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129de0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x129DE0u;
    SET_GPR_U32(ctx, 31, 0x129DE8u);
    ctx->pc = 0x129DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129DE0u;
            // 0x129de4: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129DE8u; }
        if (ctx->pc != 0x129DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129DE8u; }
        if (ctx->pc != 0x129DE8u) { return; }
    }
    ctx->pc = 0x129DE8u;
label_129de8:
    // 0x129de8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x129de8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129dec:
    // 0x129dec: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x129decu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x129df0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x129df0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x129df4: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x129DF4u;
    {
        const bool branch_taken_0x129df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129DF4u;
            // 0x129df8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129df4) {
            ctx->pc = 0x129DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129dc8;
        }
    }
    ctx->pc = 0x129DFCu;
    // 0x129dfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x129DFCu;
    {
        const bool branch_taken_0x129dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129DFCu;
            // 0x129e00: 0x26442190  addiu       $a0, $s2, 0x2190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129dfc) {
            ctx->pc = 0x129E0Cu;
            goto label_129e0c;
        }
    }
    ctx->pc = 0x129E04u;
label_129e04:
    // 0x129e04: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x129e04u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
    // 0x129e08: 0x26442190  addiu       $a0, $s2, 0x2190
    ctx->pc = 0x129e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8592));
label_129e0c:
    // 0x129e0c: 0x11283f  dsra32      $a1, $s1, 0
    ctx->pc = 0x129e0cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x129e10: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x129e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x129e14: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x129e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x129e18: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x129e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x129e1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x129e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x129e20: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x129e20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x129e24: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x129e24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x129e28: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x129e28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x129e2c: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x129e2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x129e30: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x129e30u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x129e34: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x129E34u;
    SET_GPR_U32(ctx, 31, 0x129E3Cu);
    ctx->pc = 0x129E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129E34u;
            // 0x129e38: 0x2252825  or          $a1, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E3Cu; }
        if (ctx->pc != 0x129E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129E3Cu; }
        if (ctx->pc != 0x129E3Cu) { return; }
    }
    ctx->pc = 0x129E3Cu;
label_129e3c:
    // 0x129e3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x129e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129e40: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x129e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x129e44: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x129e44u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x129e48: 0x3c027ca0  lui         $v0, 0x7CA0
    ctx->pc = 0x129e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31904 << 16));
    // 0x129e4c: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x129e4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x129e50: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x129e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x129e54: 0x0  nop
    ctx->pc = 0x129e54u;
    // NOP
    // 0x129e58: 0x0  nop
    ctx->pc = 0x129e58u;
    // NOP
    // 0x129e5c: 0x0  nop
    ctx->pc = 0x129e5cu;
    // NOP
    // 0x129e60: 0x0  nop
    ctx->pc = 0x129e60u;
    // NOP
    // 0x129e64: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x129E64u;
    {
        const bool branch_taken_0x129e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129E64u;
            // 0x129e68: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e64) {
            ctx->pc = 0x129D94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129d94;
        }
    }
    ctx->pc = 0x129E6Cu;
    // 0x129e6c: 0x3c027c90  lui         $v0, 0x7C90
    ctx->pc = 0x129e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31888 << 16));
    // 0x129e70: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x129e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x129e74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x129E74u;
    {
        const bool branch_taken_0x129e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129E74u;
            // 0x129e78: 0x3c020350  lui         $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e74) {
            ctx->pc = 0x129E98u;
            goto label_129e98;
        }
    }
    ctx->pc = 0x129E7Cu;
    // 0x129e7c: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x129e7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x129e80: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x129e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x129e84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x129e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x129e88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x129e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x129e8c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x129e8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x129e90: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x129E90u;
    {
        const bool branch_taken_0x129e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129E90u;
            // 0x129e94: 0x2308825  or          $s1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e90) {
            ctx->pc = 0x129FECu;
            goto label_129fec;
        }
    }
    ctx->pc = 0x129E98u;
label_129e98:
    // 0x129e98: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x129e98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x129e9c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x129e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x129ea0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x129ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x129ea4: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x129EA4u;
    {
        const bool branch_taken_0x129ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129EA4u;
            // 0x129ea8: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ea4) {
            ctx->pc = 0x129FECu;
            goto label_129fec;
        }
    }
    ctx->pc = 0x129EACu;
label_129eac:
    // 0x129eac: 0x6010050  bgez        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x129EACu;
    {
        const bool branch_taken_0x129eac = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x129EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129EACu;
            // 0x129eb0: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129eac) {
            ctx->pc = 0x129FF0u;
            goto label_129ff0;
        }
    }
    ctx->pc = 0x129EB4u;
    // 0x129eb4: 0x108023  negu        $s0, $s0
    ctx->pc = 0x129eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x129eb8: 0x3207000f  andi        $a3, $s0, 0xF
    ctx->pc = 0x129eb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x129ebc: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x129EBCu;
    {
        const bool branch_taken_0x129ebc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x129EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129EBCu;
            // 0x129ec0: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ebc) {
            ctx->pc = 0x129EE0u;
            goto label_129ee0;
        }
    }
    ctx->pc = 0x129EC4u;
    // 0x129ec4: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x129ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x129ec8: 0x244220c8  addiu       $v0, $v0, 0x20C8
    ctx->pc = 0x129ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8392));
    // 0x129ecc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x129eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ed0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x129ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x129ed4: 0xc0a20a8  jal         func_2882A0
    ctx->pc = 0x129ED4u;
    SET_GPR_U32(ctx, 31, 0x129EDCu);
    ctx->pc = 0x129ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129ED4u;
            // 0x129ed8: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2882A0u;
    if (runtime->hasFunction(0x2882A0u)) {
        auto targetFn = runtime->lookupFunction(0x2882A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129EDCu; }
        if (ctx->pc != 0x129EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2882a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129EDCu; }
        if (ctx->pc != 0x129EDCu) { return; }
    }
    ctx->pc = 0x129EDCu;
label_129edc:
    // 0x129edc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x129edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129ee0:
    // 0x129ee0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x129ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x129ee4: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x129ee4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x129ee8: 0x12000040  beqz        $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x129EE8u;
    {
        const bool branch_taken_0x129ee8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x129EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129EE8u;
            // 0x129eec: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ee8) {
            ctx->pc = 0x129FECu;
            goto label_129fec;
        }
    }
    ctx->pc = 0x129EF0u;
    // 0x129ef0: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x129ef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x129ef4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x129EF4u;
    {
        const bool branch_taken_0x129ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129EF4u;
            // 0x129ef8: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ef4) {
            ctx->pc = 0x129FB4u;
            goto label_129fb4;
        }
    }
    ctx->pc = 0x129EFCu;
    // 0x129efc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x129EFCu;
    {
        const bool branch_taken_0x129efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129EFCu;
            // 0x129f00: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129efc) {
            ctx->pc = 0x129F44u;
            goto label_129f44;
        }
    }
    ctx->pc = 0x129F04u;
    // 0x129f04: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x129f04u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
label_129f08:
    // 0x129f08: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x129f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x129f0c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x129F0Cu;
    {
        const bool branch_taken_0x129f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F0Cu;
            // 0x129f10: 0x264321b8  addiu       $v1, $s2, 0x21B8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f0c) {
            ctx->pc = 0x129F2Cu;
            goto label_129f2c;
        }
    }
    ctx->pc = 0x129F14u;
    // 0x129f14: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x129f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x129f18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x129f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x129f1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x129f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f20: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x129F20u;
    SET_GPR_U32(ctx, 31, 0x129F28u);
    ctx->pc = 0x129F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129F20u;
            // 0x129f24: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F28u; }
        if (ctx->pc != 0x129F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F28u; }
        if (ctx->pc != 0x129F28u) { return; }
    }
    ctx->pc = 0x129F28u;
label_129f28:
    // 0x129f28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x129f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129f2c:
    // 0x129f2c: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x129f2cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x129f30: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x129f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x129f34: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x129F34u;
    {
        const bool branch_taken_0x129f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F34u;
            // 0x129f38: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f34) {
            ctx->pc = 0x129F08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129f08;
        }
    }
    ctx->pc = 0x129F3Cu;
    // 0x129f3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x129F3Cu;
    {
        const bool branch_taken_0x129f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F3Cu;
            // 0x129f40: 0x264221b8  addiu       $v0, $s2, 0x21B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f3c) {
            ctx->pc = 0x129F4Cu;
            goto label_129f4c;
        }
    }
    ctx->pc = 0x129F44u;
label_129f44:
    // 0x129f44: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x129f44u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
    // 0x129f48: 0x264221b8  addiu       $v0, $s2, 0x21B8
    ctx->pc = 0x129f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8632));
label_129f4c:
    // 0x129f4c: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x129f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x129f50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x129f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x129f54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x129f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f58: 0xdc700000  ld          $s0, 0x0($v1)
    ctx->pc = 0x129f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x129f5c: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x129f5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f60: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x129f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f64: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x129F64u;
    SET_GPR_U32(ctx, 31, 0x129F6Cu);
    ctx->pc = 0x129F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129F64u;
            // 0x129f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F6Cu; }
        if (ctx->pc != 0x129F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F6Cu; }
        if (ctx->pc != 0x129F6Cu) { return; }
    }
    ctx->pc = 0x129F6Cu;
label_129f6c:
    // 0x129f6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x129f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f74: 0xc0a2148  jal         func_288520
    ctx->pc = 0x129F74u;
    SET_GPR_U32(ctx, 31, 0x129F7Cu);
    ctx->pc = 0x129F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129F74u;
            // 0x129f78: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F7Cu; }
        if (ctx->pc != 0x129F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F7Cu; }
        if (ctx->pc != 0x129F7Cu) { return; }
    }
    ctx->pc = 0x129F7Cu;
label_129f7c:
    // 0x129f7c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x129F7Cu;
    {
        const bool branch_taken_0x129f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F7Cu;
            // 0x129f80: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f7c) {
            ctx->pc = 0x129FF0u;
            goto label_129ff0;
        }
    }
    ctx->pc = 0x129F84u;
    // 0x129f84: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x129f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f88: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x129F88u;
    SET_GPR_U32(ctx, 31, 0x129F90u);
    ctx->pc = 0x129F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129F88u;
            // 0x129f8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F90u; }
        if (ctx->pc != 0x129F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F90u; }
        if (ctx->pc != 0x129F90u) { return; }
    }
    ctx->pc = 0x129F90u;
label_129f90:
    // 0x129f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129f94: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x129F94u;
    SET_GPR_U32(ctx, 31, 0x129F9Cu);
    ctx->pc = 0x129F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129F94u;
            // 0x129f98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F9Cu; }
        if (ctx->pc != 0x129F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F9Cu; }
        if (ctx->pc != 0x129F9Cu) { return; }
    }
    ctx->pc = 0x129F9Cu;
label_129f9c:
    // 0x129f9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x129f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129fa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129fa4: 0xc0a2148  jal         func_288520
    ctx->pc = 0x129FA4u;
    SET_GPR_U32(ctx, 31, 0x129FACu);
    ctx->pc = 0x129FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129FA4u;
            // 0x129fa8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129FACu; }
        if (ctx->pc != 0x129FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129FACu; }
        if (ctx->pc != 0x129FACu) { return; }
    }
    ctx->pc = 0x129FACu;
label_129fac:
    // 0x129fac: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x129FACu;
    {
        const bool branch_taken_0x129fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129FACu;
            // 0x129fb0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fac) {
            ctx->pc = 0x129FECu;
            goto label_129fec;
        }
    }
    ctx->pc = 0x129FB4u;
label_129fb4:
    // 0x129fb4: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x129fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_129fb8:
    // 0x129fb8: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x129fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x129fbc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x129fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x129fc0: 0x14600195  bnez        $v1, . + 4 + (0x195 << 2)
    ctx->pc = 0x129FC0u;
    {
        const bool branch_taken_0x129fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x129FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129FC0u;
            // 0x129fc4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fc0) {
            ctx->pc = 0x12A618u;
            goto label_12a618;
        }
    }
    ctx->pc = 0x129FC8u;
    // 0x129fc8: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x129FC8u;
    {
        const bool branch_taken_0x129fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129FC8u;
            // 0x129fcc: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fc8) {
            ctx->pc = 0x12A658u;
            goto label_12a658;
        }
    }
    ctx->pc = 0x129FD0u;
label_129fd0:
    // 0x129fd0: 0xc049f90  jal         func_127E40
    ctx->pc = 0x129FD0u;
    SET_GPR_U32(ctx, 31, 0x129FD8u);
    ctx->pc = 0x129FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129FD0u;
            // 0x129fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127E40u;
    if (runtime->hasFunction(0x127E40u)) {
        auto targetFn = runtime->lookupFunction(0x127E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129FD8u; }
        if (ctx->pc != 0x129FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ulp_0x127e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129FD8u; }
        if (ctx->pc != 0x129FD8u) { return; }
    }
    ctx->pc = 0x129FD8u;
label_129fd8:
    // 0x129fd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x129fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129fdc: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x129FDCu;
    SET_GPR_U32(ctx, 31, 0x129FE4u);
    ctx->pc = 0x129FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129FDCu;
            // 0x129fe0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129FE4u; }
        if (ctx->pc != 0x129FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129FE4u; }
        if (ctx->pc != 0x129FE4u) { return; }
    }
    ctx->pc = 0x129FE4u;
label_129fe4:
    // 0x129fe4: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x129FE4u;
    {
        const bool branch_taken_0x129fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129FE4u;
            // 0x129fe8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fe4) {
            ctx->pc = 0x12A618u;
            goto label_12a618;
        }
    }
    ctx->pc = 0x129FECu;
label_129fec:
    // 0x129fec: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x129fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_129ff0:
    // 0x129ff0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x129ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ff4: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x129ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129ff8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x129ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129ffc: 0xc049d36  jal         func_1274D8
    ctx->pc = 0x129FFCu;
    SET_GPR_U32(ctx, 31, 0x12A004u);
    ctx->pc = 0x12A000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129FFCu;
            // 0x12a000: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1274D8u;
    if (runtime->hasFunction(0x1274D8u)) {
        auto targetFn = runtime->lookupFunction(0x1274D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A004u; }
        if (ctx->pc != 0x12A004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _s2b_0x1274d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A004u; }
        if (ctx->pc != 0x12A004u) { return; }
    }
    ctx->pc = 0x12A004u;
label_12a004:
    // 0x12a004: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x12a004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x12a008: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x12a008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x12a00c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x12a00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x12a010: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x12a010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
    // 0x12a014: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x12A014u;
    {
        const bool branch_taken_0x12a014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A014u;
            // 0x12a018: 0xafa60060  sw          $a2, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a014) {
            ctx->pc = 0x12A43Cu;
            goto label_12a43c;
        }
    }
    ctx->pc = 0x12A01Cu;
    // 0x12a01c: 0x0  nop
    ctx->pc = 0x12a01cu;
    // NOP
label_12a020:
    // 0x12a020: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12a020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a024: 0xc049eb4  jal         func_127AD0
    ctx->pc = 0x12A024u;
    SET_GPR_U32(ctx, 31, 0x12A02Cu);
    ctx->pc = 0x12A028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A024u;
            // 0x12a028: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127AD0u;
    if (runtime->hasFunction(0x127AD0u)) {
        auto targetFn = runtime->lookupFunction(0x127AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A02Cu; }
        if (ctx->pc != 0x12A02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x127ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A02Cu; }
        if (ctx->pc != 0x12A02Cu) { return; }
    }
    ctx->pc = 0x12A02Cu;
label_12a02c:
    // 0x12a02c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x12a02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x12a030: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x12a030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12a034: 0xc049f12  jal         func_127C48
    ctx->pc = 0x12A034u;
    SET_GPR_U32(ctx, 31, 0x12A03Cu);
    ctx->pc = 0x12A038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A034u;
            // 0x12a038: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127C48u;
    if (runtime->hasFunction(0x127C48u)) {
        auto targetFn = runtime->lookupFunction(0x127C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A03Cu; }
        if (ctx->pc != 0x12A03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x127c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A03Cu; }
        if (ctx->pc != 0x12A03Cu) { return; }
    }
    ctx->pc = 0x12A03Cu;
label_12a03c:
    // 0x12a03c: 0x1c400017  bgtz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x12A03Cu;
    {
        const bool branch_taken_0x12a03c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12A040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A03Cu;
            // 0x12a040: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a03c) {
            ctx->pc = 0x12A09Cu;
            goto label_12a09c;
        }
    }
    ctx->pc = 0x12A044u;
    // 0x12a044: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x12A044u;
    {
        const bool branch_taken_0x12a044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a044) {
            ctx->pc = 0x12A61Cu;
            goto label_12a61c;
        }
    }
    ctx->pc = 0x12A04Cu;
label_12a04c:
    // 0x12a04c: 0x14e00037  bnez        $a3, . + 4 + (0x37 << 2)
    ctx->pc = 0x12A04Cu;
    {
        const bool branch_taken_0x12a04c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A04Cu;
            // 0x12a050: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a04c) {
            ctx->pc = 0x12A12Cu;
            goto label_12a12c;
        }
    }
    ctx->pc = 0x12A054u;
    // 0x12a054: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x12A054u;
    {
        const bool branch_taken_0x12a054 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a054) {
            ctx->pc = 0x12A088u;
            goto label_12a088;
        }
    }
    ctx->pc = 0x12A05Cu;
    // 0x12a05c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a060: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x12a060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x12a064: 0x2231024  and         $v0, $s1, $v1
    ctx->pc = 0x12a064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x12a068: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x12A068u;
    {
        const bool branch_taken_0x12a068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12A06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A068u;
            // 0x12a06c: 0x3c037ff0  lui         $v1, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a068) {
            ctx->pc = 0x12A0DCu;
            goto label_12a0dc;
        }
    }
    ctx->pc = 0x12A070u;
    // 0x12a070: 0x11103f  dsra32      $v0, $s1, 0
    ctx->pc = 0x12a070u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x12a074: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12a074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12a078: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x12a078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x12a07c: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x12a07cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x12a080: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x12A080u;
    {
        const bool branch_taken_0x12a080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A080u;
            // 0x12a084: 0x2883c  dsll32      $s1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a080) {
            ctx->pc = 0x12A618u;
            goto label_12a618;
        }
    }
    ctx->pc = 0x12A088u;
label_12a088:
    // 0x12a088: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12a088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a08c: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x12a08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x12a090: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x12a090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x12a094: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12A094u;
    {
        const bool branch_taken_0x12a094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a094) {
            ctx->pc = 0x12A0DCu;
            goto label_12a0dc;
        }
    }
    ctx->pc = 0x12A09Cu;
label_12a09c:
    // 0x12a09c: 0x11103f  dsra32      $v0, $s1, 0
    ctx->pc = 0x12a09cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x12a0a0: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x12a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x12a0a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12a0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12a0a8: 0x3c04fff0  lui         $a0, 0xFFF0
    ctx->pc = 0x12a0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65520 << 16));
    // 0x12a0ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12a0b0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x12a0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x12a0b4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x12a0b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x12a0b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12a0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12a0bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a0c0: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x12a0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x12a0c4: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x12a0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x12a0c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12a0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12a0cc: 0x2258824  and         $s1, $s1, $a1
    ctx->pc = 0x12a0ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 5));
    // 0x12a0d0: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x12a0d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x12a0d4: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x12A0D4u;
    {
        const bool branch_taken_0x12a0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A0D4u;
            // 0x12a0d8: 0x2258825  or          $s1, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a0d4) {
            ctx->pc = 0x12A618u;
            goto label_12a618;
        }
    }
    ctx->pc = 0x12A0DCu;
label_12a0dc:
    // 0x12a0dc: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x12a0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x12a0e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12a0e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12a0e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12a0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12a0e8: 0x1040014c  beqz        $v0, . + 4 + (0x14C << 2)
    ctx->pc = 0x12A0E8u;
    {
        const bool branch_taken_0x12a0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A0E8u;
            // 0x12a0ec: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a0e8) {
            ctx->pc = 0x12A61Cu;
            goto label_12a61c;
        }
    }
    ctx->pc = 0x12A0F0u;
    // 0x12a0f0: 0x1680ffb7  bnez        $s4, . + 4 + (-0x49 << 2)
    ctx->pc = 0x12A0F0u;
    {
        const bool branch_taken_0x12a0f0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a0f0) {
            ctx->pc = 0x129FD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129fd0;
        }
    }
    ctx->pc = 0x12A0F8u;
    // 0x12a0f8: 0xc049f90  jal         func_127E40
    ctx->pc = 0x12A0F8u;
    SET_GPR_U32(ctx, 31, 0x12A100u);
    ctx->pc = 0x12A0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A0F8u;
            // 0x12a0fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127E40u;
    if (runtime->hasFunction(0x127E40u)) {
        auto targetFn = runtime->lookupFunction(0x127E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A100u; }
        if (ctx->pc != 0x12A100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ulp_0x127e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A100u; }
        if (ctx->pc != 0x12A100u) { return; }
    }
    ctx->pc = 0x12A100u;
label_12a100:
    // 0x12a100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12a100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a104: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x12A104u;
    SET_GPR_U32(ctx, 31, 0x12A10Cu);
    ctx->pc = 0x12A108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A104u;
            // 0x12a108: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A10Cu; }
        if (ctx->pc != 0x12A10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A10Cu; }
        if (ctx->pc != 0x12A10Cu) { return; }
    }
    ctx->pc = 0x12A10Cu;
label_12a10c:
    // 0x12a10c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12a10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12a110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a114: 0xc0a2148  jal         func_288520
    ctx->pc = 0x12A114u;
    SET_GPR_U32(ctx, 31, 0x12A11Cu);
    ctx->pc = 0x12A118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A114u;
            // 0x12a118: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A11Cu; }
        if (ctx->pc != 0x12A11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A11Cu; }
        if (ctx->pc != 0x12A11Cu) { return; }
    }
    ctx->pc = 0x12A11Cu;
label_12a11c:
    // 0x12a11c: 0x1040ffa5  beqz        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x12A11Cu;
    {
        const bool branch_taken_0x12a11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A11Cu;
            // 0x12a120: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a11c) {
            ctx->pc = 0x129FB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129fb4;
        }
    }
    ctx->pc = 0x12A124u;
    // 0x12a124: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x12A124u;
    {
        const bool branch_taken_0x12a124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a124) {
            ctx->pc = 0x12A61Cu;
            goto label_12a61c;
        }
    }
    ctx->pc = 0x12A12Cu;
label_12a12c:
    // 0x12a12c: 0xc04a076  jal         func_1281D8
    ctx->pc = 0x12A12Cu;
    SET_GPR_U32(ctx, 31, 0x12A134u);
    ctx->pc = 0x12A130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A12Cu;
            // 0x12a130: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1281D8u;
    if (runtime->hasFunction(0x1281D8u)) {
        auto targetFn = runtime->lookupFunction(0x1281D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A134u; }
        if (ctx->pc != 0x12A134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ratio_0x1281d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A134u; }
        if (ctx->pc != 0x12A134u) { return; }
    }
    ctx->pc = 0x12A134u;
label_12a134:
    // 0x12a134: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12a134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a138: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x12a138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12a13c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x12a13cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x12a140: 0xc0a2148  jal         func_288520
    ctx->pc = 0x12A140u;
    SET_GPR_U32(ctx, 31, 0x12A148u);
    ctx->pc = 0x12A144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A140u;
            // 0x12a144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A148u; }
        if (ctx->pc != 0x12A148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A148u; }
        if (ctx->pc != 0x12A148u) { return; }
    }
    ctx->pc = 0x12A148u;
label_12a148:
    // 0x12a148: 0x1c400024  bgtz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x12A148u;
    {
        const bool branch_taken_0x12a148 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x12a148) {
            ctx->pc = 0x12A1DCu;
            goto label_12a1dc;
        }
    }
    ctx->pc = 0x12A150u;
    // 0x12a150: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A150u;
    {
        const bool branch_taken_0x12a150 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a150) {
            ctx->pc = 0x12A168u;
            goto label_12a168;
        }
    }
    ctx->pc = 0x12A158u;
    // 0x12a158: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x12a158u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x12a15c: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x12a15cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x12a160: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x12A160u;
    {
        const bool branch_taken_0x12a160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A160u;
            // 0x12a164: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a160) {
            ctx->pc = 0x12A208u;
            goto label_12a208;
        }
    }
    ctx->pc = 0x12A168u;
label_12a168:
    // 0x12a168: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12a168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a16c: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x12a16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x12a170: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x12a170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x12a174: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12A174u;
    {
        const bool branch_taken_0x12a174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A174u;
            // 0x12a178: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a174) {
            ctx->pc = 0x12A19Cu;
            goto label_12a19c;
        }
    }
    ctx->pc = 0x12A17Cu;
    // 0x12a17c: 0x1222ff8e  beq         $s1, $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x12A17Cu;
    {
        const bool branch_taken_0x12a17c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x12A180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A17Cu;
            // 0x12a180: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a17c) {
            ctx->pc = 0x129FB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129fb8;
        }
    }
    ctx->pc = 0x12A184u;
    // 0x12a184: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x12a184u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x12a188: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x12a188u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x12a18c: 0x3412bff0  ori         $s2, $zero, 0xBFF0
    ctx->pc = 0x12a18cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x12a190: 0x12943c  dsll32      $s2, $s2, 16
    ctx->pc = 0x12a190u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 16));
    // 0x12a194: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x12A194u;
    {
        const bool branch_taken_0x12a194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a194) {
            ctx->pc = 0x12A208u;
            goto label_12a208;
        }
    }
    ctx->pc = 0x12A19Cu;
label_12a19c:
    // 0x12a19c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x12a19cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x12a1a0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x12a1a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x12a1a4: 0xc0a2148  jal         func_288520
    ctx->pc = 0x12A1A4u;
    SET_GPR_U32(ctx, 31, 0x12A1ACu);
    ctx->pc = 0x12A1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A1A4u;
            // 0x12a1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A1ACu; }
        if (ctx->pc != 0x12A1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A1ACu; }
        if (ctx->pc != 0x12A1ACu) { return; }
    }
    ctx->pc = 0x12A1ACu;
label_12a1ac:
    // 0x12a1ac: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A1ACu;
    {
        const bool branch_taken_0x12a1ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x12A1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A1ACu;
            // 0x12a1b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a1ac) {
            ctx->pc = 0x12A1C4u;
            goto label_12a1c4;
        }
    }
    ctx->pc = 0x12A1B4u;
    // 0x12a1b4: 0x3410ff80  ori         $s0, $zero, 0xFF80
    ctx->pc = 0x12a1b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x12a1b8: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x12a1b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x12a1bc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12A1BCu;
    {
        const bool branch_taken_0x12a1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a1bc) {
            ctx->pc = 0x12A1FCu;
            goto label_12a1fc;
        }
    }
    ctx->pc = 0x12A1C4u;
label_12a1c4:
    // 0x12a1c4: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x12a1c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x12a1c8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x12a1c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x12a1cc: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x12A1CCu;
    SET_GPR_U32(ctx, 31, 0x12A1D4u);
    ctx->pc = 0x12A1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A1CCu;
            // 0x12a1d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A1D4u; }
        if (ctx->pc != 0x12A1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A1D4u; }
        if (ctx->pc != 0x12A1D4u) { return; }
    }
    ctx->pc = 0x12A1D4u;
label_12a1d4:
    // 0x12a1d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12A1D4u;
    {
        const bool branch_taken_0x12a1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A1D4u;
            // 0x12a1d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a1d4) {
            ctx->pc = 0x12A1F8u;
            goto label_12a1f8;
        }
    }
    ctx->pc = 0x12A1DCu;
label_12a1dc:
    // 0x12a1dc: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x12a1dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x12a1e0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x12a1e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x12a1e4: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x12A1E4u;
    SET_GPR_U32(ctx, 31, 0x12A1ECu);
    ctx->pc = 0x12A1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A1E4u;
            // 0x12a1e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A1ECu; }
        if (ctx->pc != 0x12A1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A1ECu; }
        if (ctx->pc != 0x12A1ECu) { return; }
    }
    ctx->pc = 0x12A1ECu;
label_12a1ec:
    // 0x12a1ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12a1ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a1f0: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A1F0u;
    {
        const bool branch_taken_0x12a1f0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A1F0u;
            // 0x12a1f4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a1f0) {
            ctx->pc = 0x12A208u;
            goto label_12a208;
        }
    }
    ctx->pc = 0x12A1F8u;
label_12a1f8:
    // 0x12a1f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12a1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a1fc:
    // 0x12a1fc: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x12A1FCu;
    SET_GPR_U32(ctx, 31, 0x12A204u);
    ctx->pc = 0x12A200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A1FCu;
            // 0x12a200: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A204u; }
        if (ctx->pc != 0x12A204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A204u; }
        if (ctx->pc != 0x12A204u) { return; }
    }
    ctx->pc = 0x12A204u;
label_12a204:
    // 0x12a204: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12a204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a208:
    // 0x12a208: 0x11183f  dsra32      $v1, $s1, 0
    ctx->pc = 0x12a208u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x12a20c: 0x3c1e7ff0  lui         $fp, 0x7FF0
    ctx->pc = 0x12a20cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32752 << 16));
    // 0x12a210: 0x7e1024  and         $v0, $v1, $fp
    ctx->pc = 0x12a210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x12a214: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x12a214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x12a218: 0x3c027fe0  lui         $v0, 0x7FE0
    ctx->pc = 0x12a218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32736 << 16));
    // 0x12a21c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12a21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a220: 0x1482002f  bne         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x12A220u;
    {
        const bool branch_taken_0x12a220 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x12A224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A220u;
            // 0x12a224: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a220) {
            ctx->pc = 0x12A2E0u;
            goto label_12a2e0;
        }
    }
    ctx->pc = 0x12A228u;
    // 0x12a228: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x12a228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x12a22c: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x12a22cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a230: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x12a230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12a234: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x12a234u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x12a238: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x12a238u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x12a23c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12a23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12a240: 0x2338824  and         $s1, $s1, $s3
    ctx->pc = 0x12a240u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x12a244: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x12a244u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x12a248: 0xc049f90  jal         func_127E40
    ctx->pc = 0x12A248u;
    SET_GPR_U32(ctx, 31, 0x12A250u);
    ctx->pc = 0x12A24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A248u;
            // 0x12a24c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127E40u;
    if (runtime->hasFunction(0x127E40u)) {
        auto targetFn = runtime->lookupFunction(0x127E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A250u; }
        if (ctx->pc != 0x12A250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ulp_0x127e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A250u; }
        if (ctx->pc != 0x12A250u) { return; }
    }
    ctx->pc = 0x12A250u;
label_12a250:
    // 0x12a250: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12a250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a254: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x12A254u;
    SET_GPR_U32(ctx, 31, 0x12A25Cu);
    ctx->pc = 0x12A258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A254u;
            // 0x12a258: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A25Cu; }
        if (ctx->pc != 0x12A25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A25Cu; }
        if (ctx->pc != 0x12A25Cu) { return; }
    }
    ctx->pc = 0x12A25Cu;
label_12a25c:
    // 0x12a25c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12a25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a260: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x12A260u;
    SET_GPR_U32(ctx, 31, 0x12A268u);
    ctx->pc = 0x12A264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A260u;
            // 0x12a264: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A268u; }
        if (ctx->pc != 0x12A268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A268u; }
        if (ctx->pc != 0x12A268u) { return; }
    }
    ctx->pc = 0x12A268u;
label_12a268:
    // 0x12a268: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12a268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a26c: 0x3c037c9f  lui         $v1, 0x7C9F
    ctx->pc = 0x12a26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31903 << 16));
    // 0x12a270: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x12a270u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x12a274: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x12a274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x12a278: 0x9e1024  and         $v0, $a0, $fp
    ctx->pc = 0x12a278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
    // 0x12a27c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x12a27cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12a280: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x12A280u;
    {
        const bool branch_taken_0x12a280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A280u;
            // 0x12a284: 0x3c020350  lui         $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a280) {
            ctx->pc = 0x12A2CCu;
            goto label_12a2cc;
        }
    }
    ctx->pc = 0x12A288u;
    // 0x12a288: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x12a288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x12a28c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12a28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12a290: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12a290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12a294: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12a294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12a298: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12a298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12a29c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12a29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12a2a0: 0x0  nop
    ctx->pc = 0x12a2a0u;
    // NOP
    // 0x12a2a4: 0x0  nop
    ctx->pc = 0x12a2a4u;
    // NOP
    // 0x12a2a8: 0x0  nop
    ctx->pc = 0x12a2a8u;
    // NOP
    // 0x12a2ac: 0x12c2feb8  beq         $s6, $v0, . + 4 + (-0x148 << 2)
    ctx->pc = 0x12A2ACu;
    {
        const bool branch_taken_0x12a2ac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x12A2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A2ACu;
            // 0x12a2b0: 0x2338824  and         $s1, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2ac) {
            ctx->pc = 0x129D90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_129d90;
        }
    }
    ctx->pc = 0x12A2B4u;
    // 0x12a2b4: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x12a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x12a2b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12a2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12a2bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12a2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12a2c0: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x12a2c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x12a2c4: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x12A2C4u;
    {
        const bool branch_taken_0x12a2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A2C4u;
            // 0x12a2c8: 0x2338825  or          $s1, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2c4) {
            ctx->pc = 0x12A40Cu;
            goto label_12a40c;
        }
    }
    ctx->pc = 0x12A2CCu;
label_12a2cc:
    // 0x12a2cc: 0x2338824  and         $s1, $s1, $s3
    ctx->pc = 0x12a2ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x12a2d0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x12a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12a2d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12a2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12a2d8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x12A2D8u;
    {
        const bool branch_taken_0x12a2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A2D8u;
            // 0x12a2dc: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2d8) {
            ctx->pc = 0x12A364u;
            goto label_12a364;
        }
    }
    ctx->pc = 0x12A2E0u;
label_12a2e0:
    // 0x12a2e0: 0x3c020340  lui         $v0, 0x340
    ctx->pc = 0x12a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)832 << 16));
    // 0x12a2e4: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x12a2e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x12a2e8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x12A2E8u;
    {
        const bool branch_taken_0x12a2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a2e8) {
            ctx->pc = 0x12A340u;
            goto label_12a340;
        }
    }
    ctx->pc = 0x12A2F0u;
    // 0x12a2f0: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x12a2f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x12a2f4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x12a2f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x12a2f8: 0xc0a2148  jal         func_288520
    ctx->pc = 0x12A2F8u;
    SET_GPR_U32(ctx, 31, 0x12A300u);
    ctx->pc = 0x12A2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A2F8u;
            // 0x12a2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A300u; }
        if (ctx->pc != 0x12A300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A300u; }
        if (ctx->pc != 0x12A300u) { return; }
    }
    ctx->pc = 0x12A300u;
label_12a300:
    // 0x12a300: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12A300u;
    {
        const bool branch_taken_0x12a300 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x12a300) {
            ctx->pc = 0x12A340u;
            goto label_12a340;
        }
    }
    ctx->pc = 0x12A308u;
    // 0x12a308: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x12a308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x12a30c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x12a30cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x12a310: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x12A310u;
    SET_GPR_U32(ctx, 31, 0x12A318u);
    ctx->pc = 0x12A314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A310u;
            // 0x12a314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A318u; }
        if (ctx->pc != 0x12A318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A318u; }
        if (ctx->pc != 0x12A318u) { return; }
    }
    ctx->pc = 0x12A318u;
label_12a318:
    // 0x12a318: 0xc0a218a  jal         func_288628
    ctx->pc = 0x12A318u;
    SET_GPR_U32(ctx, 31, 0x12A320u);
    ctx->pc = 0x12A31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A318u;
            // 0x12a31c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288628u;
    if (runtime->hasFunction(0x288628u)) {
        auto targetFn = runtime->lookupFunction(0x288628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A320u; }
        if (ctx->pc != 0x12A320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x288628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A320u; }
        if (ctx->pc != 0x12A320u) { return; }
    }
    ctx->pc = 0x12A320u;
label_12a320:
    // 0x12a320: 0xc0a215c  jal         func_288570
    ctx->pc = 0x12A320u;
    SET_GPR_U32(ctx, 31, 0x12A328u);
    ctx->pc = 0x12A324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A320u;
            // 0x12a324: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A328u; }
        if (ctx->pc != 0x12A328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A328u; }
        if (ctx->pc != 0x12A328u) { return; }
    }
    ctx->pc = 0x12A328u;
label_12a328:
    // 0x12a328: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A328u;
    {
        const bool branch_taken_0x12a328 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A328u;
            // 0x12a32c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a328) {
            ctx->pc = 0x12A340u;
            goto label_12a340;
        }
    }
    ctx->pc = 0x12A330u;
    // 0x12a330: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12a330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a334: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x12A334u;
    SET_GPR_U32(ctx, 31, 0x12A33Cu);
    ctx->pc = 0x12A338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A334u;
            // 0x12a338: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A33Cu; }
        if (ctx->pc != 0x12A33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A33Cu; }
        if (ctx->pc != 0x12A33Cu) { return; }
    }
    ctx->pc = 0x12A33Cu;
label_12a33c:
    // 0x12a33c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12a33cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a340:
    // 0x12a340: 0xc049f90  jal         func_127E40
    ctx->pc = 0x12A340u;
    SET_GPR_U32(ctx, 31, 0x12A348u);
    ctx->pc = 0x12A344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A340u;
            // 0x12a344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127E40u;
    if (runtime->hasFunction(0x127E40u)) {
        auto targetFn = runtime->lookupFunction(0x127E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A348u; }
        if (ctx->pc != 0x12A348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ulp_0x127e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A348u; }
        if (ctx->pc != 0x12A348u) { return; }
    }
    ctx->pc = 0x12A348u;
label_12a348:
    // 0x12a348: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12a348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a34c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x12A34Cu;
    SET_GPR_U32(ctx, 31, 0x12A354u);
    ctx->pc = 0x12A350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A34Cu;
            // 0x12a350: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A354u; }
        if (ctx->pc != 0x12A354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A354u; }
        if (ctx->pc != 0x12A354u) { return; }
    }
    ctx->pc = 0x12A354u;
label_12a354:
    // 0x12a354: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12a354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a358: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x12A358u;
    SET_GPR_U32(ctx, 31, 0x12A360u);
    ctx->pc = 0x12A35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A358u;
            // 0x12a35c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A360u; }
        if (ctx->pc != 0x12A360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A360u; }
        if (ctx->pc != 0x12A360u) { return; }
    }
    ctx->pc = 0x12A360u;
label_12a360:
    // 0x12a360: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12a360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a364:
    // 0x12a364: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x12a364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a368: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x12a368u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x12a36c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x12a36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12a370: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x12a370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x12a374: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12a374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12a378: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x12a378u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12a37c: 0x14520024  bne         $v0, $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x12A37Cu;
    {
        const bool branch_taken_0x12a37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x12A380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A37Cu;
            // 0x12a380: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a37c) {
            ctx->pc = 0x12A410u;
            goto label_12a410;
        }
    }
    ctx->pc = 0x12A384u;
    // 0x12a384: 0xc0a19da  jal         func_286768
    ctx->pc = 0x12A384u;
    SET_GPR_U32(ctx, 31, 0x12A38Cu);
    ctx->pc = 0x12A388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A384u;
            // 0x12a388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286768u;
    if (runtime->hasFunction(0x286768u)) {
        auto targetFn = runtime->lookupFunction(0x286768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A38Cu; }
        if (ctx->pc != 0x12A38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___fixdfdi_0x286768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A38Cu; }
        if (ctx->pc != 0x12A38Cu) { return; }
    }
    ctx->pc = 0x12A38Cu;
label_12a38c:
    // 0x12a38c: 0xc0a1a2e  jal         func_2868B8
    ctx->pc = 0x12A38Cu;
    SET_GPR_U32(ctx, 31, 0x12A394u);
    ctx->pc = 0x12A390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A38Cu;
            // 0x12a390: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868B8u;
    if (runtime->hasFunction(0x2868B8u)) {
        auto targetFn = runtime->lookupFunction(0x2868B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A394u; }
        if (ctx->pc != 0x12A394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___floatdidf_0x2868b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A394u; }
        if (ctx->pc != 0x12A394u) { return; }
    }
    ctx->pc = 0x12A394u;
label_12a394:
    // 0x12a394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a398: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x12A398u;
    SET_GPR_U32(ctx, 31, 0x12A3A0u);
    ctx->pc = 0x12A39Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A398u;
            // 0x12a39c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A3A0u; }
        if (ctx->pc != 0x12A3A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A3A0u; }
        if (ctx->pc != 0x12A3A0u) { return; }
    }
    ctx->pc = 0x12A3A0u;
label_12a3a0:
    // 0x12a3a0: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A3A0u;
    {
        const bool branch_taken_0x12a3a0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A3A0u;
            // 0x12a3a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a3a0) {
            ctx->pc = 0x12A3BCu;
            goto label_12a3bc;
        }
    }
    ctx->pc = 0x12A3A8u;
    // 0x12a3a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a3ac: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x12a3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x12a3b0: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x12a3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x12a3b4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12A3B4u;
    {
        const bool branch_taken_0x12a3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a3b4) {
            ctx->pc = 0x12A3F4u;
            goto label_12a3f4;
        }
    }
    ctx->pc = 0x12A3BCu;
label_12a3bc:
    // 0x12a3bc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x12a3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x12a3c0: 0xdc252298  ld          $a1, 0x2298($at)
    ctx->pc = 0x12a3c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 8856)));
    // 0x12a3c4: 0xc0a2148  jal         func_288520
    ctx->pc = 0x12A3C4u;
    SET_GPR_U32(ctx, 31, 0x12A3CCu);
    ctx->pc = 0x12A3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A3C4u;
            // 0x12a3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A3CCu; }
        if (ctx->pc != 0x12A3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A3CCu; }
        if (ctx->pc != 0x12A3CCu) { return; }
    }
    ctx->pc = 0x12A3CCu;
label_12a3cc:
    // 0x12a3cc: 0x4400093  bltz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x12A3CCu;
    {
        const bool branch_taken_0x12a3cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12A3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A3CCu;
            // 0x12a3d0: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a3cc) {
            ctx->pc = 0x12A61Cu;
            goto label_12a61c;
        }
    }
    ctx->pc = 0x12A3D4u;
    // 0x12a3d4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x12a3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x12a3d8: 0xdc2522a0  ld          $a1, 0x22A0($at)
    ctx->pc = 0x12a3d8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 8864)));
    // 0x12a3dc: 0xc0a2148  jal         func_288520
    ctx->pc = 0x12A3DCu;
    SET_GPR_U32(ctx, 31, 0x12A3E4u);
    ctx->pc = 0x12A3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A3DCu;
            // 0x12a3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A3E4u; }
        if (ctx->pc != 0x12A3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A3E4u; }
        if (ctx->pc != 0x12A3E4u) { return; }
    }
    ctx->pc = 0x12A3E4u;
label_12a3e4:
    // 0x12a3e4: 0x1c40008c  bgtz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x12A3E4u;
    {
        const bool branch_taken_0x12a3e4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12A3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A3E4u;
            // 0x12a3e8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a3e4) {
            ctx->pc = 0x12A618u;
            goto label_12a618;
        }
    }
    ctx->pc = 0x12A3ECu;
    // 0x12a3ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12A3ECu;
    {
        const bool branch_taken_0x12a3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a3ec) {
            ctx->pc = 0x12A410u;
            goto label_12a410;
        }
    }
    ctx->pc = 0x12A3F4u;
label_12a3f4:
    // 0x12a3f4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x12a3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x12a3f8: 0xdc2522a8  ld          $a1, 0x22A8($at)
    ctx->pc = 0x12a3f8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 8872)));
    // 0x12a3fc: 0xc0a2148  jal         func_288520
    ctx->pc = 0x12A3FCu;
    SET_GPR_U32(ctx, 31, 0x12A404u);
    ctx->pc = 0x12A400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A3FCu;
            // 0x12a400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A404u; }
        if (ctx->pc != 0x12A404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A404u; }
        if (ctx->pc != 0x12A404u) { return; }
    }
    ctx->pc = 0x12A404u;
label_12a404:
    // 0x12a404: 0x4420085  bltzl       $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x12A404u;
    {
        const bool branch_taken_0x12a404 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x12a404) {
            ctx->pc = 0x12A408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A404u;
            // 0x12a408: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A61Cu;
            goto label_12a61c;
        }
    }
    ctx->pc = 0x12A40Cu;
label_12a40c:
    // 0x12a40c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x12a40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_12a410:
    // 0x12a410: 0xc049ce4  jal         func_127390
    ctx->pc = 0x12A410u;
    SET_GPR_U32(ctx, 31, 0x12A418u);
    ctx->pc = 0x12A414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A410u;
            // 0x12a414: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (runtime->hasFunction(0x127390u)) {
        auto targetFn = runtime->lookupFunction(0x127390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A418u; }
        if (ctx->pc != 0x12A418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x127390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A418u; }
        if (ctx->pc != 0x12A418u) { return; }
    }
    ctx->pc = 0x12A418u;
label_12a418:
    // 0x12a418: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x12a418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x12a41c: 0xc049ce4  jal         func_127390
    ctx->pc = 0x12A41Cu;
    SET_GPR_U32(ctx, 31, 0x12A424u);
    ctx->pc = 0x12A420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A41Cu;
            // 0x12a420: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (runtime->hasFunction(0x127390u)) {
        auto targetFn = runtime->lookupFunction(0x127390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A424u; }
        if (ctx->pc != 0x12A424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x127390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A424u; }
        if (ctx->pc != 0x12A424u) { return; }
    }
    ctx->pc = 0x12A424u;
label_12a424:
    // 0x12a424: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x12a424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12a428: 0xc049ce4  jal         func_127390
    ctx->pc = 0x12A428u;
    SET_GPR_U32(ctx, 31, 0x12A430u);
    ctx->pc = 0x12A42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A428u;
            // 0x12a42c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (runtime->hasFunction(0x127390u)) {
        auto targetFn = runtime->lookupFunction(0x127390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A430u; }
        if (ctx->pc != 0x12A430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x127390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A430u; }
        if (ctx->pc != 0x12A430u) { return; }
    }
    ctx->pc = 0x12A430u;
label_12a430:
    // 0x12a430: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x12a430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12a434: 0xc049ce4  jal         func_127390
    ctx->pc = 0x12A434u;
    SET_GPR_U32(ctx, 31, 0x12A43Cu);
    ctx->pc = 0x12A438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A434u;
            // 0x12a438: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (runtime->hasFunction(0x127390u)) {
        auto targetFn = runtime->lookupFunction(0x127390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A43Cu; }
        if (ctx->pc != 0x12A43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x127390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A43Cu; }
        if (ctx->pc != 0x12A43Cu) { return; }
    }
    ctx->pc = 0x12A43Cu;
label_12a43c:
    // 0x12a43c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x12a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12a440: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x12a440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12a444: 0xc049cba  jal         func_1272E8
    ctx->pc = 0x12A444u;
    SET_GPR_U32(ctx, 31, 0x12A44Cu);
    ctx->pc = 0x12A448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A444u;
            // 0x12a448: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272E8u;
    if (runtime->hasFunction(0x1272E8u)) {
        auto targetFn = runtime->lookupFunction(0x1272E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A44Cu; }
        if (ctx->pc != 0x12A44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x1272e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A44Cu; }
        if (ctx->pc != 0x12A44Cu) { return; }
    }
    ctx->pc = 0x12A44Cu;
label_12a44c:
    // 0x12a44c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x12a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12a450: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x12a450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x12a454: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x12a454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12a458: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x12a458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x12a45c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x12a45cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12a460: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x12a460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x12a464: 0xc049c18  jal         func_127060
    ctx->pc = 0x12A464u;
    SET_GPR_U32(ctx, 31, 0x12A46Cu);
    ctx->pc = 0x12A468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A464u;
            // 0x12a468: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A46Cu; }
        if (ctx->pc != 0x12A46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A46Cu; }
        if (ctx->pc != 0x12A46Cu) { return; }
    }
    ctx->pc = 0x12A46Cu;
label_12a46c:
    // 0x12a46c: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x12a46cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12a470: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12a470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a474: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12a474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a478: 0xc04a016  jal         func_128058
    ctx->pc = 0x12A478u;
    SET_GPR_U32(ctx, 31, 0x12A480u);
    ctx->pc = 0x12A47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A478u;
            // 0x12a47c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128058u;
    if (runtime->hasFunction(0x128058u)) {
        auto targetFn = runtime->lookupFunction(0x128058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A480u; }
        if (ctx->pc != 0x12A480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _d2b_0x128058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A480u; }
        if (ctx->pc != 0x12A480u) { return; }
    }
    ctx->pc = 0x12A480u;
label_12a480:
    // 0x12a480: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x12a480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x12a484: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12a484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a488: 0xc049dda  jal         func_127768
    ctx->pc = 0x12A488u;
    SET_GPR_U32(ctx, 31, 0x12A490u);
    ctx->pc = 0x12A48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A488u;
            // 0x12a48c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127768u;
    if (runtime->hasFunction(0x127768u)) {
        auto targetFn = runtime->lookupFunction(0x127768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A490u; }
        if (ctx->pc != 0x12A490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _i2b_0x127768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A490u; }
        if (ctx->pc != 0x12A490u) { return; }
    }
    ctx->pc = 0x12A490u;
label_12a490:
    // 0x12a490: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x12a490u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a494: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A494u;
    {
        const bool branch_taken_0x12a494 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x12A498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A494u;
            // 0x12a498: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a494) {
            ctx->pc = 0x12A4B0u;
            goto label_12a4b0;
        }
    }
    ctx->pc = 0x12A49Cu;
    // 0x12a49c: 0x8fb00068  lw          $s0, 0x68($sp)
    ctx->pc = 0x12a49cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12a4a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12a4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a4a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12a4a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a4a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12A4A8u;
    {
        const bool branch_taken_0x12a4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A4A8u;
            // 0x12a4ac: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4a8) {
            ctx->pc = 0x12A4C4u;
            goto label_12a4c4;
        }
    }
    ctx->pc = 0x12A4B0u;
label_12a4b0:
    // 0x12a4b0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x12a4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12a4b4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x12a4b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a4b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12a4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a4bc: 0x69023  negu        $s2, $a2
    ctx->pc = 0x12a4bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x12a4c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12a4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12a4c4:
    // 0x12a4c4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x12a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a4c8: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A4C8u;
    {
        const bool branch_taken_0x12a4c8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x12A4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A4C8u;
            // 0x12a4cc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4c8) {
            ctx->pc = 0x12A4D8u;
            goto label_12a4d8;
        }
    }
    ctx->pc = 0x12A4D0u;
    // 0x12a4d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12A4D0u;
    {
        const bool branch_taken_0x12a4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A4D0u;
            // 0x12a4d4: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4d0) {
            ctx->pc = 0x12A4DCu;
            goto label_12a4dc;
        }
    }
    ctx->pc = 0x12A4D8u;
label_12a4d8:
    // 0x12a4d8: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x12a4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_12a4dc:
    // 0x12a4dc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x12a4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12a4e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x12a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12a4e4: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x12a4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12a4e8: 0x28e3fc02  slti        $v1, $a3, -0x3FE
    ctx->pc = 0x12a4e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x12a4ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A4ECu;
    {
        const bool branch_taken_0x12a4ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A4ECu;
            // 0x12a4f0: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4ec) {
            ctx->pc = 0x12A4FCu;
            goto label_12a4fc;
        }
    }
    ctx->pc = 0x12A4F4u;
    // 0x12a4f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12A4F4u;
    {
        const bool branch_taken_0x12a4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A4F4u;
            // 0x12a4f8: 0x24930433  addiu       $s3, $a0, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4f4) {
            ctx->pc = 0x12A504u;
            goto label_12a504;
        }
    }
    ctx->pc = 0x12A4FCu;
label_12a4fc:
    // 0x12a4fc: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x12a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x12a500: 0x459823  subu        $s3, $v0, $a1
    ctx->pc = 0x12a500u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_12a504:
    // 0x12a504: 0x2133821  addu        $a3, $s0, $s3
    ctx->pc = 0x12a504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x12a508: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x12a508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x12a50c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x12a50cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a510: 0x247102a  slt         $v0, $s2, $a3
    ctx->pc = 0x12a510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x12a514: 0x242380b  movn        $a3, $s2, $v0
    ctx->pc = 0x12a514u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18));
    // 0x12a518: 0x287182a  slt         $v1, $s4, $a3
    ctx->pc = 0x12a518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x12a51c: 0x283380b  movn        $a3, $s4, $v1
    ctx->pc = 0x12a51cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20));
    // 0x12a520: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A520u;
    {
        const bool branch_taken_0x12a520 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x12a520) {
            ctx->pc = 0x12A534u;
            goto label_12a534;
        }
    }
    ctx->pc = 0x12A528u;
    // 0x12a528: 0x287a023  subu        $s4, $s4, $a3
    ctx->pc = 0x12a528u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x12a52c: 0x2479023  subu        $s2, $s2, $a3
    ctx->pc = 0x12a52cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x12a530: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x12a530u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_12a534:
    // 0x12a534: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x12A534u;
    {
        const bool branch_taken_0x12a534 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x12A538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A534u;
            // 0x12a538: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a534) {
            ctx->pc = 0x12A568u;
            goto label_12a568;
        }
    }
    ctx->pc = 0x12A53Cu;
    // 0x12a53c: 0xc049e74  jal         func_1279D0
    ctx->pc = 0x12A53Cu;
    SET_GPR_U32(ctx, 31, 0x12A544u);
    ctx->pc = 0x12A540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A53Cu;
            // 0x12a540: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1279D0u;
    if (runtime->hasFunction(0x1279D0u)) {
        auto targetFn = runtime->lookupFunction(0x1279D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A544u; }
        if (ctx->pc != 0x12A544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x1279d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A544u; }
        if (ctx->pc != 0x12A544u) { return; }
    }
    ctx->pc = 0x12A544u;
label_12a544:
    // 0x12a544: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x12a544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x12a548: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12a548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a54c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x12a54cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a550: 0xc049de8  jal         func_1277A0
    ctx->pc = 0x12A550u;
    SET_GPR_U32(ctx, 31, 0x12A558u);
    ctx->pc = 0x12A554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A550u;
            // 0x12a554: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1277A0u;
    if (runtime->hasFunction(0x1277A0u)) {
        auto targetFn = runtime->lookupFunction(0x1277A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A558u; }
        if (ctx->pc != 0x12A558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multiply_0x1277a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A558u; }
        if (ctx->pc != 0x12A558u) { return; }
    }
    ctx->pc = 0x12A558u;
label_12a558:
    // 0x12a558: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x12a558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a55c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12a55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a560: 0xc049ce4  jal         func_127390
    ctx->pc = 0x12A560u;
    SET_GPR_U32(ctx, 31, 0x12A568u);
    ctx->pc = 0x12A564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A560u;
            // 0x12a564: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (runtime->hasFunction(0x127390u)) {
        auto targetFn = runtime->lookupFunction(0x127390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A568u; }
        if (ctx->pc != 0x12A568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x127390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A568u; }
        if (ctx->pc != 0x12A568u) { return; }
    }
    ctx->pc = 0x12A568u;
label_12a568:
    // 0x12a568: 0x1a400005  blez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A568u;
    {
        const bool branch_taken_0x12a568 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x12A56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A568u;
            // 0x12a56c: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a568) {
            ctx->pc = 0x12A580u;
            goto label_12a580;
        }
    }
    ctx->pc = 0x12A570u;
    // 0x12a570: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x12a570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a574: 0xc049eb4  jal         func_127AD0
    ctx->pc = 0x12A574u;
    SET_GPR_U32(ctx, 31, 0x12A57Cu);
    ctx->pc = 0x12A578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A574u;
            // 0x12a578: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127AD0u;
    if (runtime->hasFunction(0x127AD0u)) {
        auto targetFn = runtime->lookupFunction(0x127AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A57Cu; }
        if (ctx->pc != 0x12A57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x127ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A57Cu; }
        if (ctx->pc != 0x12A57Cu) { return; }
    }
    ctx->pc = 0x12A57Cu;
label_12a57c:
    // 0x12a57c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x12a57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_12a580:
    // 0x12a580: 0x1ac00005  blez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A580u;
    {
        const bool branch_taken_0x12a580 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x12A584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A580u;
            // 0x12a584: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a580) {
            ctx->pc = 0x12A598u;
            goto label_12a598;
        }
    }
    ctx->pc = 0x12A588u;
    // 0x12a588: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x12a588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a58c: 0xc049e74  jal         func_1279D0
    ctx->pc = 0x12A58Cu;
    SET_GPR_U32(ctx, 31, 0x12A594u);
    ctx->pc = 0x12A590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A58Cu;
            // 0x12a590: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1279D0u;
    if (runtime->hasFunction(0x1279D0u)) {
        auto targetFn = runtime->lookupFunction(0x1279D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A594u; }
        if (ctx->pc != 0x12A594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x1279d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A594u; }
        if (ctx->pc != 0x12A594u) { return; }
    }
    ctx->pc = 0x12A594u;
label_12a594:
    // 0x12a594: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x12a594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_12a598:
    // 0x12a598: 0x1a000005  blez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A598u;
    {
        const bool branch_taken_0x12a598 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x12A59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A598u;
            // 0x12a59c: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a598) {
            ctx->pc = 0x12A5B0u;
            goto label_12a5b0;
        }
    }
    ctx->pc = 0x12A5A0u;
    // 0x12a5a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12a5a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a5a4: 0xc049eb4  jal         func_127AD0
    ctx->pc = 0x12A5A4u;
    SET_GPR_U32(ctx, 31, 0x12A5ACu);
    ctx->pc = 0x12A5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A5A4u;
            // 0x12a5a8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127AD0u;
    if (runtime->hasFunction(0x127AD0u)) {
        auto targetFn = runtime->lookupFunction(0x127AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A5ACu; }
        if (ctx->pc != 0x12A5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x127ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A5ACu; }
        if (ctx->pc != 0x12A5ACu) { return; }
    }
    ctx->pc = 0x12A5ACu;
label_12a5ac:
    // 0x12a5ac: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x12a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_12a5b0:
    // 0x12a5b0: 0x1a800005  blez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A5B0u;
    {
        const bool branch_taken_0x12a5b0 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x12A5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A5B0u;
            // 0x12a5b4: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5b0) {
            ctx->pc = 0x12A5C8u;
            goto label_12a5c8;
        }
    }
    ctx->pc = 0x12A5B8u;
    // 0x12a5b8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x12a5b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a5bc: 0xc049eb4  jal         func_127AD0
    ctx->pc = 0x12A5BCu;
    SET_GPR_U32(ctx, 31, 0x12A5C4u);
    ctx->pc = 0x12A5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A5BCu;
            // 0x12a5c0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127AD0u;
    if (runtime->hasFunction(0x127AD0u)) {
        auto targetFn = runtime->lookupFunction(0x127AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A5C4u; }
        if (ctx->pc != 0x12A5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x127ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A5C4u; }
        if (ctx->pc != 0x12A5C4u) { return; }
    }
    ctx->pc = 0x12A5C4u;
label_12a5c4:
    // 0x12a5c4: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x12a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_12a5c8:
    // 0x12a5c8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x12a5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a5cc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x12a5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a5d0: 0xc049f2c  jal         func_127CB0
    ctx->pc = 0x12A5D0u;
    SET_GPR_U32(ctx, 31, 0x12A5D8u);
    ctx->pc = 0x12A5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A5D0u;
            // 0x12a5d4: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127CB0u;
    if (runtime->hasFunction(0x127CB0u)) {
        auto targetFn = runtime->lookupFunction(0x127CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A5D8u; }
        if (ctx->pc != 0x12A5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mdiff_0x127cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A5D8u; }
        if (ctx->pc != 0x12A5D8u) { return; }
    }
    ctx->pc = 0x12A5D8u;
label_12a5d8:
    // 0x12a5d8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x12a5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x12a5dc: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x12a5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12a5e0: 0x8c54000c  lw          $s4, 0xC($v0)
    ctx->pc = 0x12a5e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12a5e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12a5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a5e8: 0xc049f12  jal         func_127C48
    ctx->pc = 0x12A5E8u;
    SET_GPR_U32(ctx, 31, 0x12A5F0u);
    ctx->pc = 0x12A5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A5E8u;
            // 0x12a5ec: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127C48u;
    if (runtime->hasFunction(0x127C48u)) {
        auto targetFn = runtime->lookupFunction(0x127C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A5F0u; }
        if (ctx->pc != 0x12A5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x127c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A5F0u; }
        if (ctx->pc != 0x12A5F0u) { return; }
    }
    ctx->pc = 0x12A5F0u;
label_12a5f0:
    // 0x12a5f0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x12a5f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a5f4: 0x4e1fe95  bgez        $a3, . + 4 + (-0x16B << 2)
    ctx->pc = 0x12A5F4u;
    {
        const bool branch_taken_0x12a5f4 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x12a5f4) {
            ctx->pc = 0x12A04Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a04c;
        }
    }
    ctx->pc = 0x12A5FCu;
    // 0x12a5fc: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A5FCu;
    {
        const bool branch_taken_0x12a5fc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A5FCu;
            // 0x12a600: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5fc) {
            ctx->pc = 0x12A61Cu;
            goto label_12a61c;
        }
    }
    ctx->pc = 0x12A604u;
    // 0x12a604: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12a604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a608: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x12a608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x12a60c: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x12a60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x12a610: 0x1040fe83  beqz        $v0, . + 4 + (-0x17D << 2)
    ctx->pc = 0x12A610u;
    {
        const bool branch_taken_0x12a610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A610u;
            // 0x12a614: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a610) {
            ctx->pc = 0x12A020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a020;
        }
    }
    ctx->pc = 0x12A618u;
label_12a618:
    // 0x12a618: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x12a618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_12a61c:
    // 0x12a61c: 0xc049ce4  jal         func_127390
    ctx->pc = 0x12A61Cu;
    SET_GPR_U32(ctx, 31, 0x12A624u);
    ctx->pc = 0x12A620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A61Cu;
            // 0x12a620: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (runtime->hasFunction(0x127390u)) {
        auto targetFn = runtime->lookupFunction(0x127390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A624u; }
        if (ctx->pc != 0x12A624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x127390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A624u; }
        if (ctx->pc != 0x12A624u) { return; }
    }
    ctx->pc = 0x12A624u;
label_12a624:
    // 0x12a624: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x12a624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x12a628: 0xc049ce4  jal         func_127390
    ctx->pc = 0x12A628u;
    SET_GPR_U32(ctx, 31, 0x12A630u);
    ctx->pc = 0x12A62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A628u;
            // 0x12a62c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (runtime->hasFunction(0x127390u)) {
        auto targetFn = runtime->lookupFunction(0x127390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A630u; }
        if (ctx->pc != 0x12A630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x127390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A630u; }
        if (ctx->pc != 0x12A630u) { return; }
    }
    ctx->pc = 0x12A630u;
label_12a630:
    // 0x12a630: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x12a630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x12a634: 0xc049ce4  jal         func_127390
    ctx->pc = 0x12A634u;
    SET_GPR_U32(ctx, 31, 0x12A63Cu);
    ctx->pc = 0x12A638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A634u;
            // 0x12a638: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (runtime->hasFunction(0x127390u)) {
        auto targetFn = runtime->lookupFunction(0x127390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A63Cu; }
        if (ctx->pc != 0x12A63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x127390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A63Cu; }
        if (ctx->pc != 0x12A63Cu) { return; }
    }
    ctx->pc = 0x12A63Cu;
label_12a63c:
    // 0x12a63c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x12a63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12a640: 0xc049ce4  jal         func_127390
    ctx->pc = 0x12A640u;
    SET_GPR_U32(ctx, 31, 0x12A648u);
    ctx->pc = 0x12A644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A640u;
            // 0x12a644: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (runtime->hasFunction(0x127390u)) {
        auto targetFn = runtime->lookupFunction(0x127390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A648u; }
        if (ctx->pc != 0x12A648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x127390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A648u; }
        if (ctx->pc != 0x12A648u) { return; }
    }
    ctx->pc = 0x12A648u;
label_12a648:
    // 0x12a648: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x12a648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12a64c: 0xc049ce4  jal         func_127390
    ctx->pc = 0x12A64Cu;
    SET_GPR_U32(ctx, 31, 0x12A654u);
    ctx->pc = 0x12A650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A64Cu;
            // 0x12a650: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (runtime->hasFunction(0x127390u)) {
        auto targetFn = runtime->lookupFunction(0x127390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A654u; }
        if (ctx->pc != 0x12A654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x127390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A654u; }
        if (ctx->pc != 0x12A654u) { return; }
    }
    ctx->pc = 0x12A654u;
label_12a654:
    // 0x12a654: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x12a654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_12a658:
    // 0x12a658: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12A658u;
    {
        const bool branch_taken_0x12a658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a658) {
            ctx->pc = 0x12A65Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A658u;
            // 0x12a65c: 0xac550000  sw          $s5, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A660u;
            goto label_12a660;
        }
    }
    ctx->pc = 0x12A660u;
label_12a660:
    // 0x12a660: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x12a660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12a664: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A664u;
    {
        const bool branch_taken_0x12a664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A664u;
            // 0x12a668: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a664) {
            ctx->pc = 0x12A678u;
            goto label_12a678;
        }
    }
    ctx->pc = 0x12A66Cu;
    // 0x12a66c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12a66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a670: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x12A670u;
    SET_GPR_U32(ctx, 31, 0x12A678u);
    ctx->pc = 0x12A674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A670u;
            // 0x12a674: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A678u; }
        if (ctx->pc != 0x12A678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A678u; }
        if (ctx->pc != 0x12A678u) { return; }
    }
    ctx->pc = 0x12A678u;
label_12a678:
    // 0x12a678: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x12a678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x12a67c: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x12a67cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x12a680: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x12a680u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12a684: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x12a684u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x12a688: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x12a688u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12a68c: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x12a68cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12a690: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x12a690u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12a694: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x12a694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12a698: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x12a698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12a69c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x12a69cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12a6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x12A6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A6A0u;
            // 0x12a6a4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A6A8u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _decMB0
// Address: 0x10a310 - 0x10a7b8
void _decMB0_0x10a310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_decMB0_0x10a310");
#endif

    switch (ctx->pc) {
        case 0x10a38cu: goto label_10a38c;
        case 0x10a3a8u: goto label_10a3a8;
        case 0x10a3ecu: goto label_10a3ec;
        case 0x10a4a8u: goto label_10a4a8;
        case 0x10a4d4u: goto label_10a4d4;
        case 0x10a544u: goto label_10a544;
        case 0x10a570u: goto label_10a570;
        case 0x10a5d0u: goto label_10a5d0;
        case 0x10a5fcu: goto label_10a5fc;
        case 0x10a62cu: goto label_10a62c;
        case 0x10a654u: goto label_10a654;
        case 0x10a65cu: goto label_10a65c;
        case 0x10a6a0u: goto label_10a6a0;
        default: break;
    }

    ctx->pc = 0x10a310u;

    // 0x10a310: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x10a310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x10a314: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x10a314u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x10a318: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x10a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x10a31c: 0x356b2010  ori         $t3, $t3, 0x2010
    ctx->pc = 0x10a31cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)8208);
    // 0x10a320: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x10a320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x10a324: 0x3c02f8ff  lui         $v0, 0xF8FF
    ctx->pc = 0x10a324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63743 << 16));
    // 0x10a328: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x10a328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x10a32c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10a32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10a330: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x10a330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x10a334: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10a334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a338: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x10a338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x10a33c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x10a33cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a340: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x10a340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x10a344: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a348: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x10a348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x10a34c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x10a34cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a350: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x10a350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x10a354: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x10a354u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a358: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x10a358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x10a35c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a360: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x10a360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x10a364: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x10a364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x10a368: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x10a368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x10a36c: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x10a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x10a370: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x10a370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x10a374: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10a374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x10a378: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x10a378u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x10a37c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a380: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x10a380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x10a384: 0xc042b2e  jal         func_10ACB8
    ctx->pc = 0x10A384u;
    SET_GPR_U32(ctx, 31, 0x10A38Cu);
    ctx->pc = 0x10A388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A384u;
            // 0x10a388: 0xafa90024  sw          $t1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ACB8u;
    if (runtime->hasFunction(0x10ACB8u)) {
        auto targetFn = runtime->lookupFunction(0x10ACB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A38Cu; }
        if (ctx->pc != 0x10A38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x10acb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A38Cu; }
        if (ctx->pc != 0x10A38Cu) { return; }
    }
    ctx->pc = 0x10A38Cu;
label_10a38c:
    // 0x10a38c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10a38cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a390: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10A390u;
    {
        const bool branch_taken_0x10a390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A390u;
            // 0x10a394: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a390) {
            ctx->pc = 0x10A3B8u;
            goto label_10a3b8;
        }
    }
    ctx->pc = 0x10A398u;
    // 0x10a398: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x10a398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x10a39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a3a0: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10A3A0u;
    SET_GPR_U32(ctx, 31, 0x10A3A8u);
    ctx->pc = 0x10A3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A3A0u;
            // 0x10a3a4: 0x24a50718  addiu       $a1, $a1, 0x718 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A3A8u; }
        if (ctx->pc != 0x10A3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x10ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A3A8u; }
        if (ctx->pc != 0x10A3A8u) { return; }
    }
    ctx->pc = 0x10A3A8u;
label_10a3a8:
    // 0x10a3a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10a3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a3ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10a3acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a3b0: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x10A3B0u;
    {
        const bool branch_taken_0x10a3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A3B0u;
            // 0x10a3b4: 0xae03011c  sw          $v1, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3b0) {
            ctx->pc = 0x10A788u;
            goto label_10a788;
        }
    }
    ctx->pc = 0x10A3B8u;
label_10a3b8:
    // 0x10a3b8: 0x3062000c  andi        $v0, $v1, 0xC
    ctx->pc = 0x10a3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x10a3bc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10A3BCu;
    {
        const bool branch_taken_0x10a3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A3BCu;
            // 0x10a3c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3bc) {
            ctx->pc = 0x10A3F4u;
            goto label_10a3f4;
        }
    }
    ctx->pc = 0x10A3C4u;
    // 0x10a3c4: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x10a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x10a3c8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A3C8u;
    {
        const bool branch_taken_0x10a3c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A3C8u;
            // 0x10a3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3c8) {
            ctx->pc = 0x10A3E4u;
            goto label_10a3e4;
        }
    }
    ctx->pc = 0x10A3D0u;
    // 0x10a3d0: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x10a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x10a3d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A3D4u;
    {
        const bool branch_taken_0x10a3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A3D4u;
            // 0x10a3d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3d4) {
            ctx->pc = 0x10A3E4u;
            goto label_10a3e4;
        }
    }
    ctx->pc = 0x10A3DCu;
    // 0x10a3dc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10A3DCu;
    {
        const bool branch_taken_0x10a3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A3DCu;
            // 0x10a3e0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3dc) {
            ctx->pc = 0x10A420u;
            goto label_10a420;
        }
    }
    ctx->pc = 0x10A3E4u;
label_10a3e4:
    // 0x10a3e4: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10A3E4u;
    SET_GPR_U32(ctx, 31, 0x10A3ECu);
    ctx->pc = 0x10A3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A3E4u;
            // 0x10a3e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A3ECu; }
        if (ctx->pc != 0x10A3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A3ECu; }
        if (ctx->pc != 0x10A3ECu) { return; }
    }
    ctx->pc = 0x10A3ECu;
label_10a3ec:
    // 0x10a3ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10A3ECu;
    {
        const bool branch_taken_0x10a3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A3ECu;
            // 0x10a3f0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a3ec) {
            ctx->pc = 0x10A420u;
            goto label_10a420;
        }
    }
    ctx->pc = 0x10A3F4u;
label_10a3f4:
    // 0x10a3f4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x10a3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x10a3f8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x10A3F8u;
    {
        const bool branch_taken_0x10a3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a3f8) {
            ctx->pc = 0x10A3FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A3F8u;
            // 0x10a3fc: 0x8e060174  lw          $a2, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A424u;
            goto label_10a424;
        }
    }
    ctx->pc = 0x10A400u;
    // 0x10a400: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x10a400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x10a404: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A404u;
    {
        const bool branch_taken_0x10a404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A404u;
            // 0x10a408: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a404) {
            ctx->pc = 0x10A420u;
            goto label_10a420;
        }
    }
    ctx->pc = 0x10A40Cu;
    // 0x10a40c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x10a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x10a410: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x10a410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a414: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x10a414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x10a418: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x10a418u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x10a41c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x10a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_10a420:
    // 0x10a420: 0x8e060174  lw          $a2, 0x174($s0)
    ctx->pc = 0x10a420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
label_10a424:
    // 0x10a424: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10a424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a428: 0x14c20008  bne         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A428u;
    {
        const bool branch_taken_0x10a428 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A428u;
            // 0x10a42c: 0x8ea50000  lw          $a1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a428) {
            ctx->pc = 0x10A44Cu;
            goto label_10a44c;
        }
    }
    ctx->pc = 0x10A430u;
    // 0x10a430: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x10a430u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a434: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10a434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a438: 0x38a30001  xori        $v1, $a1, 0x1
    ctx->pc = 0x10a438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x10a43c: 0x38a40002  xori        $a0, $a1, 0x2
    ctx->pc = 0x10a43cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x10a440: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x10a440u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2));
    // 0x10a444: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10A444u;
    {
        const bool branch_taken_0x10a444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A444u;
            // 0x10a448: 0x2c940001  sltiu       $s4, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a444) {
            ctx->pc = 0x10A460u;
            goto label_10a460;
        }
    }
    ctx->pc = 0x10A44Cu;
label_10a44c:
    // 0x10a44c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a450: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x10a450u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a454: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x10a454u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a458: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x10a458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x10a45c: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x10a45cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3));
label_10a460:
    // 0x10a460: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x10a460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x10a464: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x10a464u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a468: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A468u;
    {
        const bool branch_taken_0x10a468 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A468u;
            // 0x10a46c: 0x2c5e0001  sltiu       $fp, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a468) {
            ctx->pc = 0x10A478u;
            goto label_10a478;
        }
    }
    ctx->pc = 0x10A470u;
    // 0x10a470: 0x38c20003  xori        $v0, $a2, 0x3
    ctx->pc = 0x10a470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)3);
    // 0x10a474: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x10a474u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_10a478:
    // 0x10a478: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10a478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a47c: 0x14c2000d  bne         $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10A47Cu;
    {
        const bool branch_taken_0x10a47c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A47Cu;
            // 0x10a480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a47c) {
            ctx->pc = 0x10A4B4u;
            goto label_10a4b4;
        }
    }
    ctx->pc = 0x10A484u;
    // 0x10a484: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x10a484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x10a488: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10A488u;
    {
        const bool branch_taken_0x10a488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A488u;
            // 0x10a48c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a488) {
            ctx->pc = 0x10A4B4u;
            goto label_10a4b4;
        }
    }
    ctx->pc = 0x10A490u;
    // 0x10a490: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x10a490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10a494: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x10a494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x10a498: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A498u;
    {
        const bool branch_taken_0x10a498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A498u;
            // 0x10a49c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a498) {
            ctx->pc = 0x10A4B0u;
            goto label_10a4b0;
        }
    }
    ctx->pc = 0x10A4A0u;
    // 0x10a4a0: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10A4A0u;
    SET_GPR_U32(ctx, 31, 0x10A4A8u);
    ctx->pc = 0x10A4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A4A0u;
            // 0x10a4a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A4A8u; }
        if (ctx->pc != 0x10A4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A4A8u; }
        if (ctx->pc != 0x10A4A8u) { return; }
    }
    ctx->pc = 0x10A4A8u;
label_10a4a8:
    // 0x10a4a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10A4A8u;
    {
        const bool branch_taken_0x10a4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A4A8u;
            // 0x10a4ac: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a4a8) {
            ctx->pc = 0x10A4B8u;
            goto label_10a4b8;
        }
    }
    ctx->pc = 0x10A4B0u;
label_10a4b0:
    // 0x10a4b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10a4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a4b4:
    // 0x10a4b4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x10a4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10a4b8:
    // 0x10a4b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10a4bc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x10a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10a4c0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x10a4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x10a4c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10A4C4u;
    {
        const bool branch_taken_0x10a4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A4C4u;
            // 0x10a4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a4c4) {
            ctx->pc = 0x10A4DCu;
            goto label_10a4dc;
        }
    }
    ctx->pc = 0x10A4CCu;
    // 0x10a4cc: 0xc042c0a  jal         func_10B028
    ctx->pc = 0x10A4CCu;
    SET_GPR_U32(ctx, 31, 0x10A4D4u);
    ctx->pc = 0x10A4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A4CCu;
            // 0x10a4d0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B028u;
    if (runtime->hasFunction(0x10B028u)) {
        auto targetFn = runtime->lookupFunction(0x10B028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A4D4u; }
        if (ctx->pc != 0x10A4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x10b028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A4D4u; }
        if (ctx->pc != 0x10A4D4u) { return; }
    }
    ctx->pc = 0x10A4D4u;
label_10a4d4:
    // 0x10a4d4: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x10a4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x10a4d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x10a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_10a4dc:
    // 0x10a4dc: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x10a4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x10a4e0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A4E0u;
    {
        const bool branch_taken_0x10a4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a4e0) {
            ctx->pc = 0x10A4E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A4E0u;
            // 0x10a4e4: 0x8e020848  lw          $v0, 0x848($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A504u;
            goto label_10a504;
        }
    }
    ctx->pc = 0x10A4E8u;
    // 0x10a4e8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x10a4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x10a4ec: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x10A4ECu;
    {
        const bool branch_taken_0x10a4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a4ec) {
            ctx->pc = 0x10A4F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A4ECu;
            // 0x10a4f0: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A574u;
            goto label_10a574;
        }
    }
    ctx->pc = 0x10A4F4u;
    // 0x10a4f4: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x10a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x10a4f8: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x10A4F8u;
    {
        const bool branch_taken_0x10a4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a4f8) {
            ctx->pc = 0x10A4FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A4F8u;
            // 0x10a4fc: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A574u;
            goto label_10a574;
        }
    }
    ctx->pc = 0x10A500u;
    // 0x10a500: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x10a500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
label_10a504:
    // 0x10a504: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10A504u;
    {
        const bool branch_taken_0x10a504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A504u;
            // 0x10a508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a504) {
            ctx->pc = 0x10A54Cu;
            goto label_10a54c;
        }
    }
    ctx->pc = 0x10A50Cu;
    // 0x10a50c: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x10a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x10a510: 0x8e0b0164  lw          $t3, 0x164($s0)
    ctx->pc = 0x10a510u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x10a514: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a518: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10a518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10a51c: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x10a51cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10a520: 0xafbe0008  sw          $fp, 0x8($sp)
    ctx->pc = 0x10a520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 30));
    // 0x10a524: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x10a524u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x10a528: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10a528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10a52c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x10a52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a530: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x10a530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x10a534: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10a534u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a538: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x10a538u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a53c: 0xc042a10  jal         func_10A840
    ctx->pc = 0x10A53Cu;
    SET_GPR_U32(ctx, 31, 0x10A544u);
    ctx->pc = 0x10A540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A53Cu;
            // 0x10a540: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A840u;
    if (runtime->hasFunction(0x10A840u)) {
        auto targetFn = runtime->lookupFunction(0x10A840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A544u; }
        if (ctx->pc != 0x10A544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _motionVectors_0x10a840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A544u; }
        if (ctx->pc != 0x10A544u) { return; }
    }
    ctx->pc = 0x10A544u;
label_10a544:
    // 0x10a544: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10A544u;
    {
        const bool branch_taken_0x10a544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A544u;
            // 0x10a548: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a544) {
            ctx->pc = 0x10A574u;
            goto label_10a574;
        }
    }
    ctx->pc = 0x10A54Cu;
label_10a54c:
    // 0x10a54c: 0x8e070158  lw          $a3, 0x158($s0)
    ctx->pc = 0x10a54cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x10a550: 0x8e0b0154  lw          $t3, 0x154($s0)
    ctx->pc = 0x10a550u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x10a554: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a558: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x10a558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x10a55c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x10a55cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a560: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10a560u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a564: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x10a564u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a568: 0xc042a78  jal         func_10A9E0
    ctx->pc = 0x10A568u;
    SET_GPR_U32(ctx, 31, 0x10A570u);
    ctx->pc = 0x10A56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A568u;
            // 0x10a56c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A9E0u;
    if (runtime->hasFunction(0x10A9E0u)) {
        auto targetFn = runtime->lookupFunction(0x10A9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A570u; }
        if (ctx->pc != 0x10A570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _motionVector_0x10a9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A570u; }
        if (ctx->pc != 0x10A570u) { return; }
    }
    ctx->pc = 0x10A570u;
label_10a570:
    // 0x10a570: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x10a570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_10a574:
    // 0x10a574: 0x14600084  bnez        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x10A574u;
    {
        const bool branch_taken_0x10a574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A574u;
            // 0x10a578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a574) {
            ctx->pc = 0x10A788u;
            goto label_10a788;
        }
    }
    ctx->pc = 0x10A57Cu;
    // 0x10a57c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x10a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10a580: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x10a580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x10a584: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x10A584u;
    {
        const bool branch_taken_0x10a584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a584) {
            ctx->pc = 0x10A600u;
            goto label_10a600;
        }
    }
    ctx->pc = 0x10A58Cu;
    // 0x10a58c: 0x8e020848  lw          $v0, 0x848($s0)
    ctx->pc = 0x10a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x10a590: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10A590u;
    {
        const bool branch_taken_0x10a590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A590u;
            // 0x10a594: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a590) {
            ctx->pc = 0x10A5D8u;
            goto label_10a5d8;
        }
    }
    ctx->pc = 0x10A598u;
    // 0x10a598: 0x8e020170  lw          $v0, 0x170($s0)
    ctx->pc = 0x10a598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x10a59c: 0x8e0b016c  lw          $t3, 0x16C($s0)
    ctx->pc = 0x10a59cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 364)));
    // 0x10a5a0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x10a5a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10a5a8: 0x8fa70024  lw          $a3, 0x24($sp)
    ctx->pc = 0x10a5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10a5ac: 0xafb70010  sw          $s7, 0x10($sp)
    ctx->pc = 0x10a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
    // 0x10a5b0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x10a5b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5b4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10a5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10a5b8: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x10a5b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x10a5bc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x10a5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x10a5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5c8: 0xc042a10  jal         func_10A840
    ctx->pc = 0x10A5C8u;
    SET_GPR_U32(ctx, 31, 0x10A5D0u);
    ctx->pc = 0x10A5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A5C8u;
            // 0x10a5cc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A840u;
    if (runtime->hasFunction(0x10A840u)) {
        auto targetFn = runtime->lookupFunction(0x10A840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A5D0u; }
        if (ctx->pc != 0x10A5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _motionVectors_0x10a840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A5D0u; }
        if (ctx->pc != 0x10A5D0u) { return; }
    }
    ctx->pc = 0x10A5D0u;
label_10a5d0:
    // 0x10a5d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10A5D0u;
    {
        const bool branch_taken_0x10a5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A5D0u;
            // 0x10a5d4: 0x8e03011c  lw          $v1, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a5d0) {
            ctx->pc = 0x10A600u;
            goto label_10a600;
        }
    }
    ctx->pc = 0x10A5D8u;
label_10a5d8:
    // 0x10a5d8: 0x8e070160  lw          $a3, 0x160($s0)
    ctx->pc = 0x10a5d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x10a5dc: 0x8e0b015c  lw          $t3, 0x15C($s0)
    ctx->pc = 0x10a5dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x10a5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5e4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x10a5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x10a5e8: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x10a5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x10a5ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10a5ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5f0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x10a5f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5f4: 0xc042a78  jal         func_10A9E0
    ctx->pc = 0x10A5F4u;
    SET_GPR_U32(ctx, 31, 0x10A5FCu);
    ctx->pc = 0x10A5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A5F4u;
            // 0x10a5f8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A9E0u;
    if (runtime->hasFunction(0x10A9E0u)) {
        auto targetFn = runtime->lookupFunction(0x10A9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A5FCu; }
        if (ctx->pc != 0x10A5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _motionVector_0x10a9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A5FCu; }
        if (ctx->pc != 0x10A5FCu) { return; }
    }
    ctx->pc = 0x10A5FCu;
label_10a5fc:
    // 0x10a5fc: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x10a5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_10a600:
    // 0x10a600: 0x14600061  bnez        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x10A600u;
    {
        const bool branch_taken_0x10a600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A600u;
            // 0x10a604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a600) {
            ctx->pc = 0x10A788u;
            goto label_10a788;
        }
    }
    ctx->pc = 0x10A608u;
    // 0x10a608: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x10a608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10a60c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x10a60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x10a610: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A610u;
    {
        const bool branch_taken_0x10a610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A610u;
            // 0x10a614: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a610) {
            ctx->pc = 0x10A634u;
            goto label_10a634;
        }
    }
    ctx->pc = 0x10A618u;
    // 0x10a618: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x10a618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x10a61c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10A61Cu;
    {
        const bool branch_taken_0x10a61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A61Cu;
            // 0x10a620: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a61c) {
            ctx->pc = 0x10A630u;
            goto label_10a630;
        }
    }
    ctx->pc = 0x10A624u;
    // 0x10a624: 0xc042bce  jal         func_10AF38
    ctx->pc = 0x10A624u;
    SET_GPR_U32(ctx, 31, 0x10A62Cu);
    ctx->pc = 0x10A628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A624u;
            // 0x10a628: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AF38u;
    if (runtime->hasFunction(0x10AF38u)) {
        auto targetFn = runtime->lookupFunction(0x10AF38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A62Cu; }
        if (ctx->pc != 0x10A62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x10af38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A62Cu; }
        if (ctx->pc != 0x10A62Cu) { return; }
    }
    ctx->pc = 0x10A62Cu;
label_10a62c:
    // 0x10a62c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x10a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_10a630:
    // 0x10a630: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x10a630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_10a634:
    // 0x10a634: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x10A634u;
    {
        const bool branch_taken_0x10a634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A634u;
            // 0x10a638: 0x24030140  addiu       $v1, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a634) {
            ctx->pc = 0x10A6A8u;
            goto label_10a6a8;
        }
    }
    ctx->pc = 0x10A63Cu;
    // 0x10a63c: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x10a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x10a640: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x10a640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x10a644: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x10a644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x10a648: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x10a648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x10a64c: 0xc043200  jal         func_10C800
    ctx->pc = 0x10A64Cu;
    SET_GPR_U32(ctx, 31, 0x10A654u);
    ctx->pc = 0x10A650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A64Cu;
            // 0x10a650: 0x8c440594  lw          $a0, 0x594($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1428)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C800u;
    if (runtime->hasFunction(0x10C800u)) {
        auto targetFn = runtime->lookupFunction(0x10C800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A654u; }
        if (ctx->pc != 0x10A654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        receiveDataFromIPU_0x10c800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A654u; }
        if (ctx->pc != 0x10A654u) { return; }
    }
    ctx->pc = 0x10A654u;
label_10a654:
    // 0x10a654: 0xc042ad8  jal         func_10AB60
    ctx->pc = 0x10A654u;
    SET_GPR_U32(ctx, 31, 0x10A65Cu);
    ctx->pc = 0x10A658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A654u;
            // 0x10a658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB60u;
    if (runtime->hasFunction(0x10AB60u)) {
        auto targetFn = runtime->lookupFunction(0x10AB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A65Cu; }
        if (ctx->pc != 0x10A65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x10ab60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A65Cu; }
        if (ctx->pc != 0x10A65Cu) { return; }
    }
    ctx->pc = 0x10A65Cu;
label_10a65c:
    // 0x10a65c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x10a65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10a660: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x10a660u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
    // 0x10a664: 0x8e0601b4  lw          $a2, 0x1B4($s0)
    ctx->pc = 0x10a664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x10a668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a66c: 0x8e0301b0  lw          $v1, 0x1B0($s0)
    ctx->pc = 0x10a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x10a670: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x10a670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x10a674: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x10a674u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a678: 0x52ec0  sll         $a1, $a1, 27
    ctx->pc = 0x10a678u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 27));
    // 0x10a67c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x10a67cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x10a680: 0x31e80  sll         $v1, $v1, 26
    ctx->pc = 0x10a680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 26));
    // 0x10a684: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x10a684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10a688: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x10a688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x10a68c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x10a68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x10a690: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x10a690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x10a694: 0x21640  sll         $v0, $v0, 25
    ctx->pc = 0x10a694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 25));
    // 0x10a698: 0xc042acc  jal         func_10AB30
    ctx->pc = 0x10A698u;
    SET_GPR_U32(ctx, 31, 0x10A6A0u);
    ctx->pc = 0x10A69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10A698u;
            // 0x10a69c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB30u;
    if (runtime->hasFunction(0x10AB30u)) {
        auto targetFn = runtime->lookupFunction(0x10AB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A6A0u; }
        if (ctx->pc != 0x10A6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x10ab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10A6A0u; }
        if (ctx->pc != 0x10A6A0u) { return; }
    }
    ctx->pc = 0x10A6A0u;
label_10a6a0:
    // 0x10a6a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10A6A0u;
    {
        const bool branch_taken_0x10a6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A6A0u;
            // 0x10a6a4: 0x8e02011c  lw          $v0, 0x11C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6a0) {
            ctx->pc = 0x10A6C0u;
            goto label_10a6c0;
        }
    }
    ctx->pc = 0x10A6A8u;
label_10a6a8:
    // 0x10a6a8: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x10a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x10a6ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10a6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a6b0: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x10a6b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x10a6b4: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x10a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x10a6b8: 0xac4406cc  sw          $a0, 0x6CC($v0)
    ctx->pc = 0x10a6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 4));
    // 0x10a6bc: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x10a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_10a6c0:
    // 0x10a6c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A6C0u;
    {
        const bool branch_taken_0x10a6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A6C0u;
            // 0x10a6c4: 0xae0001b0  sw          $zero, 0x1B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6c0) {
            ctx->pc = 0x10A6D0u;
            goto label_10a6d0;
        }
    }
    ctx->pc = 0x10A6C8u;
    // 0x10a6c8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x10A6C8u;
    {
        const bool branch_taken_0x10a6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A6C8u;
            // 0x10a6cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6c8) {
            ctx->pc = 0x10A788u;
            goto label_10a788;
        }
    }
    ctx->pc = 0x10A6D0u;
label_10a6d0:
    // 0x10a6d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x10a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10a6d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10a6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10a6d8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A6D8u;
    {
        const bool branch_taken_0x10a6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a6d8) {
            ctx->pc = 0x10A6DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A6D8u;
            // 0x10a6dc: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A6FCu;
            goto label_10a6fc;
        }
    }
    ctx->pc = 0x10A6E0u;
    // 0x10a6e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a6e4: 0xae0301b0  sw          $v1, 0x1B0($s0)
    ctx->pc = 0x10a6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 3));
    // 0x10a6e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x10a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10a6ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10a6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10a6f0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x10A6F0u;
    {
        const bool branch_taken_0x10a6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a6f0) {
            ctx->pc = 0x10A6F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A6F0u;
            // 0x10a6f4: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A728u;
            goto label_10a728;
        }
    }
    ctx->pc = 0x10A6F8u;
    // 0x10a6f8: 0x8e020180  lw          $v0, 0x180($s0)
    ctx->pc = 0x10a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_10a6fc:
    // 0x10a6fc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x10A6FCu;
    {
        const bool branch_taken_0x10a6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a6fc) {
            ctx->pc = 0x10A700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10A6FCu;
            // 0x10a700: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10A728u;
            goto label_10a728;
        }
    }
    ctx->pc = 0x10A704u;
    // 0x10a704: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x10a704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x10a708: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x10a708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x10a70c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x10a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x10a710: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x10a710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x10a714: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x10a714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x10a718: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x10a718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x10a71c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x10a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x10a720: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x10a720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x10a724: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x10a724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_10a728:
    // 0x10a728: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10a728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a72c: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x10A72Cu;
    {
        const bool branch_taken_0x10a72c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A72Cu;
            // 0x10a730: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a72c) {
            ctx->pc = 0x10A788u;
            goto label_10a788;
        }
    }
    ctx->pc = 0x10A734u;
    // 0x10a734: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x10a734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10a738: 0x30420009  andi        $v0, $v0, 0x9
    ctx->pc = 0x10a738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x10a73c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x10A73Cu;
    {
        const bool branch_taken_0x10a73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A73Cu;
            // 0x10a740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a73c) {
            ctx->pc = 0x10A788u;
            goto label_10a788;
        }
    }
    ctx->pc = 0x10A744u;
    // 0x10a744: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x10a744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x10a748: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10a748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a74c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x10a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x10a750: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x10a750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x10a754: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x10a754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x10a758: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x10a758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x10a75c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10A75Cu;
    {
        const bool branch_taken_0x10a75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10A760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A75Cu;
            // 0x10a760: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a75c) {
            ctx->pc = 0x10A76Cu;
            goto label_10a76c;
        }
    }
    ctx->pc = 0x10A764u;
    // 0x10a764: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10A764u;
    {
        const bool branch_taken_0x10a764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A764u;
            // 0x10a768: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a764) {
            ctx->pc = 0x10A784u;
            goto label_10a784;
        }
    }
    ctx->pc = 0x10A76Cu;
label_10a76c:
    // 0x10a76c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x10a76cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x10a770: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x10a770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x10a774: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x10a774u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10a778: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x10a778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x10a77c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x10a77cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x10a780: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x10a780u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_10a784:
    // 0x10a784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a788:
    // 0x10a788: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x10a788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10a78c: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x10a78cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10a790: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x10a790u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10a794: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x10a794u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10a798: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x10a798u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10a79c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x10a79cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10a7a0: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x10a7a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10a7a4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x10a7a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10a7a8: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x10a7a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a7ac: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x10a7acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x10A7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10A7B0u;
            // 0x10a7b4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10A7B8u;
}

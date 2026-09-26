#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ieee754_sqrt
// Address: 0x11a8c0 - 0x11abc4
void ps2___ieee754_sqrt_0x11a8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_sqrt_0x11a8c0");
#endif

    switch (ctx->pc) {
        case 0x11a90cu: goto label_11a90c;
        case 0x11a918u: goto label_11a918;
        case 0x11a950u: goto label_11a950;
        case 0x11a95cu: goto label_11a95c;
        case 0x11a978u: goto label_11a978;
        case 0x11a9a8u: goto label_11a9a8;
        case 0x11aa48u: goto label_11aa48;
        case 0x11aa80u: goto label_11aa80;
        case 0x11ab14u: goto label_11ab14;
        case 0x11ab40u: goto label_11ab40;
        default: break;
    }

    ctx->pc = 0x11a8c0u;

    // 0x11a8c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11a8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11a8c4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11a8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11a8c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11a8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11a8cc: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x11a8ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x11a8d0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x11a8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11a8d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11a8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8d8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11a8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11a8dc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11a8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11a8e0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11a8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11a8e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11a8e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8e8: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x11a8e8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11a8ec: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x11a8ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11a8f0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x11a8f0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x11a8f4: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x11a8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x11a8f8: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x11a8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x11a8fc: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A8FCu;
    {
        const bool branch_taken_0x11a8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11A900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A8FCu;
            // 0x11a900: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a8fc) {
            ctx->pc = 0x11A920u;
            goto label_11a920;
        }
    }
    ctx->pc = 0x11A904u;
    // 0x11a904: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A904u;
    SET_GPR_U32(ctx, 31, 0x11A90Cu);
    ctx->pc = 0x11A908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A904u;
            // 0x11a908: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A90Cu; }
        if (ctx->pc != 0x11A90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A90Cu; }
        if (ctx->pc != 0x11A90Cu) { return; }
    }
    ctx->pc = 0x11A90Cu;
label_11a90c:
    // 0x11a90c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a910: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11A910u;
    SET_GPR_U32(ctx, 31, 0x11A918u);
    ctx->pc = 0x11A914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A910u;
            // 0x11a914: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A918u; }
        if (ctx->pc != 0x11A918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A918u; }
        if (ctx->pc != 0x11A918u) { return; }
    }
    ctx->pc = 0x11A918u;
label_11a918:
    // 0x11a918: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x11A918u;
    {
        const bool branch_taken_0x11a918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A918u;
            // 0x11a91c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a918) {
            ctx->pc = 0x11ABA4u;
            goto label_11aba4;
        }
    }
    ctx->pc = 0x11A920u;
label_11a920:
    // 0x11a920: 0x1cc00010  bgtz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x11A920u;
    {
        const bool branch_taken_0x11a920 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x11A924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A920u;
            // 0x11a924: 0x62d03  sra         $a1, $a2, 20 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a920) {
            ctx->pc = 0x11A964u;
            goto label_11a964;
        }
    }
    ctx->pc = 0x11A928u;
    // 0x11a928: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11a928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11a92c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11a92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11a930: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11a930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11a934: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x11a934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x11a938: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x11A938u;
    {
        const bool branch_taken_0x11a938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A938u;
            // 0x11a93c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a938) {
            ctx->pc = 0x11ABA0u;
            goto label_11aba0;
        }
    }
    ctx->pc = 0x11A940u;
    // 0x11a940: 0x4c10008  bgez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A940u;
    {
        const bool branch_taken_0x11a940 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11A944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A940u;
            // 0x11a944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a940) {
            ctx->pc = 0x11A964u;
            goto label_11a964;
        }
    }
    ctx->pc = 0x11A948u;
    // 0x11a948: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A948u;
    SET_GPR_U32(ctx, 31, 0x11A950u);
    ctx->pc = 0x11A94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A948u;
            // 0x11a94c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A950u; }
        if (ctx->pc != 0x11A950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A950u; }
        if (ctx->pc != 0x11A950u) { return; }
    }
    ctx->pc = 0x11A950u;
label_11a950:
    // 0x11a950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a954: 0xc0a20a8  jal         func_2882A0
    ctx->pc = 0x11A954u;
    SET_GPR_U32(ctx, 31, 0x11A95Cu);
    ctx->pc = 0x11A958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A954u;
            // 0x11a958: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2882A0u;
    if (runtime->hasFunction(0x2882A0u)) {
        auto targetFn = runtime->lookupFunction(0x2882A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A95Cu; }
        if (ctx->pc != 0x11A95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2882a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A95Cu; }
        if (ctx->pc != 0x11A95Cu) { return; }
    }
    ctx->pc = 0x11A95Cu;
label_11a95c:
    // 0x11a95c: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x11A95Cu;
    {
        const bool branch_taken_0x11a95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A95Cu;
            // 0x11a960: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a95c) {
            ctx->pc = 0x11ABA4u;
            goto label_11aba4;
        }
    }
    ctx->pc = 0x11A964u;
label_11a964:
    // 0x11a964: 0x14a00020  bnez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x11A964u;
    {
        const bool branch_taken_0x11a964 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A964u;
            // 0x11a968: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a964) {
            ctx->pc = 0x11A9E8u;
            goto label_11a9e8;
        }
    }
    ctx->pc = 0x11A96Cu;
    // 0x11a96c: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x11A96Cu;
    {
        const bool branch_taken_0x11a96c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A96Cu;
            // 0x11a970: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a96c) {
            ctx->pc = 0x11A998u;
            goto label_11a998;
        }
    }
    ctx->pc = 0x11A974u;
    // 0x11a974: 0x0  nop
    ctx->pc = 0x11a974u;
    // NOP
label_11a978:
    // 0x11a978: 0x712c2  srl         $v0, $a3, 11
    ctx->pc = 0x11a978u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x11a97c: 0x24a5ffeb  addiu       $a1, $a1, -0x15
    ctx->pc = 0x11a97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967275));
    // 0x11a980: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x11a980u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x11a984: 0x73d40  sll         $a3, $a3, 21
    ctx->pc = 0x11a984u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 21));
    // 0x11a988: 0x0  nop
    ctx->pc = 0x11a988u;
    // NOP
    // 0x11a98c: 0x10c0fffa  beqz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A98Cu;
    {
        const bool branch_taken_0x11a98c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a98c) {
            ctx->pc = 0x11A978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a978;
        }
    }
    ctx->pc = 0x11A994u;
    // 0x11a994: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11a994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_11a998:
    // 0x11a998: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11a998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11a99c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11A99Cu;
    {
        const bool branch_taken_0x11a99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A99Cu;
            // 0x11a9a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a99c) {
            ctx->pc = 0x11A9CCu;
            goto label_11a9cc;
        }
    }
    ctx->pc = 0x11A9A4u;
    // 0x11a9a4: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x11a9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_11a9a8:
    // 0x11a9a8: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x11a9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x11a9ac: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x11a9b0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11a9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11a9b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11a9b8: 0x0  nop
    ctx->pc = 0x11a9b8u;
    // NOP
    // 0x11a9bc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A9BCu;
    {
        const bool branch_taken_0x11a9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11a9bc) {
            ctx->pc = 0x11A9A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11a9a8;
        }
    }
    ctx->pc = 0x11A9C4u;
    // 0x11a9c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11A9C4u;
    {
        const bool branch_taken_0x11a9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9C4u;
            // 0x11a9c8: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9c4) {
            ctx->pc = 0x11A9D4u;
            goto label_11a9d4;
        }
    }
    ctx->pc = 0x11A9CCu;
label_11a9cc:
    // 0x11a9cc: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x11a9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11a9d0: 0x41023  negu        $v0, $a0
    ctx->pc = 0x11a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_11a9d4:
    // 0x11a9d4: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x11a9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11a9d8: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x11a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x11a9dc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x11a9dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x11a9e0: 0x873804  sllv        $a3, $a3, $a0
    ctx->pc = 0x11a9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x11a9e4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x11a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_11a9e8:
    // 0x11a9e8: 0x24a5fc01  addiu       $a1, $a1, -0x3FF
    ctx->pc = 0x11a9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966273));
    // 0x11a9ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11a9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11a9f0: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x11a9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x11a9f4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11a9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11a9f8: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x11a9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x11a9fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A9FCu;
    {
        const bool branch_taken_0x11a9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A9FCu;
            // 0x11aa00: 0x443025  or          $a2, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9fc) {
            ctx->pc = 0x11AA18u;
            goto label_11aa18;
        }
    }
    ctx->pc = 0x11AA04u;
    // 0x11aa04: 0xf31024  and         $v0, $a3, $s3
    ctx->pc = 0x11aa04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x11aa08: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x11aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x11aa0c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x11aa0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x11aa10: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x11aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11aa14: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x11aa14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_11aa18:
    // 0x11aa18: 0xf31024  and         $v0, $a3, $s3
    ctx->pc = 0x11aa18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x11aa1c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x11aa1cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x11aa20: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x11aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x11aa24: 0x5ad00  sll         $s5, $a1, 20
    ctx->pc = 0x11aa24u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 5), 20));
    // 0x11aa28: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x11aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11aa2c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x11aa2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x11aa30: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x11aa30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11aa34: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x11aa34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x11aa38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11aa3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11aa40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa44: 0x3c090020  lui         $t1, 0x20
    ctx->pc = 0x11aa44u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32 << 16));
label_11aa48:
    // 0x11aa48: 0x1492021  addu        $a0, $t2, $t1
    ctx->pc = 0x11aa48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x11aa4c: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x11aa4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11aa50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11AA50u;
    {
        const bool branch_taken_0x11aa50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA50u;
            // 0x11aa54: 0xf31024  and         $v0, $a3, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa50) {
            ctx->pc = 0x11AA64u;
            goto label_11aa64;
        }
    }
    ctx->pc = 0x11AA58u;
    // 0x11aa58: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x11aa58u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x11aa5c: 0x895021  addu        $t2, $a0, $t1
    ctx->pc = 0x11aa5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x11aa60: 0x2499021  addu        $s2, $s2, $t1
    ctx->pc = 0x11aa60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_11aa64:
    // 0x11aa64: 0x94842  srl         $t1, $t1, 1
    ctx->pc = 0x11aa64u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x11aa68: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x11aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x11aa6c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x11aa6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x11aa70: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x11aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11aa74: 0x1520fff4  bnez        $t1, . + 4 + (-0xC << 2)
    ctx->pc = 0x11AA74u;
    {
        const bool branch_taken_0x11aa74 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA74u;
            // 0x11aa78: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa74) {
            ctx->pc = 0x11AA48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11aa48;
        }
    }
    ctx->pc = 0x11AA7Cu;
    // 0x11aa7c: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x11aa7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
label_11aa80:
    // 0x11aa80: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x11aa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa84: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x11aa84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11aa88: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11AA88u;
    {
        const bool branch_taken_0x11aa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA88u;
            // 0x11aa8c: 0x1692821  addu        $a1, $t3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa88) {
            ctx->pc = 0x11AAACu;
            goto label_11aaac;
        }
    }
    ctx->pc = 0x11AA90u;
    // 0x11aa90: 0x14860012  bne         $a0, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x11AA90u;
    {
        const bool branch_taken_0x11aa90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x11AA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA90u;
            // 0x11aa94: 0xf31024  and         $v0, $a3, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa90) {
            ctx->pc = 0x11AADCu;
            goto label_11aadc;
        }
    }
    ctx->pc = 0x11AA98u;
    // 0x11aa98: 0xe5402b  sltu        $t0, $a3, $a1
    ctx->pc = 0x11aa98u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x11aa9c: 0x55000010  bnel        $t0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x11AA9Cu;
    {
        const bool branch_taken_0x11aa9c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x11aa9c) {
            ctx->pc = 0x11AAA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11AA9Cu;
            // 0x11aaa0: 0x94842  srl         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11AAE0u;
            goto label_11aae0;
        }
    }
    ctx->pc = 0x11AAA4u;
    // 0x11aaa4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11AAA4u;
    {
        const bool branch_taken_0x11aaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AAA4u;
            // 0x11aaa8: 0xa95821  addu        $t3, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aaa4) {
            ctx->pc = 0x11AAB4u;
            goto label_11aab4;
        }
    }
    ctx->pc = 0x11AAACu;
label_11aaac:
    // 0x11aaac: 0xe5402b  sltu        $t0, $a3, $a1
    ctx->pc = 0x11aaacu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x11aab0: 0xa95821  addu        $t3, $a1, $t1
    ctx->pc = 0x11aab0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_11aab4:
    // 0x11aab4: 0xb31024  and         $v0, $a1, $s3
    ctx->pc = 0x11aab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 19));
    // 0x11aab8: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x11AAB8u;
    {
        const bool branch_taken_0x11aab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x11AABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AAB8u;
            // 0x11aabc: 0xc43023  subu        $a2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aab8) {
            ctx->pc = 0x11AACCu;
            goto label_11aacc;
        }
    }
    ctx->pc = 0x11AAC0u;
    // 0x11aac0: 0x1731824  and         $v1, $t3, $s3
    ctx->pc = 0x11aac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 19));
    // 0x11aac4: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x11aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x11aac8: 0x43500a  movz        $t2, $v0, $v1
    ctx->pc = 0x11aac8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2));
label_11aacc:
    // 0x11aacc: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x11aaccu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x11aad0: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x11aad0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x11aad4: 0x2298821  addu        $s1, $s1, $t1
    ctx->pc = 0x11aad4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x11aad8: 0xf31024  and         $v0, $a3, $s3
    ctx->pc = 0x11aad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
label_11aadc:
    // 0x11aadc: 0x94842  srl         $t1, $t1, 1
    ctx->pc = 0x11aadcu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_11aae0:
    // 0x11aae0: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x11aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x11aae4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x11aae4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x11aae8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x11aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11aaec: 0x1520ffe4  bnez        $t1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x11AAECu;
    {
        const bool branch_taken_0x11aaec = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AAECu;
            // 0x11aaf0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aaec) {
            ctx->pc = 0x11AA80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11aa80;
        }
    }
    ctx->pc = 0x11AAF4u;
    // 0x11aaf4: 0xc71025  or          $v0, $a2, $a3
    ctx->pc = 0x11aaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x11aaf8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11AAF8u;
    {
        const bool branch_taken_0x11aaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AAF8u;
            // 0x11aafc: 0x113842  srl         $a3, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aaf8) {
            ctx->pc = 0x11AB6Cu;
            goto label_11ab6c;
        }
    }
    ctx->pc = 0x11AB00u;
    // 0x11ab00: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x11ab00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x11ab04: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x11ab04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x11ab08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ab08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab0c: 0xc0a2148  jal         func_288520
    ctx->pc = 0x11AB0Cu;
    SET_GPR_U32(ctx, 31, 0x11AB14u);
    ctx->pc = 0x11AB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB0Cu;
            // 0x11ab10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB14u; }
        if (ctx->pc != 0x11AB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB14u; }
        if (ctx->pc != 0x11AB14u) { return; }
    }
    ctx->pc = 0x11AB14u;
label_11ab14:
    // 0x11ab14: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11AB14u;
    {
        const bool branch_taken_0x11ab14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11AB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB14u;
            // 0x11ab18: 0x113842  srl         $a3, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab14) {
            ctx->pc = 0x11AB6Cu;
            goto label_11ab6c;
        }
    }
    ctx->pc = 0x11AB1Cu;
    // 0x11ab1c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11ab20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11ab20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11ab24: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11AB24u;
    {
        const bool branch_taken_0x11ab24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11AB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB24u;
            // 0x11ab28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab24) {
            ctx->pc = 0x11AB38u;
            goto label_11ab38;
        }
    }
    ctx->pc = 0x11AB2Cu;
    // 0x11ab2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11ab2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11AB30u;
    {
        const bool branch_taken_0x11ab30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB30u;
            // 0x11ab34: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab30) {
            ctx->pc = 0x11AB68u;
            goto label_11ab68;
        }
    }
    ctx->pc = 0x11AB38u;
label_11ab38:
    // 0x11ab38: 0xc0a2148  jal         func_288520
    ctx->pc = 0x11AB38u;
    SET_GPR_U32(ctx, 31, 0x11AB40u);
    ctx->pc = 0x11AB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB38u;
            // 0x11ab3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB40u; }
        if (ctx->pc != 0x11AB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AB40u; }
        if (ctx->pc != 0x11AB40u) { return; }
    }
    ctx->pc = 0x11AB40u;
label_11ab40:
    // 0x11ab40: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11AB40u;
    {
        const bool branch_taken_0x11ab40 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11AB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB40u;
            // 0x11ab44: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab40) {
            ctx->pc = 0x11AB60u;
            goto label_11ab60;
        }
    }
    ctx->pc = 0x11AB48u;
    // 0x11ab48: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11ab4c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x11ab4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x11ab50: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x11ab50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x11ab54: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x11ab54u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3));
    // 0x11ab58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11AB58u;
    {
        const bool branch_taken_0x11ab58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AB58u;
            // 0x11ab5c: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab58) {
            ctx->pc = 0x11AB68u;
            goto label_11ab68;
        }
    }
    ctx->pc = 0x11AB60u;
label_11ab60:
    // 0x11ab60: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x11ab60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x11ab64: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x11ab64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_11ab68:
    // 0x11ab68: 0x113842  srl         $a3, $s1, 1
    ctx->pc = 0x11ab68u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_11ab6c:
    // 0x11ab6c: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x11ab6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x11ab70: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x11ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x11ab74: 0x32450001  andi        $a1, $s2, 0x1
    ctx->pc = 0x11ab74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x11ab78: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x11ab78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ab7c: 0xf32025  or          $a0, $a3, $s3
    ctx->pc = 0x11ab7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x11ab80: 0xd53021  addu        $a2, $a2, $s5
    ctx->pc = 0x11ab80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x11ab84: 0x85380b  movn        $a3, $a0, $a1
    ctx->pc = 0x11ab84u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4));
    // 0x11ab88: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x11ab88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11ab8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11ab8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11ab90: 0x6a03c  dsll32      $s4, $a2, 0
    ctx->pc = 0x11ab90u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11ab94: 0x2828025  or          $s0, $s4, $v0
    ctx->pc = 0x11ab94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x11ab98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11ab98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab9c: 0x0  nop
    ctx->pc = 0x11ab9cu;
    // NOP
label_11aba0:
    // 0x11aba0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x11aba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_11aba4:
    // 0x11aba4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11aba4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11aba8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11aba8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11abac: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11abacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11abb0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11abb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11abb4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11abb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11abb8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11abb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11abbc: 0x3e00008  jr          $ra
    ctx->pc = 0x11ABBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ABC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ABBCu;
            // 0x11abc0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11ABC4u;
}

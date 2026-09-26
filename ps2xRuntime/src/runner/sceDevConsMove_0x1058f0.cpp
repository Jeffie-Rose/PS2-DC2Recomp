#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevConsMove
// Address: 0x1058f0 - 0x105a58
void sceDevConsMove_0x1058f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsMove_0x1058f0");
#endif

    switch (ctx->pc) {
        case 0x105960u: goto label_105960;
        case 0x105978u: goto label_105978;
        case 0x105990u: goto label_105990;
        case 0x1059a8u: goto label_1059a8;
        case 0x1059f0u: goto label_1059f0;
        case 0x105a08u: goto label_105a08;
        case 0x105a20u: goto label_105a20;
        default: break;
    }

    ctx->pc = 0x1058f0u;

    // 0x1058f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1058f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1058f4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1058f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1058f8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1058f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1058fc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1058fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105900: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x105900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x105904: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x105904u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105908: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x105908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x10590c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x10590cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105910: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x105910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x105914: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x105914u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105918: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x105918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x10591c: 0x3d7102a  slt         $v0, $fp, $s7
    ctx->pc = 0x10591cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x105920: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x105920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x105924: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x105924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x105928: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x105928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10592c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10592cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x105930: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x105930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x105934: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x105934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x105938: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105938u;
    {
        const bool branch_taken_0x105938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10593Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105938u;
            // 0x10593c: 0xafaa0008  sw          $t2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105938) {
            ctx->pc = 0x105954u;
            goto label_105954;
        }
    }
    ctx->pc = 0x105940u;
    // 0x105940: 0x17d70026  bne         $fp, $s7, . + 4 + (0x26 << 2)
    ctx->pc = 0x105940u;
    {
        const bool branch_taken_0x105940 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 23));
        ctx->pc = 0x105944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105940u;
            // 0x105944: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105940) {
            ctx->pc = 0x1059DCu;
            goto label_1059dc;
        }
    }
    ctx->pc = 0x105948u;
    // 0x105948: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x105948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x10594c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x10594Cu;
    {
        const bool branch_taken_0x10594c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10594Cu;
            // 0x105950: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10594c) {
            ctx->pc = 0x1059DCu;
            goto label_1059dc;
        }
    }
    ctx->pc = 0x105954u;
label_105954:
    // 0x105954: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x105954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105958: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x105958u;
    {
        const bool branch_taken_0x105958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10595Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105958u;
            // 0x10595c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105958) {
            ctx->pc = 0x105A28u;
            goto label_105a28;
        }
    }
    ctx->pc = 0x105960u;
label_105960:
    // 0x105960: 0x12c00016  beqz        $s6, . + 4 + (0x16 << 2)
    ctx->pc = 0x105960u;
    {
        const bool branch_taken_0x105960 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x105964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105960u;
            // 0x105964: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105960) {
            ctx->pc = 0x1059BCu;
            goto label_1059bc;
        }
    }
    ctx->pc = 0x105968u;
    // 0x105968: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x105968u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10596c: 0x3c39021  addu        $s2, $fp, $v1
    ctx->pc = 0x10596cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x105970: 0x2e39821  addu        $s3, $s7, $v1
    ctx->pc = 0x105970u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x105974: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x105974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_105978:
    // 0x105978: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x105978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10597c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10597cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105980: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x105980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105984: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x105984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x105988: 0xc041854  jal         func_106150
    ctx->pc = 0x105988u;
    SET_GPR_U32(ctx, 31, 0x105990u);
    ctx->pc = 0x10598Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105988u;
            // 0x10598c: 0x518021  addu        $s0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106150u;
    if (runtime->hasFunction(0x106150u)) {
        auto targetFn = runtime->lookupFunction(0x106150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105990u; }
        if (ctx->pc != 0x105990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsGetc_0x106150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105990u; }
        if (ctx->pc != 0x105990u) { return; }
    }
    ctx->pc = 0x105990u;
label_105990:
    // 0x105990: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x105990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x105994: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x105994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105998: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x105998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10599c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10599cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1059a0: 0xc041840  jal         func_106100
    ctx->pc = 0x1059A0u;
    SET_GPR_U32(ctx, 31, 0x1059A8u);
    ctx->pc = 0x1059A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1059A0u;
            // 0x1059a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106100u;
    if (runtime->hasFunction(0x106100u)) {
        auto targetFn = runtime->lookupFunction(0x106100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1059A8u; }
        if (ctx->pc != 0x1059A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsPutc_0x106100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1059A8u; }
        if (ctx->pc != 0x1059A8u) { return; }
    }
    ctx->pc = 0x1059A8u;
label_1059a8:
    // 0x1059a8: 0x236102b  sltu        $v0, $s1, $s6
    ctx->pc = 0x1059a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1059ac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1059ACu;
    {
        const bool branch_taken_0x1059ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1059B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1059ACu;
            // 0x1059b0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059ac) {
            ctx->pc = 0x105978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105978;
        }
    }
    ctx->pc = 0x1059B4u;
    // 0x1059b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1059B4u;
    {
        const bool branch_taken_0x1059b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1059B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1059B4u;
            // 0x1059b8: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059b4) {
            ctx->pc = 0x1059C4u;
            goto label_1059c4;
        }
    }
    ctx->pc = 0x1059BCu;
label_1059bc:
    // 0x1059bc: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x1059bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1059c0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1059c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1059c4:
    // 0x1059c4: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x1059c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1059c8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1059c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1059cc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1059CCu;
    {
        const bool branch_taken_0x1059cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1059D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1059CCu;
            // 0x1059d0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059cc) {
            ctx->pc = 0x105960u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105960;
        }
    }
    ctx->pc = 0x1059D4u;
    // 0x1059d4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1059D4u;
    {
        const bool branch_taken_0x1059d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1059D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1059D4u;
            // 0x1059d8: 0xdfbe0090  ld          $fp, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1059d4) {
            ctx->pc = 0x105A30u;
            goto label_105a30;
        }
    }
    ctx->pc = 0x1059DCu;
label_1059dc:
    // 0x1059dc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1059dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1059e0: 0x26d1ffff  addiu       $s1, $s6, -0x1
    ctx->pc = 0x1059e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1059e4: 0x2e39821  addu        $s3, $s7, $v1
    ctx->pc = 0x1059e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1059e8: 0x3c39021  addu        $s2, $fp, $v1
    ctx->pc = 0x1059e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x1059ec: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1059ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1059f0:
    // 0x1059f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1059f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1059f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1059f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1059f8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1059f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1059fc: 0x712821  addu        $a1, $v1, $s1
    ctx->pc = 0x1059fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x105a00: 0xc041854  jal         func_106150
    ctx->pc = 0x105A00u;
    SET_GPR_U32(ctx, 31, 0x105A08u);
    ctx->pc = 0x105A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105A00u;
            // 0x105a04: 0x518021  addu        $s0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106150u;
    if (runtime->hasFunction(0x106150u)) {
        auto targetFn = runtime->lookupFunction(0x106150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105A08u; }
        if (ctx->pc != 0x105A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsGetc_0x106150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105A08u; }
        if (ctx->pc != 0x105A08u) { return; }
    }
    ctx->pc = 0x105A08u;
label_105a08:
    // 0x105a08: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x105a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x105a0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x105a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a10: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x105a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x105a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105a18: 0xc041840  jal         func_106100
    ctx->pc = 0x105A18u;
    SET_GPR_U32(ctx, 31, 0x105A20u);
    ctx->pc = 0x105A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105A18u;
            // 0x105a1c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106100u;
    if (runtime->hasFunction(0x106100u)) {
        auto targetFn = runtime->lookupFunction(0x106100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105A20u; }
        if (ctx->pc != 0x105A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDevConsPutc_0x106100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105A20u; }
        if (ctx->pc != 0x105A20u) { return; }
    }
    ctx->pc = 0x105A20u;
label_105a20:
    // 0x105a20: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x105A20u;
    {
        const bool branch_taken_0x105a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105A20u;
            // 0x105a24: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a20) {
            ctx->pc = 0x1059F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1059f0;
        }
    }
    ctx->pc = 0x105A28u;
label_105a28:
    // 0x105a28: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x105a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x105a2c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x105a2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_105a30:
    // 0x105a30: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x105a30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x105a34: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x105a34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x105a38: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x105a38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x105a3c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x105a3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105a40: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x105a40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105a44: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x105a44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105a48: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x105a48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105a4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x105a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105a50: 0x3e00008  jr          $ra
    ctx->pc = 0x105A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105A50u;
            // 0x105a54: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x105A58u;
}

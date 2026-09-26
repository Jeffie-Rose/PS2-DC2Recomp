#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CAMERA_POS__FP12RS_STACKDATAi
// Address: 0x26e330 - 0x26e460
void ps2__SET_CAMERA_POS__FP12RS_STACKDATAi_0x26e330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CAMERA_POS__FP12RS_STACKDATAi_0x26e330");
#endif

    switch (ctx->pc) {
        case 0x26e350u: goto label_26e350;
        case 0x26e388u: goto label_26e388;
        case 0x26e3acu: goto label_26e3ac;
        case 0x26e418u: goto label_26e418;
        case 0x26e428u: goto label_26e428;
        case 0x26e444u: goto label_26e444;
        default: break;
    }

    ctx->pc = 0x26e330u;

    // 0x26e330: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26e330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26e334: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26e334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26e338: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26e338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26e33c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26e33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26e340: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26e340u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e344: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26e344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e348: 0xc09b8c8  jal         func_26E320
    ctx->pc = 0x26E348u;
    SET_GPR_U32(ctx, 31, 0x26E350u);
    ctx->pc = 0x26E34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E348u;
            // 0x26e34c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26E320u;
    if (runtime->hasFunction(0x26E320u)) {
        auto targetFn = runtime->lookupFunction(0x26E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E350u; }
        if (ctx->pc != 0x26E350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__Fv_0x26e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E350u; }
        if (ctx->pc != 0x26E350u) { return; }
    }
    ctx->pc = 0x26E350u;
label_26e350:
    // 0x26e350: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E350u;
    {
        const bool branch_taken_0x26e350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E350u;
            // 0x26e354: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e350) {
            ctx->pc = 0x26E360u;
            goto label_26e360;
        }
    }
    ctx->pc = 0x26E358u;
    // 0x26e358: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x26E358u;
    {
        const bool branch_taken_0x26e358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E358u;
            // 0x26e35c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e358) {
            ctx->pc = 0x26E448u;
            goto label_26e448;
        }
    }
    ctx->pc = 0x26E360u;
label_26e360:
    // 0x26e360: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26e360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26e364: 0x1222002e  beq         $s1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x26E364u;
    {
        const bool branch_taken_0x26e364 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E364u;
            // 0x26e368: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e364) {
            ctx->pc = 0x26E420u;
            goto label_26e420;
        }
    }
    ctx->pc = 0x26E36Cu;
    // 0x26e36c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e370: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E370u;
    {
        const bool branch_taken_0x26e370 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E370u;
            // 0x26e374: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e370) {
            ctx->pc = 0x26E380u;
            goto label_26e380;
        }
    }
    ctx->pc = 0x26E378u;
    // 0x26e378: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x26E378u;
    {
        const bool branch_taken_0x26e378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E378u;
            // 0x26e37c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e378) {
            ctx->pc = 0x26E430u;
            goto label_26e430;
        }
    }
    ctx->pc = 0x26E380u;
label_26e380:
    // 0x26e380: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26E380u;
    SET_GPR_U32(ctx, 31, 0x26E388u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E388u; }
        if (ctx->pc != 0x26E388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E388u; }
        if (ctx->pc != 0x26E388u) { return; }
    }
    ctx->pc = 0x26E388u;
label_26e388:
    // 0x26e388: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x26e388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x26e38c: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x26e38cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x26e390: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E390u;
    {
        const bool branch_taken_0x26e390 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E390u;
            // 0x26e394: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e390) {
            ctx->pc = 0x26E3A0u;
            goto label_26e3a0;
        }
    }
    ctx->pc = 0x26E398u;
    // 0x26e398: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x26E398u;
    {
        const bool branch_taken_0x26e398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E398u;
            // 0x26e39c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e398) {
            ctx->pc = 0x26E400u;
            goto label_26e400;
        }
    }
    ctx->pc = 0x26E3A0u;
label_26e3a0:
    // 0x26e3a0: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x26e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x26e3a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26E3A4u;
    {
        const bool branch_taken_0x26e3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E3A4u;
            // 0x26e3a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e3a4) {
            ctx->pc = 0x26E3D8u;
            goto label_26e3d8;
        }
    }
    ctx->pc = 0x26E3ACu;
label_26e3ac:
    // 0x26e3ac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26e3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26e3b0: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x26E3B0u;
    {
        const bool branch_taken_0x26e3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26e3b0) {
            ctx->pc = 0x26E3E4u;
            goto label_26e3e4;
        }
    }
    ctx->pc = 0x26E3B8u;
    // 0x26e3b8: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x26e3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x26e3bc: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E3BCu;
    {
        const bool branch_taken_0x26e3bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e3bc) {
            ctx->pc = 0x26E3CCu;
            goto label_26e3cc;
        }
    }
    ctx->pc = 0x26E3C4u;
    // 0x26e3c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26E3C4u;
    {
        const bool branch_taken_0x26e3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E3C4u;
            // 0x26e3c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e3c4) {
            ctx->pc = 0x26E3D8u;
            goto label_26e3d8;
        }
    }
    ctx->pc = 0x26E3CCu;
label_26e3cc:
    // 0x26e3cc: 0x0  nop
    ctx->pc = 0x26e3ccu;
    // NOP
    // 0x26e3d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26E3D0u;
    {
        const bool branch_taken_0x26e3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E3D0u;
            // 0x26e3d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e3d0) {
            ctx->pc = 0x26E400u;
            goto label_26e400;
        }
    }
    ctx->pc = 0x26E3D8u;
label_26e3d8:
    // 0x26e3d8: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x26e3d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26e3dc: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x26E3DCu;
    {
        const bool branch_taken_0x26e3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e3dc) {
            ctx->pc = 0x26E3ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26e3ac;
        }
    }
    ctx->pc = 0x26E3E4u;
label_26e3e4:
    // 0x26e3e4: 0x0  nop
    ctx->pc = 0x26e3e4u;
    // NOP
    // 0x26e3e8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E3E8u;
    {
        const bool branch_taken_0x26e3e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E3E8u;
            // 0x26e3ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e3e8) {
            ctx->pc = 0x26E3F8u;
            goto label_26e3f8;
        }
    }
    ctx->pc = 0x26E3F0u;
    // 0x26e3f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26E3F0u;
    {
        const bool branch_taken_0x26e3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e3f0) {
            ctx->pc = 0x26E400u;
            goto label_26e400;
        }
    }
    ctx->pc = 0x26E3F8u;
label_26e3f8:
    // 0x26e3f8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x26e3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x26e3fc: 0x0  nop
    ctx->pc = 0x26e3fcu;
    // NOP
label_26e400:
    // 0x26e400: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E400u;
    {
        const bool branch_taken_0x26e400 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E400u;
            // 0x26e404: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e400) {
            ctx->pc = 0x26E410u;
            goto label_26e410;
        }
    }
    ctx->pc = 0x26E408u;
    // 0x26e408: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26E408u;
    {
        const bool branch_taken_0x26e408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E408u;
            // 0x26e40c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e408) {
            ctx->pc = 0x26E448u;
            goto label_26e448;
        }
    }
    ctx->pc = 0x26E410u;
label_26e410:
    // 0x26e410: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x26E410u;
    SET_GPR_U32(ctx, 31, 0x26E418u);
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E418u; }
        if (ctx->pc != 0x26E418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E418u; }
        if (ctx->pc != 0x26E418u) { return; }
    }
    ctx->pc = 0x26E418u;
label_26e418:
    // 0x26e418: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26E418u;
    {
        const bool branch_taken_0x26e418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E418u;
            // 0x26e41c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e418) {
            ctx->pc = 0x26E43Cu;
            goto label_26e43c;
        }
    }
    ctx->pc = 0x26E420u;
label_26e420:
    // 0x26e420: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x26E420u;
    SET_GPR_U32(ctx, 31, 0x26E428u);
    ctx->pc = 0x26E424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E420u;
            // 0x26e424: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E428u; }
        if (ctx->pc != 0x26E428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E428u; }
        if (ctx->pc != 0x26E428u) { return; }
    }
    ctx->pc = 0x26E428u;
label_26e428:
    // 0x26e428: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26E428u;
    {
        const bool branch_taken_0x26e428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e428) {
            ctx->pc = 0x26E438u;
            goto label_26e438;
        }
    }
    ctx->pc = 0x26E430u;
label_26e430:
    // 0x26e430: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26E430u;
    {
        const bool branch_taken_0x26e430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E430u;
            // 0x26e434: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e430) {
            ctx->pc = 0x26E44Cu;
            goto label_26e44c;
        }
    }
    ctx->pc = 0x26E438u;
label_26e438:
    // 0x26e438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26e43c:
    // 0x26e43c: 0xc04c504  jal         func_131410
    ctx->pc = 0x26E43Cu;
    SET_GPR_U32(ctx, 31, 0x26E444u);
    ctx->pc = 0x26E440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E43Cu;
            // 0x26e440: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E444u; }
        if (ctx->pc != 0x26E444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E444u; }
        if (ctx->pc != 0x26E444u) { return; }
    }
    ctx->pc = 0x26E444u;
label_26e444:
    // 0x26e444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26e448:
    // 0x26e448: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26e448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26e44c:
    // 0x26e44c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26e44cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26e450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26e454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e458: 0x3e00008  jr          $ra
    ctx->pc = 0x26E458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E458u;
            // 0x26e45c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26E460u;
}

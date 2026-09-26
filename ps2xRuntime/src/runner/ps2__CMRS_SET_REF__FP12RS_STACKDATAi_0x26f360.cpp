#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CMRS_SET_REF__FP12RS_STACKDATAi
// Address: 0x26f360 - 0x26f45c
void ps2__CMRS_SET_REF__FP12RS_STACKDATAi_0x26f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CMRS_SET_REF__FP12RS_STACKDATAi_0x26f360");
#endif

    switch (ctx->pc) {
        case 0x26f38cu: goto label_26f38c;
        case 0x26f3b0u: goto label_26f3b0;
        case 0x26f418u: goto label_26f418;
        case 0x26f42cu: goto label_26f42c;
        case 0x26f44cu: goto label_26f44c;
        default: break;
    }

    ctx->pc = 0x26f360u;

    // 0x26f360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26f360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26f364: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26f364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26f368: 0x10a2002d  beq         $a1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x26F368u;
    {
        const bool branch_taken_0x26f368 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F368u;
            // 0x26f36c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f368) {
            ctx->pc = 0x26F420u;
            goto label_26f420;
        }
    }
    ctx->pc = 0x26F370u;
    // 0x26f370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f374: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F374u;
    {
        const bool branch_taken_0x26f374 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f374) {
            ctx->pc = 0x26F384u;
            goto label_26f384;
        }
    }
    ctx->pc = 0x26F37Cu;
    // 0x26f37c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x26F37Cu;
    {
        const bool branch_taken_0x26f37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F37Cu;
            // 0x26f380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f37c) {
            ctx->pc = 0x26F434u;
            goto label_26f434;
        }
    }
    ctx->pc = 0x26F384u;
label_26f384:
    // 0x26f384: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26F384u;
    SET_GPR_U32(ctx, 31, 0x26F38Cu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F38Cu; }
        if (ctx->pc != 0x26F38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F38Cu; }
        if (ctx->pc != 0x26F38Cu) { return; }
    }
    ctx->pc = 0x26F38Cu;
label_26f38c:
    // 0x26f38c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x26f38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x26f390: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x26f390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
    // 0x26f394: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F394u;
    {
        const bool branch_taken_0x26f394 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F394u;
            // 0x26f398: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f394) {
            ctx->pc = 0x26F3A4u;
            goto label_26f3a4;
        }
    }
    ctx->pc = 0x26F39Cu;
    // 0x26f39c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26F39Cu;
    {
        const bool branch_taken_0x26f39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F39Cu;
            // 0x26f3a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f39c) {
            ctx->pc = 0x26F400u;
            goto label_26f400;
        }
    }
    ctx->pc = 0x26F3A4u;
label_26f3a4:
    // 0x26f3a4: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x26f3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
    // 0x26f3a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26F3A8u;
    {
        const bool branch_taken_0x26f3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F3A8u;
            // 0x26f3ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f3a8) {
            ctx->pc = 0x26F3D8u;
            goto label_26f3d8;
        }
    }
    ctx->pc = 0x26F3B0u;
label_26f3b0:
    // 0x26f3b0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x26f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26f3b4: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x26F3B4u;
    {
        const bool branch_taken_0x26f3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x26f3b4) {
            ctx->pc = 0x26F3E4u;
            goto label_26f3e4;
        }
    }
    ctx->pc = 0x26F3BCu;
    // 0x26f3bc: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x26f3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x26f3c0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F3C0u;
    {
        const bool branch_taken_0x26f3c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f3c0) {
            ctx->pc = 0x26F3D0u;
            goto label_26f3d0;
        }
    }
    ctx->pc = 0x26F3C8u;
    // 0x26f3c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F3C8u;
    {
        const bool branch_taken_0x26f3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F3C8u;
            // 0x26f3cc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f3c8) {
            ctx->pc = 0x26F3D8u;
            goto label_26f3d8;
        }
    }
    ctx->pc = 0x26F3D0u;
label_26f3d0:
    // 0x26f3d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26F3D0u;
    {
        const bool branch_taken_0x26f3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F3D0u;
            // 0x26f3d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f3d0) {
            ctx->pc = 0x26F400u;
            goto label_26f400;
        }
    }
    ctx->pc = 0x26F3D8u;
label_26f3d8:
    // 0x26f3d8: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x26f3d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26f3dc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x26F3DCu;
    {
        const bool branch_taken_0x26f3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f3dc) {
            ctx->pc = 0x26F3B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26f3b0;
        }
    }
    ctx->pc = 0x26F3E4u;
label_26f3e4:
    // 0x26f3e4: 0x0  nop
    ctx->pc = 0x26f3e4u;
    // NOP
    // 0x26f3e8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F3E8u;
    {
        const bool branch_taken_0x26f3e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F3E8u;
            // 0x26f3ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f3e8) {
            ctx->pc = 0x26F3F8u;
            goto label_26f3f8;
        }
    }
    ctx->pc = 0x26F3F0u;
    // 0x26f3f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F3F0u;
    {
        const bool branch_taken_0x26f3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f3f0) {
            ctx->pc = 0x26F400u;
            goto label_26f400;
        }
    }
    ctx->pc = 0x26F3F8u;
label_26f3f8:
    // 0x26f3f8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x26f3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x26f3fc: 0x0  nop
    ctx->pc = 0x26f3fcu;
    // NOP
label_26f400:
    // 0x26f400: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F400u;
    {
        const bool branch_taken_0x26f400 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F400u;
            // 0x26f404: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f400) {
            ctx->pc = 0x26F410u;
            goto label_26f410;
        }
    }
    ctx->pc = 0x26F408u;
    // 0x26f408: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26F408u;
    {
        const bool branch_taken_0x26f408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F408u;
            // 0x26f40c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f408) {
            ctx->pc = 0x26F450u;
            goto label_26f450;
        }
    }
    ctx->pc = 0x26F410u;
label_26f410:
    // 0x26f410: 0xc097fa8  jal         func_25FEA0
    ctx->pc = 0x26F410u;
    SET_GPR_U32(ctx, 31, 0x26F418u);
    ctx->pc = 0x25FEA0u;
    if (runtime->hasFunction(0x25FEA0u)) {
        auto targetFn = runtime->lookupFunction(0x25FEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F418u; }
        if (ctx->pc != 0x26F418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgVector__FPfP8ARG_DATA_0x25fea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F418u; }
        if (ctx->pc != 0x26F418u) { return; }
    }
    ctx->pc = 0x26F418u;
label_26f418:
    // 0x26f418: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26F418u;
    {
        const bool branch_taken_0x26f418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f418) {
            ctx->pc = 0x26F43Cu;
            goto label_26f43c;
        }
    }
    ctx->pc = 0x26F420u;
label_26f420:
    // 0x26f420: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x26f420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f424: 0xc097e34  jal         func_25F8D0
    ctx->pc = 0x26F424u;
    SET_GPR_U32(ctx, 31, 0x26F42Cu);
    ctx->pc = 0x26F428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F424u;
            // 0x26f428: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F42Cu; }
        if (ctx->pc != 0x26F42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F42Cu; }
        if (ctx->pc != 0x26F42Cu) { return; }
    }
    ctx->pc = 0x26F42Cu;
label_26f42c:
    // 0x26f42c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26F42Cu;
    {
        const bool branch_taken_0x26f42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f42c) {
            ctx->pc = 0x26F43Cu;
            goto label_26f43c;
        }
    }
    ctx->pc = 0x26F434u;
label_26f434:
    // 0x26f434: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26F434u;
    {
        const bool branch_taken_0x26f434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F434u;
            // 0x26f438: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f434) {
            ctx->pc = 0x26F454u;
            goto label_26f454;
        }
    }
    ctx->pc = 0x26F43Cu;
label_26f43c:
    // 0x26f43c: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x26f43cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x26f440: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x26f440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26f444: 0xc096740  jal         func_259D00
    ctx->pc = 0x26F444u;
    SET_GPR_U32(ctx, 31, 0x26F44Cu);
    ctx->pc = 0x26F448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F444u;
            // 0x26f448: 0x2484f920  addiu       $a0, $a0, -0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259D00u;
    if (runtime->hasFunction(0x259D00u)) {
        auto targetFn = runtime->lookupFunction(0x259D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F44Cu; }
        if (ctx->pc != 0x26F44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__12CSceneCmrSeqFPf_0x259d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26F44Cu; }
        if (ctx->pc != 0x26F44Cu) { return; }
    }
    ctx->pc = 0x26F44Cu;
label_26f44c:
    // 0x26f44c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f450:
    // 0x26f450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26f450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26f454:
    // 0x26f454: 0x3e00008  jr          $ra
    ctx->pc = 0x26F454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F454u;
            // 0x26f458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26F45Cu;
}

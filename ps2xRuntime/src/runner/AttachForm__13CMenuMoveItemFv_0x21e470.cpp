#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AttachForm__13CMenuMoveItemFv
// Address: 0x21e470 - 0x21e500
void AttachForm__13CMenuMoveItemFv_0x21e470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AttachForm__13CMenuMoveItemFv_0x21e470");
#endif

    switch (ctx->pc) {
        case 0x21e490u: goto label_21e490;
        case 0x21e4a4u: goto label_21e4a4;
        case 0x21e4ccu: goto label_21e4cc;
        case 0x21e4f0u: goto label_21e4f0;
        default: break;
    }

    ctx->pc = 0x21e470u;

    // 0x21e470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21e470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21e474: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x21e474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x21e478: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21e478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21e47c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21e47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21e480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e484: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x21e484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x21e488: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x21E488u;
    SET_GPR_U32(ctx, 31, 0x21E490u);
    ctx->pc = 0x21E48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E488u;
            // 0x21e48c: 0x24a5a548  addiu       $a1, $a1, -0x5AB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E490u; }
        if (ctx->pc != 0x21E490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E490u; }
        if (ctx->pc != 0x21E490u) { return; }
    }
    ctx->pc = 0x21E490u;
label_21e490:
    // 0x21e490: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x21e490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x21e494: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x21e494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x21e498: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x21e498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x21e49c: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x21E49Cu;
    SET_GPR_U32(ctx, 31, 0x21E4A4u);
    ctx->pc = 0x21E4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E49Cu;
            // 0x21e4a0: 0x24a5a558  addiu       $a1, $a1, -0x5AA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E4A4u; }
        if (ctx->pc != 0x21E4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E4A4u; }
        if (ctx->pc != 0x21E4A4u) { return; }
    }
    ctx->pc = 0x21E4A4u;
label_21e4a4:
    // 0x21e4a4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x21e4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x21e4a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x21e4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21e4ac: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21E4ACu;
    {
        const bool branch_taken_0x21e4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e4ac) {
            ctx->pc = 0x21E4CCu;
            goto label_21e4cc;
        }
    }
    ctx->pc = 0x21E4B4u;
    // 0x21e4b4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x21e4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x21e4b8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x21e4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x21e4bc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x21e4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21e4c0: 0x24a5a568  addiu       $a1, $a1, -0x5A98
    ctx->pc = 0x21e4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944104));
    // 0x21e4c4: 0xc089728  jal         func_225CA0
    ctx->pc = 0x21E4C4u;
    SET_GPR_U32(ctx, 31, 0x21E4CCu);
    ctx->pc = 0x21E4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E4C4u;
            // 0x21e4c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E4CCu; }
        if (ctx->pc != 0x21E4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E4CCu; }
        if (ctx->pc != 0x21E4CCu) { return; }
    }
    ctx->pc = 0x21E4CCu;
label_21e4cc:
    // 0x21e4cc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x21e4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21e4d0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21E4D0u;
    {
        const bool branch_taken_0x21e4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e4d0) {
            ctx->pc = 0x21E4F0u;
            goto label_21e4f0;
        }
    }
    ctx->pc = 0x21E4D8u;
    // 0x21e4d8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x21e4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x21e4dc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x21e4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x21e4e0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x21e4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21e4e4: 0x24a5a568  addiu       $a1, $a1, -0x5A98
    ctx->pc = 0x21e4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944104));
    // 0x21e4e8: 0xc089728  jal         func_225CA0
    ctx->pc = 0x21E4E8u;
    SET_GPR_U32(ctx, 31, 0x21E4F0u);
    ctx->pc = 0x21E4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E4E8u;
            // 0x21e4ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225CA0u;
    if (runtime->hasFunction(0x225CA0u)) {
        auto targetFn = runtime->lookupFunction(0x225CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E4F0u; }
        if (ctx->pc != 0x21E4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNumber__16CMenuPosDataFormFPci_0x225ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E4F0u; }
        if (ctx->pc != 0x21E4F0u) { return; }
    }
    ctx->pc = 0x21E4F0u;
label_21e4f0:
    // 0x21e4f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21e4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e4f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e4f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x21E4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E4F8u;
            // 0x21e4fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E500u;
}

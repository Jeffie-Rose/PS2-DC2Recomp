#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFUNC_POINT_END__FP9SPI_STACKi
// Address: 0x164420 - 0x164478
void mapFUNC_POINT_END__FP9SPI_STACKi_0x164420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFUNC_POINT_END__FP9SPI_STACKi_0x164420");
#endif

    switch (ctx->pc) {
        case 0x164450u: goto label_164450;
        case 0x164468u: goto label_164468;
        default: break;
    }

    ctx->pc = 0x164420u;

    // 0x164420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164428: 0x8f828948  lw          $v0, -0x76B8($gp)
    ctx->pc = 0x164428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936904)));
    // 0x16442c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16442Cu;
    {
        const bool branch_taken_0x16442c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16442c) {
            ctx->pc = 0x164458u;
            goto label_164458;
        }
    }
    ctx->pc = 0x164434u;
    // 0x164434: 0x8f848918  lw          $a0, -0x76E8($gp)
    ctx->pc = 0x164434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936856)));
    // 0x164438: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x164438u;
    {
        const bool branch_taken_0x164438 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16443Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164438u;
            // 0x16443c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164438) {
            ctx->pc = 0x164448u;
            goto label_164448;
        }
    }
    ctx->pc = 0x164440u;
    // 0x164440: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x164440u;
    {
        const bool branch_taken_0x164440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164440u;
            // 0x164444: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164440) {
            ctx->pc = 0x164470u;
            goto label_164470;
        }
    }
    ctx->pc = 0x164448u;
label_164448:
    // 0x164448: 0xc05874c  jal         func_161D30
    ctx->pc = 0x164448u;
    SET_GPR_U32(ctx, 31, 0x164450u);
    ctx->pc = 0x161D30u;
    if (runtime->hasFunction(0x161D30u)) {
        auto targetFn = runtime->lookupFunction(0x161D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164450u; }
        if (ctx->pc != 0x164450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pGetData__17CList_9CMapParts_Fv_0x161d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164450u; }
        if (ctx->pc != 0x164450u) { return; }
    }
    ctx->pc = 0x164450u;
label_164450:
    // 0x164450: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164450u;
    {
        const bool branch_taken_0x164450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164450u;
            // 0x164454: 0x244402b0  addiu       $a0, $v0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164450) {
            ctx->pc = 0x164460u;
            goto label_164460;
        }
    }
    ctx->pc = 0x164458u;
label_164458:
    // 0x164458: 0x8f828914  lw          $v0, -0x76EC($gp)
    ctx->pc = 0x164458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x16445c: 0x24440cb0  addiu       $a0, $v0, 0xCB0
    ctx->pc = 0x16445cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
label_164460:
    // 0x164460: 0xc0a7818  jal         func_29E060
    ctx->pc = 0x164460u;
    SET_GPR_U32(ctx, 31, 0x164468u);
    ctx->pc = 0x29E060u;
    if (runtime->hasFunction(0x29E060u)) {
        auto targetFn = runtime->lookupFunction(0x29E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164468u; }
        if (ctx->pc != 0x164468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateStatus__14CFuncPointMngrFv_0x29e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164468u; }
        if (ctx->pc != 0x164468u) { return; }
    }
    ctx->pc = 0x164468u;
label_164468:
    // 0x164468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x164468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16446c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16446cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164470:
    // 0x164470: 0x3e00008  jr          $ra
    ctx->pc = 0x164470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164470u;
            // 0x164474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164478u;
}

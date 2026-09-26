#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsTakePhoto__Fv
// Address: 0x1fe6f0 - 0x1fe744
void IsTakePhoto__Fv_0x1fe6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsTakePhoto__Fv_0x1fe6f0");
#endif

    switch (ctx->pc) {
        case 0x1fe700u: goto label_1fe700;
        case 0x1fe724u: goto label_1fe724;
        default: break;
    }

    ctx->pc = 0x1fe6f0u;

    // 0x1fe6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe6f8: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x1FE6F8u;
    SET_GPR_U32(ctx, 31, 0x1FE700u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE700u; }
        if (ctx->pc != 0x1FE700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE700u; }
        if (ctx->pc != 0x1FE700u) { return; }
    }
    ctx->pc = 0x1FE700u;
label_1fe700:
    // 0x1fe700: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FE700u;
    {
        const bool branch_taken_0x1fe700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE700u;
            // 0x1fe704: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe700) {
            ctx->pc = 0x1FE734u;
            goto label_1fe734;
        }
    }
    ctx->pc = 0x1FE708u;
    // 0x1fe708: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1fe708u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1fe70c: 0x84234d96  lh          $v1, 0x4D96($at)
    ctx->pc = 0x1fe70cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
    // 0x1fe710: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FE710u;
    {
        const bool branch_taken_0x1fe710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE710u;
            // 0x1fe714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe710) {
            ctx->pc = 0x1FE734u;
            goto label_1fe734;
        }
    }
    ctx->pc = 0x1FE718u;
    // 0x1fe718: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fe718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe71c: 0xc067584  jal         func_19D610
    ctx->pc = 0x1FE71Cu;
    SET_GPR_U32(ctx, 31, 0x1FE724u);
    ctx->pc = 0x1FE720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE71Cu;
            // 0x1fe720: 0x24060171  addiu       $a2, $zero, 0x171 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 369));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D610u;
    if (runtime->hasFunction(0x19D610u)) {
        auto targetFn = runtime->lookupFunction(0x19D610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE724u; }
        if (ctx->pc != 0x1FE724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchEquip__16CUserDataManagerFii_0x19d610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FE724u; }
        if (ctx->pc != 0x1FE724u) { return; }
    }
    ctx->pc = 0x1FE724u;
label_1fe724:
    // 0x1fe724: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE724u;
    {
        const bool branch_taken_0x1fe724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE724u;
            // 0x1fe728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe724) {
            ctx->pc = 0x1FE738u;
            goto label_1fe738;
        }
    }
    ctx->pc = 0x1FE72Cu;
    // 0x1fe72c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE72Cu;
    {
        const bool branch_taken_0x1fe72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE72Cu;
            // 0x1fe730: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe72c) {
            ctx->pc = 0x1FE738u;
            goto label_1fe738;
        }
    }
    ctx->pc = 0x1FE734u;
label_1fe734:
    // 0x1fe734: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe738:
    // 0x1fe738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe73c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE73Cu;
            // 0x1fe740: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE744u;
}

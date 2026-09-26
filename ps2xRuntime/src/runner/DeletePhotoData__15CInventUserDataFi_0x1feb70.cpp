#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeletePhotoData__15CInventUserDataFi
// Address: 0x1feb70 - 0x1febb4
void DeletePhotoData__15CInventUserDataFi_0x1feb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeletePhotoData__15CInventUserDataFi_0x1feb70");
#endif

    switch (ctx->pc) {
        case 0x1feba8u: goto label_1feba8;
        default: break;
    }

    ctx->pc = 0x1feb70u;

    // 0x1feb70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1feb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1feb74: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1FEB74u;
    {
        const bool branch_taken_0x1feb74 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1FEB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB74u;
            // 0x1feb78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb74) {
            ctx->pc = 0x1FEBA8u;
            goto label_1feba8;
        }
    }
    ctx->pc = 0x1FEB7Cu;
    // 0x1feb7c: 0x28a3001e  slti        $v1, $a1, 0x1E
    ctx->pc = 0x1feb7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1feb80: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEB80u;
    {
        const bool branch_taken_0x1feb80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1feb80) {
            ctx->pc = 0x1FEB90u;
            goto label_1feb90;
        }
    }
    ctx->pc = 0x1FEB88u;
    // 0x1feb88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FEB88u;
    {
        const bool branch_taken_0x1feb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEB88u;
            // 0x1feb8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feb88) {
            ctx->pc = 0x1FEBACu;
            goto label_1febac;
        }
    }
    ctx->pc = 0x1FEB90u;
label_1feb90:
    // 0x1feb90: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1feb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1feb94: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1feb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1feb98: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1feb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1feb9c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1feb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1feba0: 0xc07f85c  jal         func_1FE170
    ctx->pc = 0x1FEBA0u;
    SET_GPR_U32(ctx, 31, 0x1FEBA8u);
    ctx->pc = 0x1FEBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEBA0u;
            // 0x1feba4: 0x24440408  addiu       $a0, $v0, 0x408 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE170u;
    if (runtime->hasFunction(0x1FE170u)) {
        auto targetFn = runtime->lookupFunction(0x1FE170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEBA8u; }
        if (ctx->pc != 0x1FEBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init_USER_PICTURE_INFO__FP17USER_PICTURE_INFO_0x1fe170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FEBA8u; }
        if (ctx->pc != 0x1FEBA8u) { return; }
    }
    ctx->pc = 0x1FEBA8u;
label_1feba8:
    // 0x1feba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1feba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1febac:
    // 0x1febac: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEBACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FEBACu;
            // 0x1febb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FEBB4u;
}

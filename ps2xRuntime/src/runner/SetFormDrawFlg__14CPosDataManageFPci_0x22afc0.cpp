#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetFormDrawFlg__14CPosDataManageFPci
// Address: 0x22afc0 - 0x22aff0
void SetFormDrawFlg__14CPosDataManageFPci_0x22afc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFormDrawFlg__14CPosDataManageFPci_0x22afc0");
#endif

    switch (ctx->pc) {
        case 0x22afd4u: goto label_22afd4;
        default: break;
    }

    ctx->pc = 0x22afc0u;

    // 0x22afc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22afc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22afc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22afc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22afc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22afc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22afcc: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x22AFCCu;
    SET_GPR_U32(ctx, 31, 0x22AFD4u);
    ctx->pc = 0x22AFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22AFCCu;
            // 0x22afd0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AFD4u; }
        if (ctx->pc != 0x22AFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22AFD4u; }
        if (ctx->pc != 0x22AFD4u) { return; }
    }
    ctx->pc = 0x22AFD4u;
label_22afd4:
    // 0x22afd4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22AFD4u;
    {
        const bool branch_taken_0x22afd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AFD4u;
            // 0x22afd8: 0x10182b  sltu        $v1, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22afd4) {
            ctx->pc = 0x22AFE0u;
            goto label_22afe0;
        }
    }
    ctx->pc = 0x22AFDCu;
    // 0x22afdc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x22afdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_22afe0:
    // 0x22afe0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22afe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22afe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22afe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22afe8: 0x3e00008  jr          $ra
    ctx->pc = 0x22AFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AFE8u;
            // 0x22afec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AFF0u;
}

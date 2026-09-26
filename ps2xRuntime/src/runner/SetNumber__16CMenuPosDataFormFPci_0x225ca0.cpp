#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetNumber__16CMenuPosDataFormFPci
// Address: 0x225ca0 - 0x225cd0
void SetNumber__16CMenuPosDataFormFPci_0x225ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetNumber__16CMenuPosDataFormFPci_0x225ca0");
#endif

    switch (ctx->pc) {
        case 0x225cb4u: goto label_225cb4;
        default: break;
    }

    ctx->pc = 0x225ca0u;

    // 0x225ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225ca4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x225ca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x225cac: 0xc089664  jal         func_225990
    ctx->pc = 0x225CACu;
    SET_GPR_U32(ctx, 31, 0x225CB4u);
    ctx->pc = 0x225CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225CACu;
            // 0x225cb0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225CB4u; }
        if (ctx->pc != 0x225CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225CB4u; }
        if (ctx->pc != 0x225CB4u) { return; }
    }
    ctx->pc = 0x225CB4u;
label_225cb4:
    // 0x225cb4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x225CB4u;
    {
        const bool branch_taken_0x225cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225cb4) {
            ctx->pc = 0x225CC0u;
            goto label_225cc0;
        }
    }
    ctx->pc = 0x225CBCu;
    // 0x225cbc: 0xac500034  sw          $s0, 0x34($v0)
    ctx->pc = 0x225cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 16));
label_225cc0:
    // 0x225cc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225cc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x225CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225CC8u;
            // 0x225ccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225CD0u;
}

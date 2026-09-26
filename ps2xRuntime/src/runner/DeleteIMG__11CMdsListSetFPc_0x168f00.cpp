#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteIMG__11CMdsListSetFPc
// Address: 0x168f00 - 0x168f2c
void DeleteIMG__11CMdsListSetFPc_0x168f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteIMG__11CMdsListSetFPc_0x168f00");
#endif

    switch (ctx->pc) {
        case 0x168f10u: goto label_168f10;
        default: break;
    }

    ctx->pc = 0x168f00u;

    // 0x168f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168f08: 0xc05a3cc  jal         func_168F30
    ctx->pc = 0x168F08u;
    SET_GPR_U32(ctx, 31, 0x168F10u);
    ctx->pc = 0x168F30u;
    if (runtime->hasFunction(0x168F30u)) {
        auto targetFn = runtime->lookupFunction(0x168F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168F10u; }
        if (ctx->pc != 0x168F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchIMGList__11CMdsListSetFPc_0x168f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168F10u; }
        if (ctx->pc != 0x168F10u) { return; }
    }
    ctx->pc = 0x168F10u;
label_168f10:
    // 0x168f10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168F10u;
    {
        const bool branch_taken_0x168f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x168f10) {
            ctx->pc = 0x168F20u;
            goto label_168f20;
        }
    }
    ctx->pc = 0x168F18u;
    // 0x168f18: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x168f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x168f1c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x168f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_168f20:
    // 0x168f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168f24: 0x3e00008  jr          $ra
    ctx->pc = 0x168F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168F24u;
            // 0x168f28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168F2Cu;
}

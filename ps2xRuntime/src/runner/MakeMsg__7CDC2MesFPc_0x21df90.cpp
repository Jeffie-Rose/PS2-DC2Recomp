#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeMsg__7CDC2MesFPc
// Address: 0x21df90 - 0x21dfbc
void MakeMsg__7CDC2MesFPc_0x21df90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeMsg__7CDC2MesFPc_0x21df90");
#endif

    switch (ctx->pc) {
        case 0x21dfb0u: goto label_21dfb0;
        default: break;
    }

    ctx->pc = 0x21df90u;

    // 0x21df90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21df90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21df94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x21df94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21df98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21df98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21df9c: 0xa48321e6  sh          $v1, 0x21E6($a0)
    ctx->pc = 0x21df9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8678), (uint16_t)GPR_U32(ctx, 3));
    // 0x21dfa0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DFA0u;
    {
        const bool branch_taken_0x21dfa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DFA0u;
            // 0x21dfa4: 0xa0802200  sb          $zero, 0x2200($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8704), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dfa0) {
            ctx->pc = 0x21DFB0u;
            goto label_21dfb0;
        }
    }
    ctx->pc = 0x21DFA8u;
    // 0x21dfa8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x21DFA8u;
    SET_GPR_U32(ctx, 31, 0x21DFB0u);
    ctx->pc = 0x21DFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DFA8u;
            // 0x21dfac: 0x24842200  addiu       $a0, $a0, 0x2200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DFB0u; }
        if (ctx->pc != 0x21DFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DFB0u; }
        if (ctx->pc != 0x21DFB0u) { return; }
    }
    ctx->pc = 0x21DFB0u;
label_21dfb0:
    // 0x21dfb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21dfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21dfb4: 0x3e00008  jr          $ra
    ctx->pc = 0x21DFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DFB4u;
            // 0x21dfb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DFBCu;
}

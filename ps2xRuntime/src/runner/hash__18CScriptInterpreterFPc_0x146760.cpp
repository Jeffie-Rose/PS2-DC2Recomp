#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: hash__18CScriptInterpreterFPc
// Address: 0x146760 - 0x1467a4
void hash__18CScriptInterpreterFPc_0x146760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("hash__18CScriptInterpreterFPc_0x146760");
#endif

    switch (ctx->pc) {
        case 0x14676cu: goto label_14676c;
        default: break;
    }

    ctx->pc = 0x146760u;

    // 0x146760: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x146760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146764: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x146764u;
    {
        const bool branch_taken_0x146764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146764u;
            // 0x146768: 0x24030065  addiu       $v1, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146764) {
            ctx->pc = 0x146790u;
            goto label_146790;
        }
    }
    ctx->pc = 0x14676Cu;
label_14676c:
    // 0x14676c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14676cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x146770: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x146770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x146774: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x146774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x146778: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x146778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14677c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x14677cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x146780: 0x0  nop
    ctx->pc = 0x146780u;
    // NOP
    // 0x146784: 0x0  nop
    ctx->pc = 0x146784u;
    // NOP
    // 0x146788: 0x1010  mfhi        $v0
    ctx->pc = 0x146788u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14678c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14678cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_146790:
    // 0x146790: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x146790u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x146794: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x146794u;
    {
        const bool branch_taken_0x146794 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x146794) {
            ctx->pc = 0x14676Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14676c;
        }
    }
    ctx->pc = 0x14679Cu;
    // 0x14679c: 0x3e00008  jr          $ra
    ctx->pc = 0x14679Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1467A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14679Cu;
            // 0x1467a0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1467A4u;
}

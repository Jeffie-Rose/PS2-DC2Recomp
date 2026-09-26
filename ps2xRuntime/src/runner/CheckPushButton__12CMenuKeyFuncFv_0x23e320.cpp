#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckPushButton__12CMenuKeyFuncFv
// Address: 0x23e320 - 0x23e35c
void CheckPushButton__12CMenuKeyFuncFv_0x23e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckPushButton__12CMenuKeyFuncFv_0x23e320");
#endif

    switch (ctx->pc) {
        case 0x23e334u: goto label_23e334;
        default: break;
    }

    ctx->pc = 0x23e320u;

    // 0x23e320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23e320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23e324: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23e324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23e328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23e328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23e32c: 0xc08f86c  jal         func_23E1B0
    ctx->pc = 0x23E32Cu;
    SET_GPR_U32(ctx, 31, 0x23E334u);
    ctx->pc = 0x23E330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E32Cu;
            // 0x23e330: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E1B0u;
    if (runtime->hasFunction(0x23E1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23E1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E334u; }
        if (ctx->pc != 0x23E334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCheckPushButton__Fv_0x23e1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E334u; }
        if (ctx->pc != 0x23E334u) { return; }
    }
    ctx->pc = 0x23E334u;
label_23e334:
    // 0x23e334: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x23e334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x23e338: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x23e338u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x23e33c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23E33Cu;
    {
        const bool branch_taken_0x23e33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e33c) {
            ctx->pc = 0x23E348u;
            goto label_23e348;
        }
    }
    ctx->pc = 0x23E344u;
    // 0x23e344: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x23e344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_23e348:
    // 0x23e348: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x23e348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23e34c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23e34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23e350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23e350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23e354: 0x3e00008  jr          $ra
    ctx->pc = 0x23E354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E354u;
            // 0x23e358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E35Cu;
}

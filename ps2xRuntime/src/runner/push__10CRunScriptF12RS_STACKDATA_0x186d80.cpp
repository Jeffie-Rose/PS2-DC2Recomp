#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: push__10CRunScriptF12RS_STACKDATA
// Address: 0x186d80 - 0x186dc8
void push__10CRunScriptF12RS_STACKDATA_0x186d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("push__10CRunScriptF12RS_STACKDATA_0x186d80");
#endif

    switch (ctx->pc) {
        case 0x186d98u: goto label_186d98;
        default: break;
    }

    ctx->pc = 0x186d80u;

    // 0x186d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x186d84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186d88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186d8c: 0xffa50028  sd          $a1, 0x28($sp)
    ctx->pc = 0x186d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 5));
    // 0x186d90: 0xc061b54  jal         func_186D50
    ctx->pc = 0x186D90u;
    SET_GPR_U32(ctx, 31, 0x186D98u);
    ctx->pc = 0x186D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186D90u;
            // 0x186d94: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186D50u;
    if (runtime->hasFunction(0x186D50u)) {
        auto targetFn = runtime->lookupFunction(0x186D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D98u; }
        if (ctx->pc != 0x186D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        check_stack__10CRunScriptFv_0x186d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D98u; }
        if (ctx->pc != 0x186D98u) { return; }
    }
    ctx->pc = 0x186D98u;
label_186d98:
    // 0x186d98: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x186d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x186d9c: 0x27a3002c  addiu       $v1, $sp, 0x2C
    ctx->pc = 0x186d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x186da0: 0x24a40008  addiu       $a0, $a1, 0x8
    ctx->pc = 0x186da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x186da4: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x186da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x186da8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x186da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x186dac: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x186dacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x186db0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x186db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186db4: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x186db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x186db8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186dbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x186DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186DC0u;
            // 0x186dc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186DC8u;
}

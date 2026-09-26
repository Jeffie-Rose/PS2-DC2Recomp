#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPrim__12CMiniEffPrimFPfi
// Address: 0x1c0db0 - 0x1c0e14
void SetPrim__12CMiniEffPrimFPfi_0x1c0db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPrim__12CMiniEffPrimFPfi_0x1c0db0");
#endif

    switch (ctx->pc) {
        case 0x1c0dccu: goto label_1c0dcc;
        case 0x1c0de8u: goto label_1c0de8;
        default: break;
    }

    ctx->pc = 0x1c0db0u;

    // 0x1c0db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c0db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c0db4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c0db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c0db8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c0db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c0dbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c0dc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c0dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0dc4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C0DC4u;
    SET_GPR_U32(ctx, 31, 0x1C0DCCu);
    ctx->pc = 0x1C0DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0DC4u;
            // 0x1c0dc8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0DCCu; }
        if (ctx->pc != 0x1C0DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0DCCu; }
        if (ctx->pc != 0x1C0DCCu) { return; }
    }
    ctx->pc = 0x1C0DCCu;
label_1c0dcc:
    // 0x1c0dcc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c0dd0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c0dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c0dd4: 0xa2220010  sb          $v0, 0x10($s1)
    ctx->pc = 0x1c0dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c0dd8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c0dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c0ddc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c0ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c0de0: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1C0DE0u;
    SET_GPR_U32(ctx, 31, 0x1C0DE8u);
    ctx->pc = 0x1C0DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0DE0u;
            // 0x1c0de4: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0DE8u; }
        if (ctx->pc != 0x1C0DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0DE8u; }
        if (ctx->pc != 0x1C0DE8u) { return; }
    }
    ctx->pc = 0x1C0DE8u;
label_1c0de8:
    // 0x1c0de8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1c0de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1c0dec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c0decu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0df0: 0x0  nop
    ctx->pc = 0x1c0df0u;
    // NOP
    // 0x1c0df4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c0df4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c0df8: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1c0df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1c0dfc: 0xa2300011  sb          $s0, 0x11($s1)
    ctx->pc = 0x1c0dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c0e00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c0e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0e04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0e08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c0e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E0Cu;
            // 0x1c0e10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0E14u;
}

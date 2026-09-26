#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__8mgCFrameFv
// Address: 0x136520 - 0x13658c
void Initialize__8mgCFrameFv_0x136520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__8mgCFrameFv_0x136520");
#endif

    switch (ctx->pc) {
        case 0x136548u: goto label_136548;
        case 0x136550u: goto label_136550;
        case 0x13657cu: goto label_13657c;
        default: break;
    }

    ctx->pc = 0x136520u;

    // 0x136520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x136524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x136528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13652c: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x13652cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x136530: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x136530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136534: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x136534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x136538: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x136538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x13653c: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x13653cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x136540: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x136540u;
    SET_GPR_U32(ctx, 31, 0x136548u);
    ctx->pc = 0x136544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136540u;
            // 0x136544: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136548u; }
        if (ctx->pc != 0x136548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136548u; }
        if (ctx->pc != 0x136548u) { return; }
    }
    ctx->pc = 0x136548u;
label_136548:
    // 0x136548: 0xc041c7a  jal         func_1071E8
    ctx->pc = 0x136548u;
    SET_GPR_U32(ctx, 31, 0x136550u);
    ctx->pc = 0x13654Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136548u;
            // 0x13654c: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136550u; }
        if (ctx->pc != 0x136550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136550u; }
        if (ctx->pc != 0x136550u) { return; }
    }
    ctx->pc = 0x136550u;
label_136550:
    // 0x136550: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x136550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x136554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136558: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x136558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x13655c: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x13655cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x136560: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x136560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x136564: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x136564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x136568: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x136568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x13656c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x13656cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x136570: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x136570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x136574: 0xc04d904  jal         func_136410
    ctx->pc = 0x136574u;
    SET_GPR_U32(ctx, 31, 0x13657Cu);
    ctx->pc = 0x136578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136574u;
            // 0x136578: 0xae0000f0  sw          $zero, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136410u;
    if (runtime->hasFunction(0x136410u)) {
        auto targetFn = runtime->lookupFunction(0x136410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13657Cu; }
        if (ctx->pc != 0x13657Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9mgCObjectFv_0x136410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13657Cu; }
        if (ctx->pc != 0x13657Cu) { return; }
    }
    ctx->pc = 0x13657Cu;
label_13657c:
    // 0x13657c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13657cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136580: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136584: 0x3e00008  jr          $ra
    ctx->pc = 0x136584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136584u;
            // 0x136588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13658Cu;
}

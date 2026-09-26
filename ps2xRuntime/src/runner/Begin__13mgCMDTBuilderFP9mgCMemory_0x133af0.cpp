#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Begin__13mgCMDTBuilderFP9mgCMemory
// Address: 0x133af0 - 0x133ba8
void Begin__13mgCMDTBuilderFP9mgCMemory_0x133af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Begin__13mgCMDTBuilderFP9mgCMemory_0x133af0");
#endif

    switch (ctx->pc) {
        case 0x133b20u: goto label_133b20;
        case 0x133b30u: goto label_133b30;
        case 0x133b50u: goto label_133b50;
        case 0x133b64u: goto label_133b64;
        case 0x133b94u: goto label_133b94;
        default: break;
    }

    ctx->pc = 0x133af0u;

    // 0x133af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133af4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133af8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x133af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x133afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133b00: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x133b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x133b04: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x133b04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x133b08: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x133B08u;
    {
        const bool branch_taken_0x133b08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x133b08) {
            ctx->pc = 0x133B94u;
            goto label_133b94;
        }
    }
    ctx->pc = 0x133B10u;
    // 0x133b10: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x133b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133b14: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x133b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x133b18: 0xc04e748  jal         func_139D20
    ctx->pc = 0x133B18u;
    SET_GPR_U32(ctx, 31, 0x133B20u);
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133B20u; }
        if (ctx->pc != 0x133B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133B20u; }
        if (ctx->pc != 0x133B20u) { return; }
    }
    ctx->pc = 0x133B20u;
label_133b20:
    // 0x133b20: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x133b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x133b24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x133b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133b28: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x133B28u;
    SET_GPR_U32(ctx, 31, 0x133B30u);
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133B30u; }
        if (ctx->pc != 0x133B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133B30u; }
        if (ctx->pc != 0x133B30u) { return; }
    }
    ctx->pc = 0x133B30u;
label_133b30:
    // 0x133b30: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x133b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x133b34: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x133b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x133b38: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x133B38u;
    {
        const bool branch_taken_0x133b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x133b38) {
            ctx->pc = 0x133B94u;
            goto label_133b94;
        }
    }
    ctx->pc = 0x133B40u;
    // 0x133b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x133b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133b44: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x133b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x133b48: 0xc049c86  jal         func_127218
    ctx->pc = 0x133B48u;
    SET_GPR_U32(ctx, 31, 0x133B50u);
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133B50u; }
        if (ctx->pc != 0x133B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133B50u; }
        if (ctx->pc != 0x133B50u) { return; }
    }
    ctx->pc = 0x133B50u;
label_133b50:
    // 0x133b50: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x133b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x133b54: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x133b54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x133b58: 0x24a52568  addiu       $a1, $a1, 0x2568
    ctx->pc = 0x133b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9576));
    // 0x133b5c: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x133B5Cu;
    SET_GPR_U32(ctx, 31, 0x133B64u);
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133B64u; }
        if (ctx->pc != 0x133B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133B64u; }
        if (ctx->pc != 0x133B64u) { return; }
    }
    ctx->pc = 0x133B64u;
label_133b64:
    // 0x133b64: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x133b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x133b68: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x133b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x133b6c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x133b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x133b70: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x133b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x133b74: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x133b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x133b78: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x133b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x133b7c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x133b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x133b80: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x133b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x133b84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x133b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133b88: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x133b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x133b8c: 0xc049c86  jal         func_127218
    ctx->pc = 0x133B8Cu;
    SET_GPR_U32(ctx, 31, 0x133B94u);
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133B94u; }
        if (ctx->pc != 0x133B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133B94u; }
        if (ctx->pc != 0x133B94u) { return; }
    }
    ctx->pc = 0x133B94u;
label_133b94:
    // 0x133b94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133b98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x133b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133b9c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x133b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x133ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x133BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133BA8u;
}

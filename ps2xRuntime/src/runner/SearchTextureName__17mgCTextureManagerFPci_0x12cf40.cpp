#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchTextureName__17mgCTextureManagerFPci
// Address: 0x12cf40 - 0x12cfac
void SearchTextureName__17mgCTextureManagerFPci_0x12cf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchTextureName__17mgCTextureManagerFPci_0x12cf40");
#endif

    switch (ctx->pc) {
        case 0x12cf70u: goto label_12cf70;
        case 0x12cf80u: goto label_12cf80;
        case 0x12cf94u: goto label_12cf94;
        default: break;
    }

    ctx->pc = 0x12cf40u;

    // 0x12cf40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x12cf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x12cf44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12cf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12cf48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12cf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12cf4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12cf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12cf50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12cf50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf54: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12cf54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf58: 0x808201d8  lb          $v0, 0x1D8($a0)
    ctx->pc = 0x12cf58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 472)));
    // 0x12cf5c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12CF5Cu;
    {
        const bool branch_taken_0x12cf5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cf5c) {
            ctx->pc = 0x12CF84u;
            goto label_12cf84;
        }
    }
    ctx->pc = 0x12CF64u;
    // 0x12cf64: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12cf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12cf68: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x12CF68u;
    SET_GPR_U32(ctx, 31, 0x12CF70u);
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF70u; }
        if (ctx->pc != 0x12CF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF70u; }
        if (ctx->pc != 0x12CF70u) { return; }
    }
    ctx->pc = 0x12CF70u;
label_12cf70:
    // 0x12cf70: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12cf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12cf74: 0x262501d8  addiu       $a1, $s1, 0x1D8
    ctx->pc = 0x12cf74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
    // 0x12cf78: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x12CF78u;
    SET_GPR_U32(ctx, 31, 0x12CF80u);
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF80u; }
        if (ctx->pc != 0x12CF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF80u; }
        if (ctx->pc != 0x12CF80u) { return; }
    }
    ctx->pc = 0x12CF80u;
label_12cf80:
    // 0x12cf80: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x12cf80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12cf84:
    // 0x12cf84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12cf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12cf88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf8c: 0xc04b3a4  jal         func_12CE90
    ctx->pc = 0x12CF8Cu;
    SET_GPR_U32(ctx, 31, 0x12CF94u);
    ctx->pc = 0x12CE90u;
    if (runtime->hasFunction(0x12CE90u)) {
        auto targetFn = runtime->lookupFunction(0x12CE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF94u; }
        if (ctx->pc != 0x12CF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchHash__17mgCTextureManagerFPci_0x12ce90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CF94u; }
        if (ctx->pc != 0x12CF94u) { return; }
    }
    ctx->pc = 0x12CF94u;
label_12cf94:
    // 0x12cf94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12cf94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12cf98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12cf98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12cf9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12cf9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cfa0: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x12cfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12cfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x12CFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12CFACu;
}

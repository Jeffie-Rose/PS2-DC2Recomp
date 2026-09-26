#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TexAnimeOn__17mgCTextureManagerFiPc
// Address: 0x12ef70 - 0x12efd8
void TexAnimeOn__17mgCTextureManagerFiPc_0x12ef70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TexAnimeOn__17mgCTextureManagerFiPc_0x12ef70");
#endif

    switch (ctx->pc) {
        case 0x12ef8cu: goto label_12ef8c;
        case 0x12efb0u: goto label_12efb0;
        case 0x12efc0u: goto label_12efc0;
        default: break;
    }

    ctx->pc = 0x12ef70u;

    // 0x12ef70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12ef70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12ef74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12ef74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12ef78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12ef78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12ef7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12ef7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12ef80: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12ef80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ef84: 0xc04b41c  jal         func_12D070
    ctx->pc = 0x12EF84u;
    SET_GPR_U32(ctx, 31, 0x12EF8Cu);
    ctx->pc = 0x12D070u;
    if (runtime->hasFunction(0x12D070u)) {
        auto targetFn = runtime->lookupFunction(0x12D070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EF8Cu; }
        if (ctx->pc != 0x12EF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureBlock__17mgCTextureManagerFi_0x12d070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EF8Cu; }
        if (ctx->pc != 0x12EF8Cu) { return; }
    }
    ctx->pc = 0x12EF8Cu;
label_12ef8c:
    // 0x12ef8c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12EF8Cu;
    {
        const bool branch_taken_0x12ef8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ef8c) {
            ctx->pc = 0x12EFC0u;
            goto label_12efc0;
        }
    }
    ctx->pc = 0x12EF94u;
    // 0x12ef94: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x12ef94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12ef98: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12EF98u;
    {
        const bool branch_taken_0x12ef98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ef98) {
            ctx->pc = 0x12EFC0u;
            goto label_12efc0;
        }
    }
    ctx->pc = 0x12EFA0u;
    // 0x12efa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12efa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12efa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12efa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12efa8: 0xc04f4c8  jal         func_13D320
    ctx->pc = 0x12EFA8u;
    SET_GPR_U32(ctx, 31, 0x12EFB0u);
    ctx->pc = 0x13D320u;
    if (runtime->hasFunction(0x13D320u)) {
        auto targetFn = runtime->lookupFunction(0x13D320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EFB0u; }
        if (ctx->pc != 0x12EFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchGroupName__15mgCTextureAnimeFPc_0x13d320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EFB0u; }
        if (ctx->pc != 0x12EFB0u) { return; }
    }
    ctx->pc = 0x12EFB0u;
label_12efb0:
    // 0x12efb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12efb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12efb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12efb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12efb8: 0xc04f600  jal         func_13D800
    ctx->pc = 0x12EFB8u;
    SET_GPR_U32(ctx, 31, 0x12EFC0u);
    ctx->pc = 0x13D800u;
    if (runtime->hasFunction(0x13D800u)) {
        auto targetFn = runtime->lookupFunction(0x13D800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EFC0u; }
        if (ctx->pc != 0x12EFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enable__15mgCTextureAnimeFi_0x13d800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EFC0u; }
        if (ctx->pc != 0x12EFC0u) { return; }
    }
    ctx->pc = 0x12EFC0u;
label_12efc0:
    // 0x12efc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12efc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12efc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12efc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12efc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12efc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12efcc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12efccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12efd0: 0x3e00008  jr          $ra
    ctx->pc = 0x12EFD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EFD8u;
}

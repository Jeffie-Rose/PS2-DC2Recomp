#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteTexture__17mgCTextureManagerFP10mgCTexture
// Address: 0x12e440 - 0x12e4ec
void DeleteTexture__17mgCTextureManagerFP10mgCTexture_0x12e440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteTexture__17mgCTextureManagerFP10mgCTexture_0x12e440");
#endif

    switch (ctx->pc) {
        case 0x12e470u: goto label_12e470;
        case 0x12e48cu: goto label_12e48c;
        case 0x12e49cu: goto label_12e49c;
        case 0x12e4d0u: goto label_12e4d0;
        default: break;
    }

    ctx->pc = 0x12e440u;

    // 0x12e440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12e440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12e444: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12e444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12e448: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12e448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12e44c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12e44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12e450: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12e450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12e454: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12e454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e458: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12e458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e45c: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12E45Cu;
    {
        const bool branch_taken_0x12e45c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e45c) {
            ctx->pc = 0x12E4D0u;
            goto label_12e4d0;
        }
    }
    ctx->pc = 0x12E464u;
    // 0x12e464: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x12e464u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12e468: 0xc04b41c  jal         func_12D070
    ctx->pc = 0x12E468u;
    SET_GPR_U32(ctx, 31, 0x12E470u);
    ctx->pc = 0x12D070u;
    if (runtime->hasFunction(0x12D070u)) {
        auto targetFn = runtime->lookupFunction(0x12D070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E470u; }
        if (ctx->pc != 0x12E470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureBlock__17mgCTextureManagerFi_0x12d070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E470u; }
        if (ctx->pc != 0x12E470u) { return; }
    }
    ctx->pc = 0x12E470u;
label_12e470:
    // 0x12e470: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12e470u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e474: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x12E474u;
    {
        const bool branch_taken_0x12e474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e474) {
            ctx->pc = 0x12E4D0u;
            goto label_12e4d0;
        }
    }
    ctx->pc = 0x12E47Cu;
    // 0x12e47c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12e47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e480: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12e480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e484: 0xc04b368  jal         func_12CDA0
    ctx->pc = 0x12E484u;
    SET_GPR_U32(ctx, 31, 0x12E48Cu);
    ctx->pc = 0x12CDA0u;
    if (runtime->hasFunction(0x12CDA0u)) {
        auto targetFn = runtime->lookupFunction(0x12CDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E48Cu; }
        if (ctx->pc != 0x12E48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DelHash__17mgCTextureManagerFP10mgCTexture_0x12cda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E48Cu; }
        if (ctx->pc != 0x12E48Cu) { return; }
    }
    ctx->pc = 0x12E48Cu;
label_12e48c:
    // 0x12e48c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e490: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12e490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e494: 0xc04b1e0  jal         func_12C780
    ctx->pc = 0x12E494u;
    SET_GPR_U32(ctx, 31, 0x12E49Cu);
    ctx->pc = 0x12C780u;
    if (runtime->hasFunction(0x12C780u)) {
        auto targetFn = runtime->lookupFunction(0x12C780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E49Cu; }
        if (ctx->pc != 0x12E49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Delete__15mgCTextureBlockFP10mgCTexture_0x12c780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E49Cu; }
        if (ctx->pc != 0x12E49Cu) { return; }
    }
    ctx->pc = 0x12E49Cu;
label_12e49c:
    // 0x12e49c: 0x8e4201c4  lw          $v0, 0x1C4($s2)
    ctx->pc = 0x12e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x12e4a0: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12E4A0u;
    {
        const bool branch_taken_0x12e4a0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12e4a0) {
            ctx->pc = 0x12E4C4u;
            goto label_12e4c4;
        }
    }
    ctx->pc = 0x12E4A8u;
    // 0x12e4a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12e4ac: 0xae4201c4  sw          $v0, 0x1C4($s2)
    ctx->pc = 0x12e4acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 2));
    // 0x12e4b0: 0x8e4201c4  lw          $v0, 0x1C4($s2)
    ctx->pc = 0x12e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
    // 0x12e4b4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x12e4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12e4b8: 0x8e4201bc  lw          $v0, 0x1BC($s2)
    ctx->pc = 0x12e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
    // 0x12e4bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12e4c0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x12e4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_12e4c4:
    // 0x12e4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e4c8: 0xc04b12c  jal         func_12C4B0
    ctx->pc = 0x12E4C8u;
    SET_GPR_U32(ctx, 31, 0x12E4D0u);
    ctx->pc = 0x12C4B0u;
    if (runtime->hasFunction(0x12C4B0u)) {
        auto targetFn = runtime->lookupFunction(0x12C4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E4D0u; }
        if (ctx->pc != 0x12E4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10mgCTextureFv_0x12c4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E4D0u; }
        if (ctx->pc != 0x12E4D0u) { return; }
    }
    ctx->pc = 0x12E4D0u;
label_12e4d0:
    // 0x12e4d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12e4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e4d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12e4d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e4d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12e4d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e4dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12e4dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e4e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x12e4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12e4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x12E4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E4ECu;
}

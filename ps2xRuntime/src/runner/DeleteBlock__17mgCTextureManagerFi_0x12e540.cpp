#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteBlock__17mgCTextureManagerFi
// Address: 0x12e540 - 0x12e5c4
void DeleteBlock__17mgCTextureManagerFi_0x12e540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteBlock__17mgCTextureManagerFi_0x12e540");
#endif

    switch (ctx->pc) {
        case 0x12e560u: goto label_12e560;
        case 0x12e578u: goto label_12e578;
        case 0x12e588u: goto label_12e588;
        case 0x12e5a8u: goto label_12e5a8;
        default: break;
    }

    ctx->pc = 0x12e540u;

    // 0x12e540: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12e540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12e544: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12e544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12e548: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12e548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12e54c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12e54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12e550: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12e550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12e554: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12e554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e558: 0xc04b41c  jal         func_12D070
    ctx->pc = 0x12E558u;
    SET_GPR_U32(ctx, 31, 0x12E560u);
    ctx->pc = 0x12D070u;
    if (runtime->hasFunction(0x12D070u)) {
        auto targetFn = runtime->lookupFunction(0x12D070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E560u; }
        if (ctx->pc != 0x12E560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureBlock__17mgCTextureManagerFi_0x12d070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E560u; }
        if (ctx->pc != 0x12E560u) { return; }
    }
    ctx->pc = 0x12E560u;
label_12e560:
    // 0x12e560: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e564: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x12E564u;
    {
        const bool branch_taken_0x12e564 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e564) {
            ctx->pc = 0x12E5A8u;
            goto label_12e5a8;
        }
    }
    ctx->pc = 0x12E56Cu;
    // 0x12e56c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x12e56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12e570: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12E570u;
    {
        const bool branch_taken_0x12e570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e570) {
            ctx->pc = 0x12E58Cu;
            goto label_12e58c;
        }
    }
    ctx->pc = 0x12E578u;
label_12e578:
    // 0x12e578: 0x8cb10068  lw          $s1, 0x68($a1)
    ctx->pc = 0x12e578u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x12e57c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12e57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e580: 0xc04b910  jal         func_12E440
    ctx->pc = 0x12E580u;
    SET_GPR_U32(ctx, 31, 0x12E588u);
    ctx->pc = 0x12E440u;
    if (runtime->hasFunction(0x12E440u)) {
        auto targetFn = runtime->lookupFunction(0x12E440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E588u; }
        if (ctx->pc != 0x12E588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexture__17mgCTextureManagerFP10mgCTexture_0x12e440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E588u; }
        if (ctx->pc != 0x12E588u) { return; }
    }
    ctx->pc = 0x12E588u;
label_12e588:
    // 0x12e588: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12e588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12e58c:
    // 0x12e58c: 0x0  nop
    ctx->pc = 0x12e58cu;
    // NOP
    // 0x12e590: 0x0  nop
    ctx->pc = 0x12e590u;
    // NOP
    // 0x12e594: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12E594u;
    {
        const bool branch_taken_0x12e594 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e594) {
            ctx->pc = 0x12E578u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12e578;
        }
    }
    ctx->pc = 0x12E59Cu;
    // 0x12e59c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e5a0: 0xc04b1c0  jal         func_12C700
    ctx->pc = 0x12E5A0u;
    SET_GPR_U32(ctx, 31, 0x12E5A8u);
    ctx->pc = 0x12C700u;
    if (runtime->hasFunction(0x12C700u)) {
        auto targetFn = runtime->lookupFunction(0x12C700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E5A8u; }
        if (ctx->pc != 0x12E5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__15mgCTextureBlockFv_0x12c700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E5A8u; }
        if (ctx->pc != 0x12E5A8u) { return; }
    }
    ctx->pc = 0x12E5A8u;
label_12e5a8:
    // 0x12e5a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12e5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e5ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12e5acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e5b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12e5b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e5b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12e5b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e5b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x12e5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12e5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x12E5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E5C4u;
}

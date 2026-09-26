#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatePoint__13CGeyserEffectFv
// Address: 0x2f84c0 - 0x2f85a0
void CreatePoint__13CGeyserEffectFv_0x2f84c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatePoint__13CGeyserEffectFv_0x2f84c0");
#endif

    switch (ctx->pc) {
        case 0x2f84d0u: goto label_2f84d0;
        case 0x2f84ecu: goto label_2f84ec;
        case 0x2f851cu: goto label_2f851c;
        case 0x2f8544u: goto label_2f8544;
        case 0x2f856cu: goto label_2f856c;
        case 0x2f8590u: goto label_2f8590;
        default: break;
    }

    ctx->pc = 0x2f84c0u;

    // 0x2f84c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f84c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f84c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f84c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f84c8: 0xc0be118  jal         func_2F8460
    ctx->pc = 0x2F84C8u;
    SET_GPR_U32(ctx, 31, 0x2F84D0u);
    ctx->pc = 0x2F84CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F84C8u;
            // 0x2f84cc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8460u;
    if (runtime->hasFunction(0x2F8460u)) {
        auto targetFn = runtime->lookupFunction(0x2F8460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F84D0u; }
        if (ctx->pc != 0x2F84D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEmpty__13CGeyserEffectFv_0x2f8460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F84D0u; }
        if (ctx->pc != 0x2F84D0u) { return; }
    }
    ctx->pc = 0x2F84D0u;
label_2f84d0:
    // 0x2f84d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f84d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f84d4: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2F84D4u;
    {
        const bool branch_taken_0x2f84d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F84D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F84D4u;
            // 0x2f84d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84d4) {
            ctx->pc = 0x2F8590u;
            goto label_2f8590;
        }
    }
    ctx->pc = 0x2F84DCu;
    // 0x2f84dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f84dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f84e0: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x2f84e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x2f84e4: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x2F84E4u;
    SET_GPR_U32(ctx, 31, 0x2F84ECu);
    ctx->pc = 0x2F84E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F84E4u;
            // 0x2f84e8: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F84ECu; }
        if (ctx->pc != 0x2F84ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F84ECu; }
        if (ctx->pc != 0x2F84ECu) { return; }
    }
    ctx->pc = 0x2F84ECu;
label_2f84ec:
    // 0x2f84ec: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x2f84ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x2f84f0: 0x3c024026  lui         $v0, 0x4026
    ctx->pc = 0x2f84f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16422 << 16));
    // 0x2f84f4: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x2f84f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2f84f8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2f84f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f84fc: 0x34436666  ori         $v1, $v0, 0x6666
    ctx->pc = 0x2f84fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x2f8500: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2f8500u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f8504: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f8504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f8508: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2f8508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2f850c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f850cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f8510: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2f8510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2f8514: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x2F8514u;
    SET_GPR_U32(ctx, 31, 0x2F851Cu);
    ctx->pc = 0x2F8518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8514u;
            // 0x2f8518: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F851Cu; }
        if (ctx->pc != 0x2F851Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F851Cu; }
        if (ctx->pc != 0x2F851Cu) { return; }
    }
    ctx->pc = 0x2F851Cu;
label_2f851c:
    // 0x2f851c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2f851cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2f8520: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f8520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2f8524: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2f8524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f8528: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f8528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f852c: 0x0  nop
    ctx->pc = 0x2f852cu;
    // NOP
    // 0x2f8530: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f8530u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2f8534: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f8534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f8538: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f8538u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f853c: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x2F853Cu;
    SET_GPR_U32(ctx, 31, 0x2F8544u);
    ctx->pc = 0x2F8540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F853Cu;
            // 0x2f8540: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8544u; }
        if (ctx->pc != 0x2F8544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8544u; }
        if (ctx->pc != 0x2F8544u) { return; }
    }
    ctx->pc = 0x2F8544u;
label_2f8544:
    // 0x2f8544: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2f8544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2f8548: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2f8548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2f854c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2f854cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f8550: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f8550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f8554: 0x0  nop
    ctx->pc = 0x2f8554u;
    // NOP
    // 0x2f8558: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2f8558u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2f855c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f855cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f8560: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f8560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f8564: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x2F8564u;
    SET_GPR_U32(ctx, 31, 0x2F856Cu);
    ctx->pc = 0x2F8568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8564u;
            // 0x2f8568: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F856Cu; }
        if (ctx->pc != 0x2F856Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F856Cu; }
        if (ctx->pc != 0x2F856Cu) { return; }
    }
    ctx->pc = 0x2F856Cu;
label_2f856c:
    // 0x2f856c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2f856cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2f8570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8574: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2f8574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2f8578: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f8578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f857c: 0x0  nop
    ctx->pc = 0x2f857cu;
    // NOP
    // 0x2f8580: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2f8580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f8584: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f8584u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f8588: 0xc04bc90  jal         func_12F240
    ctx->pc = 0x2F8588u;
    SET_GPR_U32(ctx, 31, 0x2F8590u);
    ctx->pc = 0x2F858Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8588u;
            // 0x2f858c: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F240u;
    if (runtime->hasFunction(0x12F240u)) {
        auto targetFn = runtime->lookupFunction(0x12F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8590u; }
        if (ctx->pc != 0x2F8590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVectorW__FPf_0x12f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8590u; }
        if (ctx->pc != 0x2F8590u) { return; }
    }
    ctx->pc = 0x2F8590u;
label_2f8590:
    // 0x2f8590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f8590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8594: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f8594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f8598: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F859Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8598u;
            // 0x2f859c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F85A0u;
}

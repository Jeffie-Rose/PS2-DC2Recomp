#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPosition__10CEditPartsFPf
// Address: 0x1b5860 - 0x1b58e0
void SetPosition__10CEditPartsFPf_0x1b5860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPosition__10CEditPartsFPf_0x1b5860");
#endif

    switch (ctx->pc) {
        case 0x1b5860u: goto label_1b5860;
        case 0x1b5864u: goto label_1b5864;
        case 0x1b5868u: goto label_1b5868;
        case 0x1b586cu: goto label_1b586c;
        case 0x1b5870u: goto label_1b5870;
        case 0x1b5874u: goto label_1b5874;
        case 0x1b5878u: goto label_1b5878;
        case 0x1b587cu: goto label_1b587c;
        case 0x1b5880u: goto label_1b5880;
        case 0x1b5884u: goto label_1b5884;
        case 0x1b5888u: goto label_1b5888;
        case 0x1b588cu: goto label_1b588c;
        case 0x1b5890u: goto label_1b5890;
        case 0x1b5894u: goto label_1b5894;
        case 0x1b5898u: goto label_1b5898;
        case 0x1b589cu: goto label_1b589c;
        case 0x1b58a0u: goto label_1b58a0;
        case 0x1b58a4u: goto label_1b58a4;
        case 0x1b58a8u: goto label_1b58a8;
        case 0x1b58acu: goto label_1b58ac;
        case 0x1b58b0u: goto label_1b58b0;
        case 0x1b58b4u: goto label_1b58b4;
        case 0x1b58b8u: goto label_1b58b8;
        case 0x1b58bcu: goto label_1b58bc;
        case 0x1b58c0u: goto label_1b58c0;
        case 0x1b58c4u: goto label_1b58c4;
        case 0x1b58c8u: goto label_1b58c8;
        case 0x1b58ccu: goto label_1b58cc;
        case 0x1b58d0u: goto label_1b58d0;
        case 0x1b58d4u: goto label_1b58d4;
        case 0x1b58d8u: goto label_1b58d8;
        case 0x1b58dcu: goto label_1b58dc;
        default: break;
    }

    ctx->pc = 0x1b5860u;

label_1b5860:
    // 0x1b5860: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b5860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b5864:
    // 0x1b5864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b5864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b5868:
    // 0x1b5868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b5868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b586c:
    // 0x1b586c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b586cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b5870:
    // 0x1b5870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b5870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b5874:
    // 0x1b5874: 0x8c840314  lw          $a0, 0x314($a0)
    ctx->pc = 0x1b5874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 788)));
label_1b5878:
    // 0x1b5878: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_1b587c:
    if (ctx->pc == 0x1B587Cu) {
        ctx->pc = 0x1B587Cu;
            // 0x1b587c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5880u;
        goto label_1b5880;
    }
    ctx->pc = 0x1B5878u;
    {
        const bool branch_taken_0x1b5878 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B587Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5878u;
            // 0x1b587c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5878) {
            ctx->pc = 0x1B5890u;
            goto label_1b5890;
        }
    }
    ctx->pc = 0x1B5880u;
label_1b5880:
    // 0x1b5880: 0xc04d864  jal         func_136190
label_1b5884:
    if (ctx->pc == 0x1B5884u) {
        ctx->pc = 0x1B5884u;
            // 0x1b5884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B5888u;
        goto label_1b5888;
    }
    ctx->pc = 0x1B5880u;
    SET_GPR_U32(ctx, 31, 0x1B5888u);
    ctx->pc = 0x1B5884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5880u;
            // 0x1b5884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136190u;
    if (runtime->hasFunction(0x136190u)) {
        auto targetFn = runtime->lookupFunction(0x136190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5888u; }
        if (ctx->pc != 0x1B5888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPosition__9mgCObjectFPf_0x136190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5888u; }
        if (ctx->pc != 0x1B5888u) { return; }
    }
    ctx->pc = 0x1B5888u;
label_1b5888:
    // 0x1b5888: 0x10000011  b           . + 4 + (0x11 << 2)
label_1b588c:
    if (ctx->pc == 0x1B588Cu) {
        ctx->pc = 0x1B588Cu;
            // 0x1b588c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1B5890u;
        goto label_1b5890;
    }
    ctx->pc = 0x1B5888u;
    {
        const bool branch_taken_0x1b5888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B588Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5888u;
            // 0x1b588c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5888) {
            ctx->pc = 0x1B58D0u;
            goto label_1b58d0;
        }
    }
    ctx->pc = 0x1B5890u;
label_1b5890:
    // 0x1b5890: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1b5890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b5894:
    // 0x1b5894: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b5894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b5898:
    // 0x1b5898: 0x320f809  jalr        $t9
label_1b589c:
    if (ctx->pc == 0x1B589Cu) {
        ctx->pc = 0x1B589Cu;
            // 0x1b589c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1B58A0u;
        goto label_1b58a0;
    }
    ctx->pc = 0x1B5898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B58A0u);
        ctx->pc = 0x1B589Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5898u;
            // 0x1b589c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B58A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B58A0u; }
            if (ctx->pc != 0x1B58A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B58A0u;
label_1b58a0:
    // 0x1b58a0: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x1b58a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1b58a4:
    // 0x1b58a4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1b58a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b58a8:
    // 0x1b58a8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1b58a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1b58ac:
    // 0x1b58ac: 0xc06d5fc  jal         func_1B57F0
label_1b58b0:
    if (ctx->pc == 0x1B58B0u) {
        ctx->pc = 0x1B58B0u;
            // 0x1b58b0: 0xc7ac0034  lwc1        $f12, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1B58B4u;
        goto label_1b58b4;
    }
    ctx->pc = 0x1B58ACu;
    SET_GPR_U32(ctx, 31, 0x1B58B4u);
    ctx->pc = 0x1B58B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58ACu;
            // 0x1b58b0: 0xc7ac0034  lwc1        $f12, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B57F0u;
    if (runtime->hasFunction(0x1B57F0u)) {
        auto targetFn = runtime->lookupFunction(0x1B57F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58B4u; }
        if (ctx->pc != 0x1B58B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StandardPos__Ff_0x1b57f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58B4u; }
        if (ctx->pc != 0x1B58B4u) { return; }
    }
    ctx->pc = 0x1B58B4u;
label_1b58b4:
    // 0x1b58b4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1b58b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b58b8:
    // 0x1b58b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b58b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b58bc:
    // 0x1b58bc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1b58bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b58c0:
    // 0x1b58c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b58c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b58c4:
    // 0x1b58c4: 0xc04d864  jal         func_136190
label_1b58c8:
    if (ctx->pc == 0x1B58C8u) {
        ctx->pc = 0x1B58C8u;
            // 0x1b58c8: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->pc = 0x1B58CCu;
        goto label_1b58cc;
    }
    ctx->pc = 0x1B58C4u;
    SET_GPR_U32(ctx, 31, 0x1B58CCu);
    ctx->pc = 0x1B58C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58C4u;
            // 0x1b58c8: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x136190u;
    if (runtime->hasFunction(0x136190u)) {
        auto targetFn = runtime->lookupFunction(0x136190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58CCu; }
        if (ctx->pc != 0x1B58CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPosition__9mgCObjectFPf_0x136190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B58CCu; }
        if (ctx->pc != 0x1B58CCu) { return; }
    }
    ctx->pc = 0x1B58CCu;
label_1b58cc:
    // 0x1b58cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b58ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b58d0:
    // 0x1b58d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b58d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b58d4:
    // 0x1b58d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b58d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b58d8:
    // 0x1b58d8: 0x3e00008  jr          $ra
label_1b58dc:
    if (ctx->pc == 0x1B58DCu) {
        ctx->pc = 0x1B58DCu;
            // 0x1b58dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1B58E0u;
        goto label_fallthrough_0x1b58d8;
    }
    ctx->pc = 0x1B58D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B58DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B58D8u;
            // 0x1b58dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b58d8:
    ctx->pc = 0x1B58E0u;
}

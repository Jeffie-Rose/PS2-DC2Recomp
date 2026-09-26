#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsMoveRef__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x257950 - 0x257a00
void scsMoveRef__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsMoveRef__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257950");
#endif

    switch (ctx->pc) {
        case 0x257984u: goto label_257984;
        case 0x2579a8u: goto label_2579a8;
        case 0x2579bcu: goto label_2579bc;
        case 0x2579d4u: goto label_2579d4;
        default: break;
    }

    ctx->pc = 0x257950u;

    // 0x257950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x257950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x257954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x257954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x257958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25795c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25795cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x257960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257964: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x257964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x257968: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x257968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x25796c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25796cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x257970: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x257970u;
    {
        const bool branch_taken_0x257970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257970u;
            // 0x257974: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257970) {
            ctx->pc = 0x257990u;
            goto label_257990;
        }
    }
    ctx->pc = 0x257978u;
    // 0x257978: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x257978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x25797c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25797Cu;
    SET_GPR_U32(ctx, 31, 0x257984u);
    ctx->pc = 0x257980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25797Cu;
            // 0x257980: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257984u; }
        if (ctx->pc != 0x257984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257984u; }
        if (ctx->pc != 0x257984u) { return; }
    }
    ctx->pc = 0x257984u;
label_257984:
    // 0x257984: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x257984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x257988: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x257988u;
    {
        const bool branch_taken_0x257988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25798Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257988u;
            // 0x25798c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257988) {
            ctx->pc = 0x2579ECu;
            goto label_2579ec;
        }
    }
    ctx->pc = 0x257990u;
label_257990:
    // 0x257990: 0x1c60000d  bgtz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x257990u;
    {
        const bool branch_taken_0x257990 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x257994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257990u;
            // 0x257994: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257990) {
            ctx->pc = 0x2579C8u;
            goto label_2579c8;
        }
    }
    ctx->pc = 0x257998u;
    // 0x257998: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x257998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25799c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x25799cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2579a0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2579A0u;
    SET_GPR_U32(ctx, 31, 0x2579A8u);
    ctx->pc = 0x2579A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2579A0u;
            // 0x2579a4: 0x26060060  addiu       $a2, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2579A8u; }
        if (ctx->pc != 0x2579A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2579A8u; }
        if (ctx->pc != 0x2579A8u) { return; }
    }
    ctx->pc = 0x2579A8u;
label_2579a8:
    // 0x2579a8: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2579a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2579ac: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x2579acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x2579b0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2579b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2579b4: 0xc041c1e  jal         func_107078
    ctx->pc = 0x2579B4u;
    SET_GPR_U32(ctx, 31, 0x2579BCu);
    ctx->pc = 0x2579B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2579B4u;
            // 0x2579b8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2579BCu; }
        if (ctx->pc != 0x2579BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2579BCu; }
        if (ctx->pc != 0x2579BCu) { return; }
    }
    ctx->pc = 0x2579BCu;
label_2579bc:
    // 0x2579bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2579bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2579c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2579C0u;
    {
        const bool branch_taken_0x2579c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2579C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2579C0u;
            // 0x2579c4: 0xae0200ec  sw          $v0, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2579c0) {
            ctx->pc = 0x2579DCu;
            goto label_2579dc;
        }
    }
    ctx->pc = 0x2579C8u;
label_2579c8:
    // 0x2579c8: 0x260600e0  addiu       $a2, $s0, 0xE0
    ctx->pc = 0x2579c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x2579cc: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2579CCu;
    SET_GPR_U32(ctx, 31, 0x2579D4u);
    ctx->pc = 0x2579D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2579CCu;
            // 0x2579d0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2579D4u; }
        if (ctx->pc != 0x2579D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2579D4u; }
        if (ctx->pc != 0x2579D4u) { return; }
    }
    ctx->pc = 0x2579D4u;
label_2579d4:
    // 0x2579d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2579d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2579d8: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x2579d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_2579dc:
    // 0x2579dc: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2579dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x2579e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2579e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2579e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2579e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2579e8: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x2579e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_2579ec:
    // 0x2579ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2579ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2579f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2579f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2579f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2579f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2579f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2579F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2579FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2579F8u;
            // 0x2579fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x257A00u;
}

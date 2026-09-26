#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsMove2__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25ab60 - 0x25ad70
void scsMove2__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25ab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsMove2__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25ab60");
#endif

    switch (ctx->pc) {
        case 0x25abd8u: goto label_25abd8;
        case 0x25abecu: goto label_25abec;
        case 0x25ac08u: goto label_25ac08;
        case 0x25ac18u: goto label_25ac18;
        case 0x25ac2cu: goto label_25ac2c;
        case 0x25ac48u: goto label_25ac48;
        case 0x25ac58u: goto label_25ac58;
        case 0x25ac90u: goto label_25ac90;
        case 0x25aca0u: goto label_25aca0;
        case 0x25ad14u: goto label_25ad14;
        case 0x25ad24u: goto label_25ad24;
        case 0x25ad44u: goto label_25ad44;
        default: break;
    }

    ctx->pc = 0x25ab60u;

    // 0x25ab60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25ab60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25ab64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25ab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25ab68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25ab68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25ab6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25ab6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25ab70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25ab70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ab74: 0x8c860024  lw          $a2, 0x24($a0)
    ctx->pc = 0x25ab74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x25ab78: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x25AB78u;
    {
        const bool branch_taken_0x25ab78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AB78u;
            // 0x25ab7c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab78) {
            ctx->pc = 0x25AB88u;
            goto label_25ab88;
        }
    }
    ctx->pc = 0x25AB80u;
    // 0x25ab80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25AB80u;
    {
        const bool branch_taken_0x25ab80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AB80u;
            // 0x25ab84: 0x8e0300f0  lw          $v1, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab80) {
            ctx->pc = 0x25AB9Cu;
            goto label_25ab9c;
        }
    }
    ctx->pc = 0x25AB88u;
label_25ab88:
    // 0x25ab88: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x25ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x25ab8c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25AB8Cu;
    {
        const bool branch_taken_0x25ab8c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25AB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AB8Cu;
            // 0x25ab90: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ab8c) {
            ctx->pc = 0x25AB9Cu;
            goto label_25ab9c;
        }
    }
    ctx->pc = 0x25AB94u;
    // 0x25ab94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25ab94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25ab98: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x25ab98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_25ab9c:
    // 0x25ab9c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x25ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25aba0: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x25aba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25aba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25aba8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x25aba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25abac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25ABACu;
    {
        const bool branch_taken_0x25abac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25abac) {
            ctx->pc = 0x25ABC0u;
            goto label_25abc0;
        }
    }
    ctx->pc = 0x25ABB4u;
    // 0x25abb4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x25abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x25abb8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x25ABB8u;
    {
        const bool branch_taken_0x25abb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ABBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ABB8u;
            // 0x25abbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25abb8) {
            ctx->pc = 0x25AD5Cu;
            goto label_25ad5c;
        }
    }
    ctx->pc = 0x25ABC0u;
label_25abc0:
    // 0x25abc0: 0x1c800027  bgtz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x25ABC0u;
    {
        const bool branch_taken_0x25abc0 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x25abc0) {
            ctx->pc = 0x25AC60u;
            goto label_25ac60;
        }
    }
    ctx->pc = 0x25ABC8u;
    // 0x25abc8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x25abc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25abcc: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x25abccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x25abd0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x25ABD0u;
    SET_GPR_U32(ctx, 31, 0x25ABD8u);
    ctx->pc = 0x25ABD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25ABD0u;
            // 0x25abd4: 0x26060070  addiu       $a2, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ABD8u; }
        if (ctx->pc != 0x25ABD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ABD8u; }
        if (ctx->pc != 0x25ABD8u) { return; }
    }
    ctx->pc = 0x25ABD8u;
label_25abd8:
    // 0x25abd8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x25abd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25abdc: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x25abdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x25abe0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x25abe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25abe4: 0xc041c1e  jal         func_107078
    ctx->pc = 0x25ABE4u;
    SET_GPR_U32(ctx, 31, 0x25ABECu);
    ctx->pc = 0x25ABE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25ABE4u;
            // 0x25abe8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ABECu; }
        if (ctx->pc != 0x25ABECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ABECu; }
        if (ctx->pc != 0x25ABECu) { return; }
    }
    ctx->pc = 0x25ABECu;
label_25abec:
    // 0x25abec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25abecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25abf0: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x25abf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x25abf4: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x25abf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25abf8: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x25abf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25abfc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25abfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25ac00: 0xc0a248c  jal         func_289230
    ctx->pc = 0x25AC00u;
    SET_GPR_U32(ctx, 31, 0x25AC08u);
    ctx->pc = 0x25AC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC00u;
            // 0x25ac04: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AC08u; }
        if (ctx->pc != 0x25AC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AC08u; }
        if (ctx->pc != 0x25AC08u) { return; }
    }
    ctx->pc = 0x25AC08u;
label_25ac08:
    // 0x25ac08: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x25ac08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x25ac0c: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x25ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x25ac10: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25AC10u;
    SET_GPR_U32(ctx, 31, 0x25AC18u);
    ctx->pc = 0x25AC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC10u;
            // 0x25ac14: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AC18u; }
        if (ctx->pc != 0x25AC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AC18u; }
        if (ctx->pc != 0x25AC18u) { return; }
    }
    ctx->pc = 0x25AC18u;
label_25ac18:
    // 0x25ac18: 0xc60000f0  lwc1        $f0, 0xF0($s0)
    ctx->pc = 0x25ac18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ac1c: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x25ac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x25ac20: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25ac20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ac24: 0xc041c1e  jal         func_107078
    ctx->pc = 0x25AC24u;
    SET_GPR_U32(ctx, 31, 0x25AC2Cu);
    ctx->pc = 0x25AC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC24u;
            // 0x25ac28: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AC2Cu; }
        if (ctx->pc != 0x25AC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AC2Cu; }
        if (ctx->pc != 0x25AC2Cu) { return; }
    }
    ctx->pc = 0x25AC2Cu;
label_25ac2c:
    // 0x25ac2c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x25ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x25ac30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25ac34: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AC34u;
    {
        const bool branch_taken_0x25ac34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25AC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC34u;
            // 0x25ac38: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac34) {
            ctx->pc = 0x25AC50u;
            goto label_25ac50;
        }
    }
    ctx->pc = 0x25AC3Cu;
    // 0x25ac3c: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x25ac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x25ac40: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25AC40u;
    SET_GPR_U32(ctx, 31, 0x25AC48u);
    ctx->pc = 0x25AC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC40u;
            // 0x25ac44: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AC48u; }
        if (ctx->pc != 0x25AC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AC48u; }
        if (ctx->pc != 0x25AC48u) { return; }
    }
    ctx->pc = 0x25AC48u;
label_25ac48:
    // 0x25ac48: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x25AC48u;
    {
        const bool branch_taken_0x25ac48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC48u;
            // 0x25ac4c: 0x8e030040  lw          $v1, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac48) {
            ctx->pc = 0x25AD50u;
            goto label_25ad50;
        }
    }
    ctx->pc = 0x25AC50u;
label_25ac50:
    // 0x25ac50: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25AC50u;
    SET_GPR_U32(ctx, 31, 0x25AC58u);
    ctx->pc = 0x25AC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC50u;
            // 0x25ac54: 0x26050090  addiu       $a1, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AC58u; }
        if (ctx->pc != 0x25AC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AC58u; }
        if (ctx->pc != 0x25AC58u) { return; }
    }
    ctx->pc = 0x25AC58u;
label_25ac58:
    // 0x25ac58: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x25AC58u;
    {
        const bool branch_taken_0x25ac58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ac58) {
            ctx->pc = 0x25AD4Cu;
            goto label_25ad4c;
        }
    }
    ctx->pc = 0x25AC60u;
label_25ac60:
    // 0x25ac60: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x25ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x25ac64: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x25ac64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25ac68: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x25AC68u;
    {
        const bool branch_taken_0x25ac68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC68u;
            // 0x25ac6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac68) {
            ctx->pc = 0x25ACACu;
            goto label_25acac;
        }
    }
    ctx->pc = 0x25AC70u;
    // 0x25ac70: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x25AC70u;
    {
        const bool branch_taken_0x25ac70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC70u;
            // 0x25ac74: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ac70) {
            ctx->pc = 0x25AC84u;
            goto label_25ac84;
        }
    }
    ctx->pc = 0x25AC78u;
    // 0x25ac78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ac7c: 0x14c2000b  bne         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25AC7Cu;
    {
        const bool branch_taken_0x25ac7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x25ac7c) {
            ctx->pc = 0x25ACACu;
            goto label_25acac;
        }
    }
    ctx->pc = 0x25AC84u;
label_25ac84:
    // 0x25ac84: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x25ac84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x25ac88: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x25AC88u;
    SET_GPR_U32(ctx, 31, 0x25AC90u);
    ctx->pc = 0x25AC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC88u;
            // 0x25ac8c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AC90u; }
        if (ctx->pc != 0x25AC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AC90u; }
        if (ctx->pc != 0x25AC90u) { return; }
    }
    ctx->pc = 0x25AC90u;
label_25ac90:
    // 0x25ac90: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x25ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25ac94: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x25ac94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x25ac98: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x25AC98u;
    SET_GPR_U32(ctx, 31, 0x25ACA0u);
    ctx->pc = 0x25AC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AC98u;
            // 0x25ac9c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ACA0u; }
        if (ctx->pc != 0x25ACA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25ACA0u; }
        if (ctx->pc != 0x25ACA0u) { return; }
    }
    ctx->pc = 0x25ACA0u;
label_25aca0:
    // 0x25aca0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25aca4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25aca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25aca8: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x25aca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_25acac:
    // 0x25acac: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x25acacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x25acb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25acb4: 0x14c2000c  bne         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25ACB4u;
    {
        const bool branch_taken_0x25acb4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x25acb4) {
            ctx->pc = 0x25ACE8u;
            goto label_25ace8;
        }
    }
    ctx->pc = 0x25ACBCu;
    // 0x25acbc: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x25acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x25acc0: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x25acc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25acc4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25ACC4u;
    {
        const bool branch_taken_0x25acc4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x25ACC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ACC4u;
            // 0x25acc8: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25acc4) {
            ctx->pc = 0x25ACD4u;
            goto label_25acd4;
        }
    }
    ctx->pc = 0x25ACCCu;
    // 0x25accc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25acccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25acd0: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x25acd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_25acd4:
    // 0x25acd4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x25acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25acd8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x25acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25acdc: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x25acdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25ace0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x25ACE0u;
    {
        const bool branch_taken_0x25ace0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x25ACE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25ACE0u;
            // 0x25ace4: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ace0) {
            ctx->pc = 0x25AD08u;
            goto label_25ad08;
        }
    }
    ctx->pc = 0x25ACE8u;
label_25ace8:
    // 0x25ace8: 0x14c00011  bnez        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x25ACE8u;
    {
        const bool branch_taken_0x25ace8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ace8) {
            ctx->pc = 0x25AD30u;
            goto label_25ad30;
        }
    }
    ctx->pc = 0x25ACF0u;
    // 0x25acf0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x25acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25acf4: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x25acf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25acf8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25acf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25acfc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25ACFCu;
    {
        const bool branch_taken_0x25acfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25acfc) {
            ctx->pc = 0x25AD30u;
            goto label_25ad30;
        }
    }
    ctx->pc = 0x25AD04u;
    // 0x25ad04: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x25ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_25ad08:
    // 0x25ad08: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x25ad08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x25ad0c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x25AD0Cu;
    SET_GPR_U32(ctx, 31, 0x25AD14u);
    ctx->pc = 0x25AD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD0Cu;
            // 0x25ad10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD14u; }
        if (ctx->pc != 0x25AD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD14u; }
        if (ctx->pc != 0x25AD14u) { return; }
    }
    ctx->pc = 0x25AD14u;
label_25ad14:
    // 0x25ad14: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x25ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25ad18: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x25ad18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x25ad1c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x25AD1Cu;
    SET_GPR_U32(ctx, 31, 0x25AD24u);
    ctx->pc = 0x25AD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD1Cu;
            // 0x25ad20: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD24u; }
        if (ctx->pc != 0x25AD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD24u; }
        if (ctx->pc != 0x25AD24u) { return; }
    }
    ctx->pc = 0x25AD24u;
label_25ad24:
    // 0x25ad24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25ad28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25ad28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ad2c: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x25ad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_25ad30:
    // 0x25ad30: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25AD30u;
    {
        const bool branch_taken_0x25ad30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD30u;
            // 0x25ad34: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ad30) {
            ctx->pc = 0x25AD4Cu;
            goto label_25ad4c;
        }
    }
    ctx->pc = 0x25AD38u;
    // 0x25ad38: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x25ad38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x25ad3c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x25AD3Cu;
    SET_GPR_U32(ctx, 31, 0x25AD44u);
    ctx->pc = 0x25AD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD3Cu;
            // 0x25ad40: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD44u; }
        if (ctx->pc != 0x25AD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AD44u; }
        if (ctx->pc != 0x25AD44u) { return; }
    }
    ctx->pc = 0x25AD44u;
label_25ad44:
    // 0x25ad44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25ad48: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x25ad48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_25ad4c:
    // 0x25ad4c: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x25ad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_25ad50:
    // 0x25ad50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ad54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25ad54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25ad58: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x25ad58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_25ad5c:
    // 0x25ad5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25ad5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ad60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25ad60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ad64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ad64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ad68: 0x3e00008  jr          $ra
    ctx->pc = 0x25AD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AD68u;
            // 0x25ad6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25AD70u;
}

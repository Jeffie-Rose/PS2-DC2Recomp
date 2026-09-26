#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEventDay__FPi
// Address: 0x234bd0 - 0x234d08
void CheckEventDay__FPi_0x234bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEventDay__FPi_0x234bd0");
#endif

    switch (ctx->pc) {
        case 0x234bf4u: goto label_234bf4;
        case 0x234bfcu: goto label_234bfc;
        case 0x234c08u: goto label_234c08;
        case 0x234c24u: goto label_234c24;
        case 0x234c2cu: goto label_234c2c;
        case 0x234c34u: goto label_234c34;
        case 0x234c3cu: goto label_234c3c;
        case 0x234c44u: goto label_234c44;
        case 0x234ca8u: goto label_234ca8;
        default: break;
    }

    ctx->pc = 0x234bd0u;

    // 0x234bd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x234bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x234bd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x234bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x234bd8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x234bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x234bdc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x234bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x234be0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x234be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x234be4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x234be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x234be8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x234be8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234bec: 0xc064220  jal         func_190880
    ctx->pc = 0x234BECu;
    SET_GPR_U32(ctx, 31, 0x234BF4u);
    ctx->pc = 0x234BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234BECu;
            // 0x234bf0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234BF4u; }
        if (ctx->pc != 0x234BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234BF4u; }
        if (ctx->pc != 0x234BF4u) { return; }
    }
    ctx->pc = 0x234BF4u;
label_234bf4:
    // 0x234bf4: 0xc064220  jal         func_190880
    ctx->pc = 0x234BF4u;
    SET_GPR_U32(ctx, 31, 0x234BFCu);
    ctx->pc = 0x234BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234BF4u;
            // 0x234bf8: 0x8c501a14  lw          $s0, 0x1A14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6676)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234BFCu; }
        if (ctx->pc != 0x234BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234BFCu; }
        if (ctx->pc != 0x234BFCu) { return; }
    }
    ctx->pc = 0x234BFCu;
label_234bfc:
    // 0x234bfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x234bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c00: 0xc0bda20  jal         func_2F6880
    ctx->pc = 0x234C00u;
    SET_GPR_U32(ctx, 31, 0x234C08u);
    ctx->pc = 0x234C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234C00u;
            // 0x234c04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6880u;
    if (runtime->hasFunction(0x2F6880u)) {
        auto targetFn = runtime->lookupFunction(0x2F6880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234C08u; }
        if (ctx->pc != 0x234C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEventDay__9CSaveDataFi_0x2f6880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234C08u; }
        if (ctx->pc != 0x234C08u) { return; }
    }
    ctx->pc = 0x234C08u;
label_234c08:
    // 0x234c08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x234c08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234c0c: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x234C0Cu;
    {
        const bool branch_taken_0x234c0c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x234C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234C0Cu;
            // 0x234c10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c0c) {
            ctx->pc = 0x234C1Cu;
            goto label_234c1c;
        }
    }
    ctx->pc = 0x234C14u;
    // 0x234c14: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x234C14u;
    {
        const bool branch_taken_0x234c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234C14u;
            // 0x234c18: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c14) {
            ctx->pc = 0x234CECu;
            goto label_234cec;
        }
    }
    ctx->pc = 0x234C1Cu;
label_234c1c:
    // 0x234c1c: 0xc064220  jal         func_190880
    ctx->pc = 0x234C1Cu;
    SET_GPR_U32(ctx, 31, 0x234C24u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234C24u; }
        if (ctx->pc != 0x234C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234C24u; }
        if (ctx->pc != 0x234C24u) { return; }
    }
    ctx->pc = 0x234C24u;
label_234c24:
    // 0x234c24: 0xc064220  jal         func_190880
    ctx->pc = 0x234C24u;
    SET_GPR_U32(ctx, 31, 0x234C2Cu);
    ctx->pc = 0x234C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234C24u;
            // 0x234c28: 0xc4541a10  lwc1        $f20, 0x1A10($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234C2Cu; }
        if (ctx->pc != 0x234C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234C2Cu; }
        if (ctx->pc != 0x234C2Cu) { return; }
    }
    ctx->pc = 0x234C2Cu;
label_234c2c:
    // 0x234c2c: 0xc0bdab4  jal         func_2F6AD0
    ctx->pc = 0x234C2Cu;
    SET_GPR_U32(ctx, 31, 0x234C34u);
    ctx->pc = 0x234C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234C2Cu;
            // 0x234c30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6AD0u;
    if (runtime->hasFunction(0x2F6AD0u)) {
        auto targetFn = runtime->lookupFunction(0x2F6AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234C34u; }
        if (ctx->pc != 0x234C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNowTourEvent__9CSaveDataFv_0x2f6ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234C34u; }
        if (ctx->pc != 0x234C34u) { return; }
    }
    ctx->pc = 0x234C34u;
label_234c34:
    // 0x234c34: 0xc064220  jal         func_190880
    ctx->pc = 0x234C34u;
    SET_GPR_U32(ctx, 31, 0x234C3Cu);
    ctx->pc = 0x234C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234C34u;
            // 0x234c38: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234C3Cu; }
        if (ctx->pc != 0x234C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234C3Cu; }
        if (ctx->pc != 0x234C3Cu) { return; }
    }
    ctx->pc = 0x234C3Cu;
label_234c3c:
    // 0x234c3c: 0xc0bdab8  jal         func_2F6AE0
    ctx->pc = 0x234C3Cu;
    SET_GPR_U32(ctx, 31, 0x234C44u);
    ctx->pc = 0x234C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234C3Cu;
            // 0x234c40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6AE0u;
    if (runtime->hasFunction(0x2F6AE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F6AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234C44u; }
        if (ctx->pc != 0x234C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNowTourType__9CSaveDataFv_0x2f6ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234C44u; }
        if (ctx->pc != 0x234C44u) { return; }
    }
    ctx->pc = 0x234C44u;
label_234c44:
    // 0x234c44: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x234C44u;
    {
        const bool branch_taken_0x234c44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x234C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234C44u;
            // 0x234c48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c44) {
            ctx->pc = 0x234C50u;
            goto label_234c50;
        }
    }
    ctx->pc = 0x234C4Cu;
    // 0x234c4c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x234c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_234c50:
    // 0x234c50: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x234c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x234c54: 0x242001a  div         $zero, $s2, $v0
    ctx->pc = 0x234c54u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x234c58: 0x0  nop
    ctx->pc = 0x234c58u;
    // NOP
    // 0x234c5c: 0x0  nop
    ctx->pc = 0x234c5cu;
    // NOP
    // 0x234c60: 0x1810  mfhi        $v1
    ctx->pc = 0x234c60u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x234c64: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x234c64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x234c68: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x234C68u;
    {
        const bool branch_taken_0x234c68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x234C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234C68u;
            // 0x234c6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c68) {
            ctx->pc = 0x234C78u;
            goto label_234c78;
        }
    }
    ctx->pc = 0x234C70u;
    // 0x234c70: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x234C70u;
    {
        const bool branch_taken_0x234c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234c70) {
            ctx->pc = 0x234CE8u;
            goto label_234ce8;
        }
    }
    ctx->pc = 0x234C78u;
label_234c78:
    // 0x234c78: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x234C78u;
    {
        const bool branch_taken_0x234c78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x234C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234C78u;
            // 0x234c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c78) {
            ctx->pc = 0x234C88u;
            goto label_234c88;
        }
    }
    ctx->pc = 0x234C80u;
    // 0x234c80: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x234C80u;
    {
        const bool branch_taken_0x234c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234c80) {
            ctx->pc = 0x234CE8u;
            goto label_234ce8;
        }
    }
    ctx->pc = 0x234C88u;
label_234c88:
    // 0x234c88: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x234C88u;
    {
        const bool branch_taken_0x234c88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x234C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234C88u;
            // 0x234c8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c88) {
            ctx->pc = 0x234CB0u;
            goto label_234cb0;
        }
    }
    ctx->pc = 0x234C90u;
    // 0x234c90: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x234c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x234c94: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x234c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x234c98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x234c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x234c9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x234c9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x234ca0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x234CA0u;
    SET_GPR_U32(ctx, 31, 0x234CA8u);
    ctx->pc = 0x234CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234CA0u;
            // 0x234ca4: 0x290c0  sll         $s2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234CA8u; }
        if (ctx->pc != 0x234CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234CA8u; }
        if (ctx->pc != 0x234CA8u) { return; }
    }
    ctx->pc = 0x234CA8u;
label_234ca8:
    // 0x234ca8: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x234ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x234cac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x234cacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_234cb0:
    // 0x234cb0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x234CB0u;
    {
        const bool branch_taken_0x234cb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x234CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234CB0u;
            // 0x234cb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234cb0) {
            ctx->pc = 0x234CC0u;
            goto label_234cc0;
        }
    }
    ctx->pc = 0x234CB8u;
    // 0x234cb8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x234CB8u;
    {
        const bool branch_taken_0x234cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234CB8u;
            // 0x234cbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234cb8) {
            ctx->pc = 0x234CE8u;
            goto label_234ce8;
        }
    }
    ctx->pc = 0x234CC0u;
label_234cc0:
    // 0x234cc0: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x234CC0u;
    {
        const bool branch_taken_0x234cc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x234cc0) {
            ctx->pc = 0x234CD0u;
            goto label_234cd0;
        }
    }
    ctx->pc = 0x234CC8u;
    // 0x234cc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x234CC8u;
    {
        const bool branch_taken_0x234cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234cc8) {
            ctx->pc = 0x234CE8u;
            goto label_234ce8;
        }
    }
    ctx->pc = 0x234CD0u;
label_234cd0:
    // 0x234cd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x234cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x234cd4: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x234CD4u;
    {
        const bool branch_taken_0x234cd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x234cd4) {
            ctx->pc = 0x234CE4u;
            goto label_234ce4;
        }
    }
    ctx->pc = 0x234CDCu;
    // 0x234cdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x234CDCu;
    {
        const bool branch_taken_0x234cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234cdc) {
            ctx->pc = 0x234CE8u;
            goto label_234ce8;
        }
    }
    ctx->pc = 0x234CE4u;
label_234ce4:
    // 0x234ce4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x234ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234ce8:
    // 0x234ce8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x234ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_234cec:
    // 0x234cec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x234cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x234cf0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x234cf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x234cf4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x234cf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234cf8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x234cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234cfc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x234cfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234d00: 0x3e00008  jr          $ra
    ctx->pc = 0x234D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234D00u;
            // 0x234d04: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234D08u;
}

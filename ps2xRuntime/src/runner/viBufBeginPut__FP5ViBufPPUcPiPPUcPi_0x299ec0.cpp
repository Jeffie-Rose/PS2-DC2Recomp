#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: viBufBeginPut__FP5ViBufPPUcPiPPUcPi
// Address: 0x299ec0 - 0x299fbc
void viBufBeginPut__FP5ViBufPPUcPiPPUcPi_0x299ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufBeginPut__FP5ViBufPPUcPiPPUcPi_0x299ec0");
#endif

    switch (ctx->pc) {
        case 0x299ef8u: goto label_299ef8;
        case 0x299f9cu: goto label_299f9c;
        default: break;
    }

    ctx->pc = 0x299ec0u;

    // 0x299ec0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x299ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x299ec4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x299ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x299ec8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x299ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x299ecc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x299eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x299ed0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x299ed0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ed4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x299ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x299ed8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x299ed8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299edc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x299edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x299ee0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x299ee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ee4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x299ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x299ee8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x299ee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299eec: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x299eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x299ef0: 0xc044048  jal         func_110120
    ctx->pc = 0x299EF0u;
    SET_GPR_U32(ctx, 31, 0x299EF8u);
    ctx->pc = 0x299EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299EF0u;
            // 0x299ef4: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110120u;
    if (runtime->hasFunction(0x110120u)) {
        auto targetFn = runtime->lookupFunction(0x110120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299EF8u; }
        if (ctx->pc != 0x299EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x110120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299EF8u; }
        if (ctx->pc != 0x299EF8u) { return; }
    }
    ctx->pc = 0x299EF8u;
label_299ef8:
    // 0x299ef8: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x299ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x299efc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x299efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x299f00: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x299f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x299f04: 0x8e870018  lw          $a3, 0x18($s4)
    ctx->pc = 0x299f04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x299f08: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x299f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x299f0c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x299f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x299f10: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x299f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x299f14: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x299F14u;
    {
        const bool branch_taken_0x299f14 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x299F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299F14u;
            // 0x299f18: 0x47001a  div         $zero, $v0, $a3 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299f14) {
            ctx->pc = 0x299F20u;
            goto label_299f20;
        }
    }
    ctx->pc = 0x299F1Cu;
    // 0x299f1c: 0x1cd  break       0, 7
    ctx->pc = 0x299f1cu;
    runtime->handleBreak(rdram, ctx);
label_299f20:
    // 0x299f20: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x299f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x299f24: 0x2010  mfhi        $a0
    ctx->pc = 0x299f24u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x299f28: 0xe41023  subu        $v0, $a3, $a0
    ctx->pc = 0x299f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x299f2c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x299f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x299f30: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x299f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x299f34: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x299f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x299f38: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x299f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x299f3c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x299f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x299f40: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x299F40u;
    {
        const bool branch_taken_0x299f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299f40) {
            ctx->pc = 0x299F64u;
            goto label_299f64;
        }
    }
    ctx->pc = 0x299F48u;
    // 0x299f48: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x299f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x299f4c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x299f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x299f50: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x299f50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x299f54: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x299f54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x299f58: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x299f58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x299f5c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x299F5Cu;
    {
        const bool branch_taken_0x299f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299F5Cu;
            // 0x299f60: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299f5c) {
            ctx->pc = 0x299F94u;
            goto label_299f94;
        }
    }
    ctx->pc = 0x299F64u;
label_299f64:
    // 0x299f64: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x299f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x299f68: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x299f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x299f6c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x299f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x299f70: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x299f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x299f74: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x299f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x299f78: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x299f78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x299f7c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x299f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x299f80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x299f80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x299f84: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x299f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x299f88: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x299f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x299f8c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x299f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x299f90: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x299f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_299f94:
    // 0x299f94: 0xc044040  jal         func_110100
    ctx->pc = 0x299F94u;
    SET_GPR_U32(ctx, 31, 0x299F9Cu);
    ctx->pc = 0x299F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299F94u;
            // 0x299f98: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110100u;
    if (runtime->hasFunction(0x110100u)) {
        auto targetFn = runtime->lookupFunction(0x110100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299F9Cu; }
        if (ctx->pc != 0x299F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x110100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299F9Cu; }
        if (ctx->pc != 0x299F9Cu) { return; }
    }
    ctx->pc = 0x299F9Cu;
label_299f9c:
    // 0x299f9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x299f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x299fa0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x299fa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x299fa4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x299fa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299fa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x299fa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299fac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x299facu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299fb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x299fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x299FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299FB4u;
            // 0x299fb8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299FBCu;
}

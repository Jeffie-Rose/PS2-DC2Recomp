#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDefenceVol__16MOS_CHANGE_PARAMFi
// Address: 0x19a980 - 0x19aa08
void GetDefenceVol__16MOS_CHANGE_PARAMFi_0x19a980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDefenceVol__16MOS_CHANGE_PARAMFi_0x19a980");
#endif

    switch (ctx->pc) {
        case 0x19a9a8u: goto label_19a9a8;
        case 0x19a9bcu: goto label_19a9bc;
        case 0x19a9e4u: goto label_19a9e4;
        default: break;
    }

    ctx->pc = 0x19a980u;

    // 0x19a980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19a980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19a984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19a984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19a988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19a988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19a98c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19a98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19a990: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A990u;
    {
        const bool branch_taken_0x19a990 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x19A994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A990u;
            // 0x19a994: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a990) {
            ctx->pc = 0x19A9A0u;
            goto label_19a9a0;
        }
    }
    ctx->pc = 0x19A998u;
    // 0x19a998: 0x86250008  lh          $a1, 0x8($s1)
    ctx->pc = 0x19a998u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x19a99c: 0x0  nop
    ctx->pc = 0x19a99cu;
    // NOP
label_19a9a0:
    // 0x19a9a0: 0xc066a24  jal         func_19A890
    ctx->pc = 0x19A9A0u;
    SET_GPR_U32(ctx, 31, 0x19A9A8u);
    ctx->pc = 0x19A9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A9A0u;
            // 0x19a9a4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A890u;
    if (runtime->hasFunction(0x19A890u)) {
        auto targetFn = runtime->lookupFunction(0x19A890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9A8u; }
        if (ctx->pc != 0x19A9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterHengeParam__Fi_0x19a890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9A8u; }
        if (ctx->pc != 0x19A9A8u) { return; }
    }
    ctx->pc = 0x19A9A8u;
label_19a9a8:
    // 0x19a9a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19a9a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9ac: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x19A9ACu;
    {
        const bool branch_taken_0x19a9ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19A9ACu;
            // 0x19a9b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a9ac) {
            ctx->pc = 0x19A9E4u;
            goto label_19a9e4;
        }
    }
    ctx->pc = 0x19A9B4u;
    // 0x19a9b4: 0xc066a98  jal         func_19AA60
    ctx->pc = 0x19A9B4u;
    SET_GPR_U32(ctx, 31, 0x19A9BCu);
    ctx->pc = 0x19A9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A9B4u;
            // 0x19a9b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AA60u;
    if (runtime->hasFunction(0x19AA60u)) {
        auto targetFn = runtime->lookupFunction(0x19AA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9BCu; }
        if (ctx->pc != 0x19A9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDegreeLevel__16MOS_CHANGE_PARAMFv_0x19aa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9BCu; }
        if (ctx->pc != 0x19A9BCu) { return; }
    }
    ctx->pc = 0x19A9BCu;
label_19a9bc:
    // 0x19a9bc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x19a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x19a9c0: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x19a9c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19a9c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a9c8: 0x0  nop
    ctx->pc = 0x19a9c8u;
    // NOP
    // 0x19a9cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19a9ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19a9d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19a9d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a9d4: 0x0  nop
    ctx->pc = 0x19a9d4u;
    // NOP
    // 0x19a9d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19a9d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19a9dc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19A9DCu;
    SET_GPR_U32(ctx, 31, 0x19A9E4u);
    ctx->pc = 0x19A9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19A9DCu;
            // 0x19a9e0: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9E4u; }
        if (ctx->pc != 0x19A9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9E4u; }
        if (ctx->pc != 0x19A9E4u) { return; }
    }
    ctx->pc = 0x19A9E4u;
label_19a9e4:
    // 0x19a9e4: 0x284103e8  slti        $at, $v0, 0x3E8
    ctx->pc = 0x19a9e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x19a9e8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x19A9E8u;
    {
        const bool branch_taken_0x19a9e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a9e8) {
            ctx->pc = 0x19A9F4u;
            goto label_19a9f4;
        }
    }
    ctx->pc = 0x19A9F0u;
    // 0x19a9f0: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x19a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_19a9f4:
    // 0x19a9f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19a9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a9f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19a9f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a9fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19a9fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aa00: 0x3e00008  jr          $ra
    ctx->pc = 0x19AA00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AA00u;
            // 0x19aa04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AA08u;
}

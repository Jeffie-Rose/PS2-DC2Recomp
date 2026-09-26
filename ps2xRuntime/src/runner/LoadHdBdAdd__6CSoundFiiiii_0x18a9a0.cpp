#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadHdBdAdd__6CSoundFiiiii
// Address: 0x18a9a0 - 0x18ac80
void LoadHdBdAdd__6CSoundFiiiii_0x18a9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadHdBdAdd__6CSoundFiiiii_0x18a9a0");
#endif

    switch (ctx->pc) {
        case 0x18aa10u: goto label_18aa10;
        case 0x18aa24u: goto label_18aa24;
        case 0x18aae8u: goto label_18aae8;
        case 0x18ab24u: goto label_18ab24;
        case 0x18ab80u: goto label_18ab80;
        case 0x18aba8u: goto label_18aba8;
        default: break;
    }

    ctx->pc = 0x18a9a0u;

    // 0x18a9a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18a9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18a9a4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x18a9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18a9a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18a9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x18a9ac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18a9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18a9b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18a9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18a9b4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18a9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18a9b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18a9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18a9bc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18a9c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18a9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18a9c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18a9c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18a9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18a9cc: 0x24422420  addiu       $v0, $v0, 0x2420
    ctx->pc = 0x18a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9248));
    // 0x18a9d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18a9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18a9d4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x18a9d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a9d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a9dc: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x18a9dcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18a9e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a9e4: 0x528821  addu        $s1, $v0, $s2
    ctx->pc = 0x18a9e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18a9e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18a9ec: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x18a9ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a9f0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x18a9f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a9f4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x18a9f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a9f8: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x18a9f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x18a9fc: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A9FCu;
    {
        const bool branch_taken_0x18a9fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A9FCu;
            // 0x18aa00: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a9fc) {
            ctx->pc = 0x18AA18u;
            goto label_18aa18;
        }
    }
    ctx->pc = 0x18AA04u;
    // 0x18aa04: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x18aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x18aa08: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x18AA08u;
    SET_GPR_U32(ctx, 31, 0x18AA10u);
    ctx->pc = 0x18AA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA08u;
            // 0x18aa0c: 0x24844860  addiu       $a0, $a0, 0x4860 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA10u; }
        if (ctx->pc != 0x18AA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA10u; }
        if (ctx->pc != 0x18AA10u) { return; }
    }
    ctx->pc = 0x18AA10u;
label_18aa10:
    // 0x18aa10: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x18AA10u;
    {
        const bool branch_taken_0x18aa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA10u;
            // 0x18aa14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa10) {
            ctx->pc = 0x18AC58u;
            goto label_18ac58;
        }
    }
    ctx->pc = 0x18AA18u;
label_18aa18:
    // 0x18aa18: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x18aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x18aa1c: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x18AA1Cu;
    SET_GPR_U32(ctx, 31, 0x18AA24u);
    ctx->pc = 0x18AA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA1Cu;
            // 0x18aa20: 0x248448b0  addiu       $a0, $a0, 0x48B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA24u; }
        if (ctx->pc != 0x18AA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AA24u; }
        if (ctx->pc != 0x18AA24u) { return; }
    }
    ctx->pc = 0x18AA24u;
label_18aa24:
    // 0x18aa24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18aa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18aa28: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18aa2c: 0x24422394  addiu       $v0, $v0, 0x2394
    ctx->pc = 0x18aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9108));
    // 0x18aa30: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18aa30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x18aa34: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x18aa34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18aa38: 0xac232340  sw          $v1, 0x2340($at)
    ctx->pc = 0x18aa38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9024), GPR_U32(ctx, 3));
    // 0x18aa3c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x18aa3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18aa40: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18AA40u;
    {
        const bool branch_taken_0x18aa40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA40u;
            // 0x18aa44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa40) {
            ctx->pc = 0x18AA64u;
            goto label_18aa64;
        }
    }
    ctx->pc = 0x18AA48u;
    // 0x18aa48: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18aa4c: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18aa4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x18aa50: 0x2442242c  addiu       $v0, $v0, 0x242C
    ctx->pc = 0x18aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9260));
    // 0x18aa54: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x18aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18aa58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18aa5c: 0xac222350  sw          $v0, 0x2350($at)
    ctx->pc = 0x18aa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9040), GPR_U32(ctx, 2));
    // 0x18aa60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18aa64:
    // 0x18aa64: 0x14820008  bne         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18AA64u;
    {
        const bool branch_taken_0x18aa64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x18AA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA64u;
            // 0x18aa68: 0x3c03003d  lui         $v1, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa64) {
            ctx->pc = 0x18AA88u;
            goto label_18aa88;
        }
    }
    ctx->pc = 0x18AA6Cu;
    // 0x18aa6c: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x18aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x18aa70: 0x2463242c  addiu       $v1, $v1, 0x242C
    ctx->pc = 0x18aa70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9260));
    // 0x18aa74: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18aa74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x18aa78: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x18aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x18aa7c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18aa80: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x18aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18aa84: 0xac222350  sw          $v0, 0x2350($at)
    ctx->pc = 0x18aa84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9040), GPR_U32(ctx, 2));
label_18aa88:
    // 0x18aa88: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18AA88u;
    {
        const bool branch_taken_0x18aa88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AA88u;
            // 0x18aa8c: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa88) {
            ctx->pc = 0x18AAA8u;
            goto label_18aaa8;
        }
    }
    ctx->pc = 0x18AA90u;
    // 0x18aa90: 0x26630010  addiu       $v1, $s3, 0x10
    ctx->pc = 0x18aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x18aa94: 0x2442242c  addiu       $v0, $v0, 0x242C
    ctx->pc = 0x18aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9260));
    // 0x18aa98: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x18aa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18aa9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18aaa0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18aaa4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x18aaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_18aaa8:
    // 0x18aaa8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x18aaa8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18aaac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18aab0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18AAB0u;
    {
        const bool branch_taken_0x18aab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18AAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AAB0u;
            // 0x18aab4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aab0) {
            ctx->pc = 0x18AAD8u;
            goto label_18aad8;
        }
    }
    ctx->pc = 0x18AAB8u;
    // 0x18aab8: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x18aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x18aabc: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x18aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x18aac0: 0x2463242c  addiu       $v1, $v1, 0x242C
    ctx->pc = 0x18aac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9260));
    // 0x18aac4: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x18aac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x18aac8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18aacc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x18aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18aad0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x18aad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x18aad4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x18aad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_18aad8:
    // 0x18aad8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18aad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aadc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x18aadcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aae0: 0xc0622e4  jal         func_188B90
    ctx->pc = 0x18AAE0u;
    SET_GPR_U32(ctx, 31, 0x18AAE8u);
    ctx->pc = 0x18AAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AAE0u;
            // 0x18aae4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188B90u;
    if (runtime->hasFunction(0x188B90u)) {
        auto targetFn = runtime->lookupFunction(0x188B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AAE8u; }
        if (ctx->pc != 0x18AAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TransHdBd__Fiiii_0x188b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AAE8u; }
        if (ctx->pc != 0x18AAE8u) { return; }
    }
    ctx->pc = 0x18AAE8u;
label_18aae8:
    // 0x18aae8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18aaec: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x18aaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x18aaf0: 0x244223e0  addiu       $v0, $v0, 0x23E0
    ctx->pc = 0x18aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9184));
    // 0x18aaf4: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x18aaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x18aaf8: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x18aaf8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18aafc: 0x24632390  addiu       $v1, $v1, 0x2390
    ctx->pc = 0x18aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9104));
    // 0x18ab00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ab04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18ab04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab08: 0x8c242344  lw          $a0, 0x2344($at)
    ctx->pc = 0x18ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9028)));
    // 0x18ab0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18ab0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab10: 0x724021  addu        $t0, $v1, $s2
    ctx->pc = 0x18ab10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x18ab14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18ab18: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x18ab18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x18ab1c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18AB1Cu;
    {
        const bool branch_taken_0x18ab1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AB1Cu;
            // 0x18ab20: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab1c) {
            ctx->pc = 0x18AB54u;
            goto label_18ab54;
        }
    }
    ctx->pc = 0x18AB24u;
label_18ab24:
    // 0x18ab24: 0x8d02009c  lw          $v0, 0x9C($t0)
    ctx->pc = 0x18ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 156)));
    // 0x18ab28: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x18ab28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x18ab2c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x18ab2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x18ab30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18ab30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18ab34: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x18ab34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18ab38: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x18ab38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18ab3c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18ab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18ab40: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x18ab40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18ab44: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18ab48: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18ab48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ab4c: 0xac820094  sw          $v0, 0x94($a0)
    ctx->pc = 0x18ab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 2));
    // 0x18ab50: 0xac82009c  sw          $v0, 0x9C($a0)
    ctx->pc = 0x18ab50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 2));
label_18ab54:
    // 0x18ab54: 0x0  nop
    ctx->pc = 0x18ab54u;
    // NOP
    // 0x18ab58: 0x8d02004c  lw          $v0, 0x4C($t0)
    ctx->pc = 0x18ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x18ab5c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x18ab5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18ab60: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x18AB60u;
    {
        const bool branch_taken_0x18ab60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AB60u;
            // 0x18ab64: 0x1072021  addu        $a0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab60) {
            ctx->pc = 0x18AB24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18ab24;
        }
    }
    ctx->pc = 0x18AB68u;
    // 0x18ab68: 0x3c13003d  lui         $s3, 0x3D
    ctx->pc = 0x18ab68u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)61 << 16));
    // 0x18ab6c: 0x34029050  ori         $v0, $zero, 0x9050
    ctx->pc = 0x18ab6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36944);
    // 0x18ab70: 0x26732340  addiu       $s3, $s3, 0x2340
    ctx->pc = 0x18ab70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 9024));
    // 0x18ab74: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x18ab74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18ab78: 0xc062c94  jal         func_18B250
    ctx->pc = 0x18AB78u;
    SET_GPR_U32(ctx, 31, 0x18AB80u);
    ctx->pc = 0x18AB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18AB78u;
            // 0x18ab7c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AB80u; }
        if (ctx->pc != 0x18AB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18AB80u; }
        if (ctx->pc != 0x18AB80u) { return; }
    }
    ctx->pc = 0x18AB80u;
label_18ab80:
    // 0x18ab80: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x18ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x18ab84: 0x24632398  addiu       $v1, $v1, 0x2398
    ctx->pc = 0x18ab84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9112));
    // 0x18ab88: 0x728021  addu        $s0, $v1, $s2
    ctx->pc = 0x18ab88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x18ab8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x18ab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18ab90: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x18AB90u;
    {
        const bool branch_taken_0x18ab90 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x18ab90) {
            ctx->pc = 0x18ABA8u;
            goto label_18aba8;
        }
    }
    ctx->pc = 0x18AB98u;
    // 0x18ab98: 0x24627fff  addiu       $v0, $v1, 0x7FFF
    ctx->pc = 0x18ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x18ab9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18ab9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aba0: 0xc062c94  jal         func_18B250
    ctx->pc = 0x18ABA0u;
    SET_GPR_U32(ctx, 31, 0x18ABA8u);
    ctx->pc = 0x18ABA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18ABA0u;
            // 0x18aba4: 0x24441051  addiu       $a0, $v0, 0x1051 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4177));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ABA8u; }
        if (ctx->pc != 0x18ABA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18ABA8u; }
        if (ctx->pc != 0x18ABA8u) { return; }
    }
    ctx->pc = 0x18ABA8u;
label_18aba8:
    // 0x18aba8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18aba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18abac: 0x4800027  bltz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x18ABACu;
    {
        const bool branch_taken_0x18abac = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x18abac) {
            ctx->pc = 0x18AC4Cu;
            goto label_18ac4c;
        }
    }
    ctx->pc = 0x18ABB4u;
    // 0x18abb4: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x18abb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18abb8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18abb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18abbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18abbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18abc0: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x18abc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x18abc4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18abc8: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x18abc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x18abcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18abccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18abd0: 0x24e7242c  addiu       $a3, $a3, 0x242C
    ctx->pc = 0x18abd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9260));
    // 0x18abd4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x18abd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18abd8: 0x24a523e0  addiu       $a1, $a1, 0x23E0
    ctx->pc = 0x18abd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9184));
    // 0x18abdc: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x18abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x18abe0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x18abe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18abe4: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x18abe4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x18abe8: 0xf22021  addu        $a0, $a3, $s2
    ctx->pc = 0x18abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x18abec: 0x2883021  addu        $a2, $s4, $t0
    ctx->pc = 0x18abecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x18abf0: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x18abf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x18abf4: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x18abf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18abf8: 0x24632420  addiu       $v1, $v1, 0x2420
    ctx->pc = 0x18abf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9248));
    // 0x18abfc: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x18abfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x18ac00: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x18ac00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18ac04: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18ac04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18ac08: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18ac08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18ac0c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18ac10: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18ac14: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18ac14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18ac18: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18ac1c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x18ac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x18ac20: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x18ac20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x18ac24: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18ac24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18ac28: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18ac28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18ac2c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18ac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18ac30: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18ac30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18ac34: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18ac34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18ac38: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18ac3c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18ac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ac40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18ac44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18ac48: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x18ac48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_18ac4c:
    // 0x18ac4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18ac50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18ac54: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x18ac54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_18ac58:
    // 0x18ac58: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18ac58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18ac5c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18ac5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18ac60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18ac60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18ac64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18ac64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ac68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18ac68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ac6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ac6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ac70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ac70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ac74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ac74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ac78: 0x3e00008  jr          $ra
    ctx->pc = 0x18AC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18AC78u;
            // 0x18ac7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18AC80u;
}

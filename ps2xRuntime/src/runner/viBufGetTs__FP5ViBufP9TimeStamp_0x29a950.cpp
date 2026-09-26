#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: viBufGetTs__FP5ViBufP9TimeStamp
// Address: 0x29a950 - 0x29ab10
void viBufGetTs__FP5ViBufP9TimeStamp_0x29a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("viBufGetTs__FP5ViBufP9TimeStamp_0x29a950");
#endif

    switch (ctx->pc) {
        case 0x29a9c0u: goto label_29a9c0;
        case 0x29aa0cu: goto label_29aa0c;
        case 0x29aae8u: goto label_29aae8;
        default: break;
    }

    ctx->pc = 0x29a950u;

    // 0x29a950: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29a954: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x29a954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x29a958: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x29a958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x29a95c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29a95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29a960: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29a960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29a964: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x29a964u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a968: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29a968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29a96c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29a96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29a970: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29a970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29a974: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29a974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29a97c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29a97cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a980: 0x8c252020  lw          $a1, 0x2020($at)
    ctx->pc = 0x29a980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8224)));
    // 0x29a984: 0x8c870038  lw          $a3, 0x38($a0)
    ctx->pc = 0x29a984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x29a988: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x29a988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29a98c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x29a98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x29a990: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x29a990u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x29a994: 0x8c23b410  lw          $v1, -0x4BF0($at)
    ctx->pc = 0x29a994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947856)));
    // 0x29a998: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x29a998u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x29a99c: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x29a99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x29a9a0: 0x30c60003  andi        $a2, $a2, 0x3
    ctx->pc = 0x29a9a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x29a9a4: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x29a9a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x29a9a8: 0x282c0  sll         $s0, $v0, 11
    ctx->pc = 0x29a9a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x29a9ac: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x29a9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x29a9b0: 0x30f3007f  andi        $s3, $a3, 0x7F
    ctx->pc = 0x29a9b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x29a9b4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x29a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x29a9b8: 0xc044048  jal         func_110120
    ctx->pc = 0x29A9B8u;
    SET_GPR_U32(ctx, 31, 0x29A9C0u);
    ctx->pc = 0x29A9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A9B8u;
            // 0x29a9bc: 0x62a023  subu        $s4, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110120u;
    if (runtime->hasFunction(0x110120u)) {
        auto targetFn = runtime->lookupFunction(0x110120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A9C0u; }
        if (ctx->pc != 0x29A9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x110120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A9C0u; }
        if (ctx->pc != 0x29A9C0u) { return; }
    }
    ctx->pc = 0x29A9C0u;
label_29a9c0:
    // 0x29a9c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29a9c4: 0x1310c3  sra         $v0, $s3, 3
    ctx->pc = 0x29a9c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 3));
    // 0x29a9c8: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x29a9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x29a9cc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x29a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x29a9d0: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x29a9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x29a9d4: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x29a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29a9d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x29a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29a9dc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x29a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a9e0: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29A9E0u;
    {
        const bool branch_taken_0x29a9e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A9E0u;
            // 0x29a9e4: 0x50001b  divu        $zero, $v0, $s0 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a9e0) {
            ctx->pc = 0x29A9ECu;
            goto label_29a9ec;
        }
    }
    ctx->pc = 0x29A9E8u;
    // 0x29a9e8: 0x1cd  break       0, 7
    ctx->pc = 0x29a9e8u;
    runtime->handleBreak(rdram, ctx);
label_29a9ec:
    // 0x29a9ec: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x29a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x29a9f0: 0x1010  mfhi        $v0
    ctx->pc = 0x29a9f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x29a9f4: 0x8e45005c  lw          $a1, 0x5C($s2)
    ctx->pc = 0x29a9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x29a9f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29a9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9fc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x29a9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29aa00: 0x504021  addu        $t0, $v0, $s0
    ctx->pc = 0x29aa00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29aa04: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x29AA04u;
    {
        const bool branch_taken_0x29aa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AA04u;
            // 0x29aa08: 0xa31023  subu        $v0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa04) {
            ctx->pc = 0x29AAC4u;
            goto label_29aac4;
        }
    }
    ctx->pc = 0x29AA0Cu;
label_29aa0c:
    // 0x29aa0c: 0x8e470054  lw          $a3, 0x54($s2)
    ctx->pc = 0x29aa0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x29aa10: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x29aa10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29aa14: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x29aa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x29aa18: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x29AA18u;
    {
        const bool branch_taken_0x29aa18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AA18u;
            // 0x29aa1c: 0xa7001a  div         $zero, $a1, $a3 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa18) {
            ctx->pc = 0x29AA24u;
            goto label_29aa24;
        }
    }
    ctx->pc = 0x29AA20u;
    // 0x29aa20: 0x1cd  break       0, 7
    ctx->pc = 0x29aa20u;
    runtime->handleBreak(rdram, ctx);
label_29aa24:
    // 0x29aa24: 0x4810  mfhi        $t1
    ctx->pc = 0x29aa24u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x29aa28: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x29aa28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x29aa2c: 0x93840  sll         $a3, $t1, 1
    ctx->pc = 0x29aa2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x29aa30: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x29aa30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x29aa34: 0x750c0  sll         $t2, $a3, 3
    ctx->pc = 0x29aa34u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x29aa38: 0xaa4821  addu        $t1, $a1, $t2
    ctx->pc = 0x29aa38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x29aa3c: 0x8d250010  lw          $a1, 0x10($t1)
    ctx->pc = 0x29aa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x29aa40: 0x1052823  subu        $a1, $t0, $a1
    ctx->pc = 0x29aa40u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x29aa44: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29AA44u;
    {
        const bool branch_taken_0x29aa44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AA44u;
            // 0x29aa48: 0xb0001a  div         $zero, $a1, $s0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa44) {
            ctx->pc = 0x29AA50u;
            goto label_29aa50;
        }
    }
    ctx->pc = 0x29AA4Cu;
    // 0x29aa4c: 0x1cd  break       0, 7
    ctx->pc = 0x29aa4cu;
    runtime->handleBreak(rdram, ctx);
label_29aa50:
    // 0x29aa50: 0x8d250014  lw          $a1, 0x14($t1)
    ctx->pc = 0x29aa50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x29aa54: 0x3810  mfhi        $a3
    ctx->pc = 0x29aa54u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x29aa58: 0xe5282a  slt         $a1, $a3, $a1
    ctx->pc = 0x29aa58u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29aa5c: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x29AA5Cu;
    {
        const bool branch_taken_0x29aa5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x29aa5c) {
            ctx->pc = 0x29AABCu;
            goto label_29aabc;
        }
    }
    ctx->pc = 0x29AA64u;
    // 0x29aa64: 0xdd250000  ld          $a1, 0x0($t1)
    ctx->pc = 0x29aa64u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x29aa68: 0xfe250000  sd          $a1, 0x0($s1)
    ctx->pc = 0x29aa68u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 5));
    // 0x29aa6c: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x29aa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x29aa70: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x29aa70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x29aa74: 0xdca50008  ld          $a1, 0x8($a1)
    ctx->pc = 0x29aa74u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x29aa78: 0xfe250008  sd          $a1, 0x8($s1)
    ctx->pc = 0x29aa78u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 5));
    // 0x29aa7c: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x29aa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x29aa80: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x29aa80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x29aa84: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x29aa84u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x29aa88: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x29aa88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x29aa8c: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x29aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x29aa90: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x29aa90u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x29aa94: 0x8e470058  lw          $a3, 0x58($s2)
    ctx->pc = 0x29aa94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x29aa98: 0x1ce00003  bgtz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x29AA98u;
    {
        const bool branch_taken_0x29aa98 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x29AA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AA98u;
            // 0x29aa9c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa98) {
            ctx->pc = 0x29AAA8u;
            goto label_29aaa8;
        }
    }
    ctx->pc = 0x29AAA0u;
    // 0x29aaa0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29AAA0u;
    {
        const bool branch_taken_0x29aaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29aaa0) {
            ctx->pc = 0x29AAACu;
            goto label_29aaac;
        }
    }
    ctx->pc = 0x29AAA8u;
label_29aaa8:
    // 0x29aaa8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x29aaa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29aaac:
    // 0x29aaac: 0x0  nop
    ctx->pc = 0x29aaacu;
    // NOP
    // 0x29aab0: 0x8e450058  lw          $a1, 0x58($s2)
    ctx->pc = 0x29aab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x29aab4: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x29aab4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x29aab8: 0xae450058  sw          $a1, 0x58($s2)
    ctx->pc = 0x29aab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 5));
label_29aabc:
    // 0x29aabc: 0x0  nop
    ctx->pc = 0x29aabcu;
    // NOP
    // 0x29aac0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x29aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_29aac4:
    // 0x29aac4: 0x0  nop
    ctx->pc = 0x29aac4u;
    // NOP
    // 0x29aac8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x29aac8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29aacc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x29AACCu;
    {
        const bool branch_taken_0x29aacc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29aacc) {
            ctx->pc = 0x29AADCu;
            goto label_29aadc;
        }
    }
    ctx->pc = 0x29AAD4u;
    // 0x29aad4: 0x12a0ffcd  beqz        $s5, . + 4 + (-0x33 << 2)
    ctx->pc = 0x29AAD4u;
    {
        const bool branch_taken_0x29aad4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x29aad4) {
            ctx->pc = 0x29AA0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29aa0c;
        }
    }
    ctx->pc = 0x29AADCu;
label_29aadc:
    // 0x29aadc: 0x0  nop
    ctx->pc = 0x29aadcu;
    // NOP
    // 0x29aae0: 0xc044040  jal         func_110100
    ctx->pc = 0x29AAE0u;
    SET_GPR_U32(ctx, 31, 0x29AAE8u);
    ctx->pc = 0x29AAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29AAE0u;
            // 0x29aae4: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110100u;
    if (runtime->hasFunction(0x110100u)) {
        auto targetFn = runtime->lookupFunction(0x110100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AAE8u; }
        if (ctx->pc != 0x29AAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x110100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29AAE8u; }
        if (ctx->pc != 0x29AAE8u) { return; }
    }
    ctx->pc = 0x29AAE8u;
label_29aae8:
    // 0x29aae8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x29aae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29aaec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29aaf0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29aaf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29aaf4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29aaf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29aaf8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29aaf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29aafc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29aafcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ab00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29ab00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ab04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ab04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ab08: 0x3e00008  jr          $ra
    ctx->pc = 0x29AB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29AB08u;
            // 0x29ab0c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29AB10u;
}

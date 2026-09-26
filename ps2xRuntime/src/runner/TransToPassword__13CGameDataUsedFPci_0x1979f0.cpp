#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TransToPassword__13CGameDataUsedFPci
// Address: 0x1979f0 - 0x197c0c
void TransToPassword__13CGameDataUsedFPci_0x1979f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TransToPassword__13CGameDataUsedFPci_0x1979f0");
#endif

    switch (ctx->pc) {
        case 0x197a28u: goto label_197a28;
        case 0x197a50u: goto label_197a50;
        case 0x197bc0u: goto label_197bc0;
        default: break;
    }

    ctx->pc = 0x1979f0u;

    // 0x1979f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1979f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1979f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1979f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1979f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1979f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1979fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1979fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x197a00: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x197a00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x197a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x197a08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x197a08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x197a10: 0x12400077  beqz        $s2, . + 4 + (0x77 << 2)
    ctx->pc = 0x197A10u;
    {
        const bool branch_taken_0x197a10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197A10u;
            // 0x197a14: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a10) {
            ctx->pc = 0x197BF0u;
            goto label_197bf0;
        }
    }
    ctx->pc = 0x197A18u;
    // 0x197a18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x197a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a20: 0xc049c86  jal         func_127218
    ctx->pc = 0x197A20u;
    SET_GPR_U32(ctx, 31, 0x197A28u);
    ctx->pc = 0x197A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197A20u;
            // 0x197a24: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197A28u; }
        if (ctx->pc != 0x197A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197A28u; }
        if (ctx->pc != 0x197A28u) { return; }
    }
    ctx->pc = 0x197A28u;
label_197a28:
    // 0x197a28: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x197a28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x197a2c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x197a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x197a30: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197A30u;
    {
        const bool branch_taken_0x197a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x197A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197A30u;
            // 0x197a34: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a30) {
            ctx->pc = 0x197A40u;
            goto label_197a40;
        }
    }
    ctx->pc = 0x197A38u;
    // 0x197a38: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x197A38u;
    {
        const bool branch_taken_0x197a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197A38u;
            // 0x197a3c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a38) {
            ctx->pc = 0x197BF4u;
            goto label_197bf4;
        }
    }
    ctx->pc = 0x197A40u;
label_197a40:
    // 0x197a40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x197a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a44: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x197a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x197a48: 0xc049c86  jal         func_127218
    ctx->pc = 0x197A48u;
    SET_GPR_U32(ctx, 31, 0x197A50u);
    ctx->pc = 0x197A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197A48u;
            // 0x197a4c: 0x26700010  addiu       $s0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197A50u; }
        if (ctx->pc != 0x197A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197A50u; }
        if (ctx->pc != 0x197A50u) { return; }
    }
    ctx->pc = 0x197A50u;
label_197a50:
    // 0x197a50: 0x86660002  lh          $a2, 0x2($s3)
    ctx->pc = 0x197a50u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x197a54: 0x2405fe00  addiu       $a1, $zero, -0x200
    ctx->pc = 0x197a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x197a58: 0x97ab0050  lhu         $t3, 0x50($sp)
    ctx->pc = 0x197a58u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197a5c: 0x27a70051  addiu       $a3, $sp, 0x51
    ctx->pc = 0x197a5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 81));
    // 0x197a60: 0x240ffffd  addiu       $t7, $zero, -0x3
    ctx->pc = 0x197a60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x197a64: 0x240eff83  addiu       $t6, $zero, -0x7D
    ctx->pc = 0x197a64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967171));
    // 0x197a68: 0x27a80052  addiu       $t0, $sp, 0x52
    ctx->pc = 0x197a68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 82));
    // 0x197a6c: 0x2404ff80  addiu       $a0, $zero, -0x80
    ctx->pc = 0x197a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x197a70: 0x2403c07f  addiu       $v1, $zero, -0x3F81
    ctx->pc = 0x197a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294951039));
    // 0x197a74: 0x240d8000  addiu       $t5, $zero, -0x8000
    ctx->pc = 0x197a74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x197a78: 0x27a90058  addiu       $t1, $sp, 0x58
    ctx->pc = 0x197a78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x197a7c: 0x240cff3f  addiu       $t4, $zero, -0xC1
    ctx->pc = 0x197a7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x197a80: 0x30c601ff  andi        $a2, $a2, 0x1FF
    ctx->pc = 0x197a80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
    // 0x197a84: 0x27aa005a  addiu       $t2, $sp, 0x5A
    ctx->pc = 0x197a84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 90));
    // 0x197a88: 0x1652824  and         $a1, $t3, $a1
    ctx->pc = 0x197a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & GPR_U64(ctx, 5));
    // 0x197a8c: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x197a8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x197a90: 0x240b807f  addiu       $t3, $zero, -0x7F81
    ctx->pc = 0x197a90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934655));
    // 0x197a94: 0xa7a60050  sh          $a2, 0x50($sp)
    ctx->pc = 0x197a94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 80), (uint16_t)GPR_U32(ctx, 6));
    // 0x197a98: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x197a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x197a9c: 0x82180015  lb          $t8, 0x15($s0)
    ctx->pc = 0x197a9cu;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x197aa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x197aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197aa4: 0x90f90000  lbu         $t9, 0x0($a3)
    ctx->pc = 0x197aa4u;
    SET_GPR_U32(ctx, 25, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x197aa8: 0x33180001  andi        $t8, $t8, 0x1
    ctx->pc = 0x197aa8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x197aac: 0x32f7824  and         $t7, $t9, $t7
    ctx->pc = 0x197aacu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 25) & GPR_U64(ctx, 15));
    // 0x197ab0: 0x18c040  sll         $t8, $t8, 1
    ctx->pc = 0x197ab0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x197ab4: 0x1f87825  or          $t7, $t7, $t8
    ctx->pc = 0x197ab4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 24));
    // 0x197ab8: 0xa0ef0000  sb          $t7, 0x0($a3)
    ctx->pc = 0x197ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 15));
    // 0x197abc: 0x920f003a  lbu         $t7, 0x3A($s0)
    ctx->pc = 0x197abcu;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x197ac0: 0x90f80000  lbu         $t8, 0x0($a3)
    ctx->pc = 0x197ac0u;
    SET_GPR_U32(ctx, 24, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x197ac4: 0x31ef001f  andi        $t7, $t7, 0x1F
    ctx->pc = 0x197ac4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)31);
    // 0x197ac8: 0x30e7024  and         $t6, $t8, $t6
    ctx->pc = 0x197ac8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 24) & GPR_U64(ctx, 14));
    // 0x197acc: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x197accu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x197ad0: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x197ad0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x197ad4: 0xa0ee0000  sb          $t6, 0x0($a3)
    ctx->pc = 0x197ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x197ad8: 0x960e002e  lhu         $t6, 0x2E($s0)
    ctx->pc = 0x197ad8u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x197adc: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x197adcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x197ae0: 0x31ce007f  andi        $t6, $t6, 0x7F
    ctx->pc = 0x197ae0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)127);
    // 0x197ae4: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x197ae4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x197ae8: 0xee3825  or          $a3, $a3, $t6
    ctx->pc = 0x197ae8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 14));
    // 0x197aec: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x197aecu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x197af0: 0x9607002c  lhu         $a3, 0x2C($s0)
    ctx->pc = 0x197af0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x197af4: 0x950f0000  lhu         $t7, 0x0($t0)
    ctx->pc = 0x197af4u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x197af8: 0x30e7007f  andi        $a3, $a3, 0x7F
    ctx->pc = 0x197af8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x197afc: 0x771c0  sll         $t6, $a3, 7
    ctx->pc = 0x197afcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x197b00: 0x1e33824  and         $a3, $t7, $v1
    ctx->pc = 0x197b00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) & GPR_U64(ctx, 3));
    // 0x197b04: 0xee3825  or          $a3, $a3, $t6
    ctx->pc = 0x197b04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 14));
    // 0x197b08: 0xa5070000  sh          $a3, 0x0($t0)
    ctx->pc = 0x197b08u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x197b0c: 0x960e0018  lhu         $t6, 0x18($s0)
    ctx->pc = 0x197b0cu;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x197b10: 0x97a80054  lhu         $t0, 0x54($sp)
    ctx->pc = 0x197b10u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x197b14: 0x97a70056  lhu         $a3, 0x56($sp)
    ctx->pc = 0x197b14u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 86)));
    // 0x197b18: 0x31ce7fff  andi        $t6, $t6, 0x7FFF
    ctx->pc = 0x197b18u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)32767);
    // 0x197b1c: 0x10d4024  and         $t0, $t0, $t5
    ctx->pc = 0x197b1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 13));
    // 0x197b20: 0x10e4025  or          $t0, $t0, $t6
    ctx->pc = 0x197b20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 14));
    // 0x197b24: 0xed3824  and         $a3, $a3, $t5
    ctx->pc = 0x197b24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 13));
    // 0x197b28: 0xa7a80054  sh          $t0, 0x54($sp)
    ctx->pc = 0x197b28u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 84), (uint16_t)GPR_U32(ctx, 8));
    // 0x197b2c: 0x9608001a  lhu         $t0, 0x1A($s0)
    ctx->pc = 0x197b2cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x197b30: 0x31087fff  andi        $t0, $t0, 0x7FFF
    ctx->pc = 0x197b30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32767);
    // 0x197b34: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x197b34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x197b38: 0xa7a70056  sh          $a3, 0x56($sp)
    ctx->pc = 0x197b38u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 86), (uint16_t)GPR_U32(ctx, 7));
    // 0x197b3c: 0x96080026  lhu         $t0, 0x26($s0)
    ctx->pc = 0x197b3cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x197b40: 0x91270000  lbu         $a3, 0x0($t1)
    ctx->pc = 0x197b40u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x197b44: 0x3108007f  andi        $t0, $t0, 0x7F
    ctx->pc = 0x197b44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)127);
    // 0x197b48: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x197b48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x197b4c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x197b4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x197b50: 0xa1270000  sb          $a3, 0x0($t1)
    ctx->pc = 0x197b50u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x197b54: 0x96070028  lhu         $a3, 0x28($s0)
    ctx->pc = 0x197b54u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x197b58: 0x95280000  lhu         $t0, 0x0($t1)
    ctx->pc = 0x197b58u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x197b5c: 0x30e7007f  andi        $a3, $a3, 0x7F
    ctx->pc = 0x197b5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x197b60: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x197b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x197b64: 0x739c0  sll         $a3, $a3, 7
    ctx->pc = 0x197b64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x197b68: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x197b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x197b6c: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x197b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x197b70: 0x92070016  lbu         $a3, 0x16($s0)
    ctx->pc = 0x197b70u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x197b74: 0x93a30059  lbu         $v1, 0x59($sp)
    ctx->pc = 0x197b74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 89)));
    // 0x197b78: 0x30e70003  andi        $a3, $a3, 0x3
    ctx->pc = 0x197b78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x197b7c: 0x6c1824  and         $v1, $v1, $t4
    ctx->pc = 0x197b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 12));
    // 0x197b80: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x197b80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x197b84: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x197b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x197b88: 0xa3a30059  sb          $v1, 0x59($sp)
    ctx->pc = 0x197b88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 89), (uint8_t)GPR_U32(ctx, 3));
    // 0x197b8c: 0x9607002a  lhu         $a3, 0x2A($s0)
    ctx->pc = 0x197b8cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x197b90: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x197b90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x197b94: 0x30e7007f  andi        $a3, $a3, 0x7F
    ctx->pc = 0x197b94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x197b98: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x197b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x197b9c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x197b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x197ba0: 0xa1430000  sb          $v1, 0x0($t2)
    ctx->pc = 0x197ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x197ba4: 0x92040038  lbu         $a0, 0x38($s0)
    ctx->pc = 0x197ba4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x197ba8: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x197ba8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x197bac: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x197bacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x197bb0: 0x6b1824  and         $v1, $v1, $t3
    ctx->pc = 0x197bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x197bb4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x197bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x197bb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x197BB8u;
    {
        const bool branch_taken_0x197bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197BB8u;
            // 0x197bbc: 0xa5430000  sh          $v1, 0x0($t2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bb8) {
            ctx->pc = 0x197BD0u;
            goto label_197bd0;
        }
    }
    ctx->pc = 0x197BC0u;
label_197bc0:
    // 0x197bc0: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x197bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x197bc4: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x197bc4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197bc8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x197bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x197bcc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x197bccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_197bd0:
    // 0x197bd0: 0xd1082a  slt         $at, $a2, $s1
    ctx->pc = 0x197bd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x197bd4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x197BD4u;
    {
        const bool branch_taken_0x197bd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x197BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197BD4u;
            // 0x197bd8: 0x28c3000e  slti        $v1, $a2, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bd4) {
            ctx->pc = 0x197BE4u;
            goto label_197be4;
        }
    }
    ctx->pc = 0x197BDCu;
    // 0x197bdc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x197BDCu;
    {
        const bool branch_taken_0x197bdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x197BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197BDCu;
            // 0x197be0: 0xa62021  addu        $a0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bdc) {
            ctx->pc = 0x197BC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_197bc0;
        }
    }
    ctx->pc = 0x197BE4u;
label_197be4:
    // 0x197be4: 0x0  nop
    ctx->pc = 0x197be4u;
    // NOP
    // 0x197be8: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x197be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x197bec: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x197becu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_197bf0:
    // 0x197bf0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x197bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_197bf4:
    // 0x197bf4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x197bf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197bf8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x197bf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197bfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x197bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197c00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197c04: 0x3e00008  jr          $ra
    ctx->pc = 0x197C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197C04u;
            // 0x197c08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197C0Cu;
}

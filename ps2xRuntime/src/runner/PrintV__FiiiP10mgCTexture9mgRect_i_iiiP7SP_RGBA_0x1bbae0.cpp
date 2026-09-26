#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PrintV__FiiiP10mgCTexture9mgRect<i>iiiP7SP_RGBA
// Address: 0x1bbae0 - 0x1bbd74
void PrintV__FiiiP10mgCTexture9mgRect_i_iiiP7SP_RGBA_0x1bbae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PrintV__FiiiP10mgCTexture9mgRect_i_iiiP7SP_RGBA_0x1bbae0");
#endif

    switch (ctx->pc) {
        case 0x1bbb74u: goto label_1bbb74;
        case 0x1bbba8u: goto label_1bbba8;
        case 0x1bbbdcu: goto label_1bbbdc;
        case 0x1bbc30u: goto label_1bbc30;
        case 0x1bbc58u: goto label_1bbc58;
        case 0x1bbc60u: goto label_1bbc60;
        case 0x1bbc70u: goto label_1bbc70;
        case 0x1bbc78u: goto label_1bbc78;
        case 0x1bbc84u: goto label_1bbc84;
        case 0x1bbc90u: goto label_1bbc90;
        case 0x1bbcb0u: goto label_1bbcb0;
        case 0x1bbcccu: goto label_1bbccc;
        case 0x1bbcf8u: goto label_1bbcf8;
        case 0x1bbd2cu: goto label_1bbd2c;
        case 0x1bbd48u: goto label_1bbd48;
        default: break;
    }

    ctx->pc = 0x1bbae0u;

    // 0x1bbae0: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x1bbae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
    // 0x1bbae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbae8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1bbae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1bbaec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1bbaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1bbaf0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1bbaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1bbaf4: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x1bbaf4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbaf8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1bbaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1bbafc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1bbafcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb00: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bbb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bbb04: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1bbb04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bbb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bbb0c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1bbb0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bbb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bbb14: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1bbb14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bbb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bbb1c: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x1bbb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1bbb20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bbb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bbb24: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x1bbb24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1bbb28: 0x79050000  lq          $a1, 0x0($t0)
    ctx->pc = 0x1bbb28u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1bbb2c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1bbb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bbb30: 0x8fb10300  lw          $s1, 0x300($sp)
    ctx->pc = 0x1bbb30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1bbb34: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1bbb34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1bbb38: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x1bbb38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bbb3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb40: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x1bbb40u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
    // 0x1bbb44: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x1bbb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x1bbb48: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x1bbb48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
    // 0x1bbb4c: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1bbb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x1bbb50: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x1bbb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x1bbb54: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x1bbb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x1bbb58: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BBB58u;
    {
        const bool branch_taken_0x1bbb58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB58u;
            // 0x1bbb5c: 0xafa400b4  sw          $a0, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb58) {
            ctx->pc = 0x1BBBC8u;
            goto label_1bbbc8;
        }
    }
    ctx->pc = 0x1BBB60u;
    // 0x1bbb60: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x1bbb60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1bbb64: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1BBB64u;
    {
        const bool branch_taken_0x1bbb64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB64u;
            // 0x1bbb68: 0x2665fff7  addiu       $a1, $s3, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb64) {
            ctx->pc = 0x1BBB94u;
            goto label_1bbb94;
        }
    }
    ctx->pc = 0x1BBB6Cu;
    // 0x1bbb6c: 0x3c0305f5  lui         $v1, 0x5F5
    ctx->pc = 0x1bbb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1525 << 16));
    // 0x1bbb70: 0x3464e100  ori         $a0, $v1, 0xE100
    ctx->pc = 0x1bbb70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57600);
label_1bbb74:
    // 0x1bbb74: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1bbb74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bbb78: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1bbb78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1bbb7c: 0x105182a  slt         $v1, $t0, $a1
    ctx->pc = 0x1bbb7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1bbb80: 0x0  nop
    ctx->pc = 0x1bbb80u;
    // NOP
    // 0x1bbb84: 0x0  nop
    ctx->pc = 0x1bbb84u;
    // NOP
    // 0x1bbb88: 0x0  nop
    ctx->pc = 0x1bbb88u;
    // NOP
    // 0x1bbb8c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BBB8Cu;
    {
        const bool branch_taken_0x1bbb8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb8c) {
            ctx->pc = 0x1BBB74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bbb74;
        }
    }
    ctx->pc = 0x1BBB94u;
label_1bbb94:
    // 0x1bbb94: 0x0  nop
    ctx->pc = 0x1bbb94u;
    // NOP
    // 0x1bbb98: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x1bbb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1bbb9c: 0x104082a  slt         $at, $t0, $a0
    ctx->pc = 0x1bbb9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1bbba0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BBBA0u;
    {
        const bool branch_taken_0x1bbba0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbba0) {
            ctx->pc = 0x1BBBC8u;
            goto label_1bbbc8;
        }
    }
    ctx->pc = 0x1BBBA8u;
label_1bbba8:
    // 0x1bbba8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1bbba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bbbac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1bbbacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1bbbb0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1bbbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bbbb4: 0x104182a  slt         $v1, $t0, $a0
    ctx->pc = 0x1bbbb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1bbbb8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1bbbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1bbbbc: 0x0  nop
    ctx->pc = 0x1bbbbcu;
    // NOP
    // 0x1bbbc0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BBBC0u;
    {
        const bool branch_taken_0x1bbbc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbbc0) {
            ctx->pc = 0x1BBBA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bbba8;
        }
    }
    ctx->pc = 0x1BBBC8u;
label_1bbbc8:
    // 0x1bbbc8: 0x2667ffff  addiu       $a3, $s3, -0x1
    ctx->pc = 0x1bbbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1bbbcc: 0x4e00014  bltz        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BBBCCu;
    {
        const bool branch_taken_0x1bbbcc = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1BBBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBBCCu;
            // 0x1bbbd0: 0x74880  sll         $t1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbbcc) {
            ctx->pc = 0x1BBC20u;
            goto label_1bbc20;
        }
    }
    ctx->pc = 0x1BBBD4u;
    // 0x1bbbd4: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x1bbbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x1bbbd8: 0x34646667  ori         $a0, $v1, 0x6667
    ctx->pc = 0x1bbbd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_1bbbdc:
    // 0x1bbbdc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BBBDCu;
    {
        const bool branch_taken_0x1bbbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBBDCu;
            // 0x1bbbe0: 0xc2001a  div         $zero, $a2, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbbdc) {
            ctx->pc = 0x1BBBE8u;
            goto label_1bbbe8;
        }
    }
    ctx->pc = 0x1BBBE4u;
    // 0x1bbbe4: 0x1cd  break       0, 7
    ctx->pc = 0x1bbbe4u;
    runtime->handleBreak(rdram, ctx);
label_1bbbe8:
    // 0x1bbbe8: 0x4012  mflo        $t0
    ctx->pc = 0x1bbbe8u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1bbbec: 0x13d2821  addu        $a1, $t1, $sp
    ctx->pc = 0x1bbbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x1bbbf0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1bbbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1bbbf4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1bbbf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1bbbf8: 0x2529fffc  addiu       $t1, $t1, -0x4
    ctx->pc = 0x1bbbf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x1bbbfc: 0xaca800a0  sw          $t0, 0xA0($a1)
    ctx->pc = 0x1bbbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 160), GPR_U32(ctx, 8));
    // 0x1bbc00: 0x1022818  mult        $a1, $t0, $v0
    ctx->pc = 0x1bbc00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bbc04: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x1bbc04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bbc08: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x1bbc08u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1bbc0c: 0x0  nop
    ctx->pc = 0x1bbc0cu;
    // NOP
    // 0x1bbc10: 0x1010  mfhi        $v0
    ctx->pc = 0x1bbc10u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bbc14: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1bbc14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1bbc18: 0x4e1fff0  bgez        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1BBC18u;
    {
        const bool branch_taken_0x1bbc18 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1BBC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC18u;
            // 0x1bbc1c: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc18) {
            ctx->pc = 0x1BBBDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bbbdc;
        }
    }
    ctx->pc = 0x1BBC20u;
label_1bbc20:
    // 0x1bbc20: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x1bbc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1bbc24: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1BBC24u;
    {
        const bool branch_taken_0x1bbc24 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1BBC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC24u;
            // 0x1bbc28: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc24) {
            ctx->pc = 0x1BBC50u;
            goto label_1bbc50;
        }
    }
    ctx->pc = 0x1BBC2Cu;
    // 0x1bbc2c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1bbc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1bbc30:
    // 0x1bbc30: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x1bbc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x1bbc34: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x1bbc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1bbc38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBC38u;
    {
        const bool branch_taken_0x1bbc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbc38) {
            ctx->pc = 0x1BBC50u;
            goto label_1bbc50;
        }
    }
    ctx->pc = 0x1BBC40u;
    // 0x1bbc40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1bbc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bbc44: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1bbc44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1bbc48: 0x1c60fff9  bgtz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BBC48u;
    {
        const bool branch_taken_0x1bbc48 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1BBC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC48u;
            // 0x1bbc4c: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc48) {
            ctx->pc = 0x1BBC30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bbc30;
        }
    }
    ctx->pc = 0x1BBC50u;
label_1bbc50:
    // 0x1bbc50: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1BBC50u;
    SET_GPR_U32(ctx, 31, 0x1BBC58u);
    ctx->pc = 0x1BBC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC50u;
            // 0x1bbc54: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC58u; }
        if (ctx->pc != 0x1BBC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC58u; }
        if (ctx->pc != 0x1BBC58u) { return; }
    }
    ctx->pc = 0x1BBC58u;
label_1bbc58:
    // 0x1bbc58: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1BBC58u;
    SET_GPR_U32(ctx, 31, 0x1BBC60u);
    ctx->pc = 0x1BBC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC58u;
            // 0x1bbc5c: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC60u; }
        if (ctx->pc != 0x1BBC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC60u; }
        if (ctx->pc != 0x1BBC60u) { return; }
    }
    ctx->pc = 0x1BBC60u;
label_1bbc60:
    // 0x1bbc60: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bbc60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bbc64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc68: 0xc04d104  jal         func_134410
    ctx->pc = 0x1BBC68u;
    SET_GPR_U32(ctx, 31, 0x1BBC70u);
    ctx->pc = 0x1BBC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC68u;
            // 0x1bbc6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC70u; }
        if (ctx->pc != 0x1BBC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC70u; }
        if (ctx->pc != 0x1BBC70u) { return; }
    }
    ctx->pc = 0x1BBC70u;
label_1bbc70:
    // 0x1bbc70: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BBC70u;
    SET_GPR_U32(ctx, 31, 0x1BBC78u);
    ctx->pc = 0x1BBC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC70u;
            // 0x1bbc74: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC78u; }
        if (ctx->pc != 0x1BBC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC78u; }
        if (ctx->pc != 0x1BBC78u) { return; }
    }
    ctx->pc = 0x1BBC78u;
label_1bbc78:
    // 0x1bbc78: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bbc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bbc7c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BBC7Cu;
    SET_GPR_U32(ctx, 31, 0x1BBC84u);
    ctx->pc = 0x1BBC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC7Cu;
            // 0x1bbc80: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC84u; }
        if (ctx->pc != 0x1BBC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC84u; }
        if (ctx->pc != 0x1BBC84u) { return; }
    }
    ctx->pc = 0x1BBC84u;
label_1bbc84:
    // 0x1bbc84: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1bbc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc88: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BBC88u;
    SET_GPR_U32(ctx, 31, 0x1BBC90u);
    ctx->pc = 0x1BBC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC88u;
            // 0x1bbc8c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC90u; }
        if (ctx->pc != 0x1BBC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBC90u; }
        if (ctx->pc != 0x1BBC90u) { return; }
    }
    ctx->pc = 0x1BBC90u;
label_1bbc90:
    // 0x1bbc90: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BBC90u;
    {
        const bool branch_taken_0x1bbc90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBC90u;
            // 0x1bbc94: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc90) {
            ctx->pc = 0x1BBCB8u;
            goto label_1bbcb8;
        }
    }
    ctx->pc = 0x1BBC98u;
    // 0x1bbc98: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1bbc98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bbc9c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1bbc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bbca0: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x1bbca0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1bbca4: 0x8e28000c  lw          $t0, 0xC($s1)
    ctx->pc = 0x1bbca4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1bbca8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BBCA8u;
    SET_GPR_U32(ctx, 31, 0x1BBCB0u);
    ctx->pc = 0x1BBCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBCA8u;
            // 0x1bbcac: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBCB0u; }
        if (ctx->pc != 0x1BBCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBCB0u; }
        if (ctx->pc != 0x1BBCB0u) { return; }
    }
    ctx->pc = 0x1BBCB0u;
label_1bbcb0:
    // 0x1bbcb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BBCB0u;
    {
        const bool branch_taken_0x1bbcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbcb0) {
            ctx->pc = 0x1BBCCCu;
            goto label_1bbccc;
        }
    }
    ctx->pc = 0x1BBCB8u;
label_1bbcb8:
    // 0x1bbcb8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bbcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bbcbc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bbcbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcc0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1bbcc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcc4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BBCC4u;
    SET_GPR_U32(ctx, 31, 0x1BBCCCu);
    ctx->pc = 0x1BBCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBCC4u;
            // 0x1bbcc8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBCCCu; }
        if (ctx->pc != 0x1BBCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBCCCu; }
        if (ctx->pc != 0x1BBCCCu) { return; }
    }
    ctx->pc = 0x1BBCCCu;
label_1bbccc:
    // 0x1bbccc: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBCCCu;
    {
        const bool branch_taken_0x1bbccc = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1bbccc) {
            ctx->pc = 0x1BBCDCu;
            goto label_1bbcdc;
        }
    }
    ctx->pc = 0x1BBCD4u;
    // 0x1bbcd4: 0x8fb20098  lw          $s2, 0x98($sp)
    ctx->pc = 0x1bbcd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bbcd8: 0x0  nop
    ctx->pc = 0x1bbcd8u;
    // NOP
label_1bbcdc:
    // 0x1bbcdc: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBCDCu;
    {
        const bool branch_taken_0x1bbcdc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBCDCu;
            // 0x1bbce0: 0x2701023  subu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbcdc) {
            ctx->pc = 0x1BBCECu;
            goto label_1bbcec;
        }
    }
    ctx->pc = 0x1BBCE4u;
    // 0x1bbce4: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1bbce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bbce8: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x1bbce8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1bbcec:
    // 0x1bbcec: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1bbcecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1bbcf0: 0x6000012  bltz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BBCF0u;
    {
        const bool branch_taken_0x1bbcf0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1BBCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBCF0u;
            // 0x1bbcf4: 0x108880  sll         $s1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbcf0) {
            ctx->pc = 0x1BBD3Cu;
            goto label_1bbd3c;
        }
    }
    ctx->pc = 0x1BBCF8u;
label_1bbcf8:
    // 0x1bbcf8: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x1bbcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x1bbcfc: 0x8fa8009c  lw          $t0, 0x9C($sp)
    ctx->pc = 0x1bbcfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1bbd00: 0x8c4300a0  lw          $v1, 0xA0($v0)
    ctx->pc = 0x1bbd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1bbd04: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1bbd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1bbd08: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x1bbd08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1bbd0c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1bbd0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd10: 0x8faa0094  lw          $t2, 0x94($sp)
    ctx->pc = 0x1bbd10u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x1bbd14: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1bbd14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd18: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1bbd18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1bbd1c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1bbd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bbd20: 0xe31818  mult        $v1, $a3, $v1
    ctx->pc = 0x1bbd20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1bbd24: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BBD24u;
    SET_GPR_U32(ctx, 31, 0x1BBD2Cu);
    ctx->pc = 0x1BBD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBD24u;
            // 0x1bbd28: 0x434821  addu        $t1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBD2Cu; }
        if (ctx->pc != 0x1BBD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBD2Cu; }
        if (ctx->pc != 0x1BBD2Cu) { return; }
    }
    ctx->pc = 0x1BBD2Cu;
label_1bbd2c:
    // 0x1bbd2c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1bbd2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1bbd30: 0x2b2a821  addu        $s5, $s5, $s2
    ctx->pc = 0x1bbd30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x1bbd34: 0x601fff0  bgez        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1BBD34u;
    {
        const bool branch_taken_0x1bbd34 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1BBD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBD34u;
            // 0x1bbd38: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbd34) {
            ctx->pc = 0x1BBCF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bbcf8;
        }
    }
    ctx->pc = 0x1BBD3Cu;
label_1bbd3c:
    // 0x1bbd3c: 0x0  nop
    ctx->pc = 0x1bbd3cu;
    // NOP
    // 0x1bbd40: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BBD40u;
    SET_GPR_U32(ctx, 31, 0x1BBD48u);
    ctx->pc = 0x1BBD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBD40u;
            // 0x1bbd44: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBD48u; }
        if (ctx->pc != 0x1BBD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBD48u; }
        if (ctx->pc != 0x1BBD48u) { return; }
    }
    ctx->pc = 0x1BBD48u;
label_1bbd48:
    // 0x1bbd48: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1bbd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bbd4c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1bbd4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bbd50: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1bbd50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bbd54: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bbd54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bbd58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bbd58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bbd5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bbd5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbd60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bbd60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bbd64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bbd64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbd68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bbd68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBD6Cu;
            // 0x1bbd70: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBD74u;
}

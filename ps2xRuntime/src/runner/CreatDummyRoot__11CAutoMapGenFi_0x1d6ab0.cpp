#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatDummyRoot__11CAutoMapGenFi
// Address: 0x1d6ab0 - 0x1d7028
void CreatDummyRoot__11CAutoMapGenFi_0x1d6ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatDummyRoot__11CAutoMapGenFi_0x1d6ab0");
#endif

    switch (ctx->pc) {
        case 0x1d6ae8u: goto label_1d6ae8;
        case 0x1d6af4u: goto label_1d6af4;
        case 0x1d6b04u: goto label_1d6b04;
        case 0x1d6b30u: goto label_1d6b30;
        case 0x1d6b90u: goto label_1d6b90;
        case 0x1d6c70u: goto label_1d6c70;
        case 0x1d6c78u: goto label_1d6c78;
        case 0x1d6cb8u: goto label_1d6cb8;
        case 0x1d6cc0u: goto label_1d6cc0;
        case 0x1d6d30u: goto label_1d6d30;
        case 0x1d6d38u: goto label_1d6d38;
        case 0x1d6d54u: goto label_1d6d54;
        case 0x1d6d88u: goto label_1d6d88;
        case 0x1d6eccu: goto label_1d6ecc;
        case 0x1d6f7cu: goto label_1d6f7c;
        case 0x1d6f84u: goto label_1d6f84;
        case 0x1d6fd4u: goto label_1d6fd4;
        case 0x1d6fdcu: goto label_1d6fdc;
        default: break;
    }

    ctx->pc = 0x1d6ab0u;

    // 0x1d6ab0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1d6ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1d6ab4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1d6ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1d6ab8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d6ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1d6abc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d6abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d6ac0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d6ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d6ac4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d6ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d6ac8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1d6ac8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6acc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d6accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d6ad0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d6ad0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ad4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d6ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d6ad8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d6ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d6adc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d6ae0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d6ae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ae4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d6ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d6ae8:
    // 0x1d6ae8: 0x86c201b8  lh          $v0, 0x1B8($s6)
    ctx->pc = 0x1d6ae8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d6aec: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D6AECu;
    SET_GPR_U32(ctx, 31, 0x1D6AF4u);
    ctx->pc = 0x1D6AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6AECu;
            // 0x1d6af0: 0x2444fffd  addiu       $a0, $v0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6AF4u; }
        if (ctx->pc != 0x1D6AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6AF4u; }
        if (ctx->pc != 0x1D6AF4u) { return; }
    }
    ctx->pc = 0x1D6AF4u;
label_1d6af4:
    // 0x1d6af4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d6af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6af8: 0x86c201ba  lh          $v0, 0x1BA($s6)
    ctx->pc = 0x1d6af8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 442)));
    // 0x1d6afc: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D6AFCu;
    SET_GPR_U32(ctx, 31, 0x1D6B04u);
    ctx->pc = 0x1D6B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6AFCu;
            // 0x1d6b00: 0x2444fffd  addiu       $a0, $v0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6B04u; }
        if (ctx->pc != 0x1D6B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6B04u; }
        if (ctx->pc != 0x1D6B04u) { return; }
    }
    ctx->pc = 0x1D6B04u;
label_1d6b04:
    // 0x1d6b04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d6b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6b08: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d6b08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6b0c: 0x262a0003  addiu       $t2, $s1, 0x3
    ctx->pc = 0x1d6b0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x1d6b10: 0x22a082a  slt         $at, $s1, $t2
    ctx->pc = 0x1d6b10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1d6b14: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D6B14u;
    {
        const bool branch_taken_0x1d6b14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6B14u;
            // 0x1d6b18: 0x220602d  daddu       $t4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b14) {
            ctx->pc = 0x1D6B6Cu;
            goto label_1d6b6c;
        }
    }
    ctx->pc = 0x1D6B1Cu;
    // 0x1d6b1c: 0x86c901b8  lh          $t1, 0x1B8($s6)
    ctx->pc = 0x1d6b1cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d6b20: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1d6b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d6b24: 0x8ec801cc  lw          $t0, 0x1CC($s6)
    ctx->pc = 0x1d6b24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 460)));
    // 0x1d6b28: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1d6b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d6b2c: 0x33880  sll         $a3, $v1, 2
    ctx->pc = 0x1d6b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d6b30:
    // 0x1d6b30: 0x1892018  mult        $a0, $t4, $t1
    ctx->pc = 0x1d6b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d6b34: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1d6b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1d6b38: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1d6b38u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x1d6b3c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1d6b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d6b40: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d6b40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d6b44: 0x18a182a  slt         $v1, $t4, $t2
    ctx->pc = 0x1d6b44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1d6b48: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1d6b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1d6b4c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1d6b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1d6b50: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1d6b50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d6b54: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x1d6b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1d6b58: 0x1665825  or          $t3, $t3, $a2
    ctx->pc = 0x1d6b58u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 6));
    // 0x1d6b5c: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x1d6b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1d6b60: 0x1655825  or          $t3, $t3, $a1
    ctx->pc = 0x1d6b60u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 5));
    // 0x1d6b64: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1D6B64u;
    {
        const bool branch_taken_0x1d6b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6B64u;
            // 0x1d6b68: 0x1645825  or          $t3, $t3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6b64) {
            ctx->pc = 0x1D6B30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d6b30;
        }
    }
    ctx->pc = 0x1D6B6Cu;
label_1d6b6c:
    // 0x1d6b6c: 0x0  nop
    ctx->pc = 0x1d6b6cu;
    // NOP
    // 0x1d6b70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d6b70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d6b74: 0x2a4103e8  slti        $at, $s2, 0x3E8
    ctx->pc = 0x1d6b74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x1d6b78: 0x1020011f  beqz        $at, . + 4 + (0x11F << 2)
    ctx->pc = 0x1D6B78u;
    {
        const bool branch_taken_0x1d6b78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6b78) {
            ctx->pc = 0x1D6FF8u;
            goto label_1d6ff8;
        }
    }
    ctx->pc = 0x1D6B80u;
    // 0x1d6b80: 0x1560ffd9  bnez        $t3, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1D6B80u;
    {
        const bool branch_taken_0x1d6b80 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6b80) {
            ctx->pc = 0x1D6AE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d6ae8;
        }
    }
    ctx->pc = 0x1D6B88u;
    // 0x1d6b88: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D6B88u;
    SET_GPR_U32(ctx, 31, 0x1D6B90u);
    ctx->pc = 0x1D6B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6B88u;
            // 0x1d6b8c: 0x8ec40274  lw          $a0, 0x274($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 628)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6B90u; }
        if (ctx->pc != 0x1D6B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6B90u; }
        if (ctx->pc != 0x1D6B90u) { return; }
    }
    ctx->pc = 0x1D6B90u;
label_1d6b90:
    // 0x1d6b90: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d6b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d6b94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d6b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d6b98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d6b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d6b9c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1d6b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1d6ba0: 0x244701d4  addiu       $a3, $v0, 0x1D4
    ctx->pc = 0x1d6ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 468));
    // 0x1d6ba4: 0x8c4201e0  lw          $v0, 0x1E0($v0)
    ctx->pc = 0x1d6ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 480)));
    // 0x1d6ba8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6BA8u;
    {
        const bool branch_taken_0x1d6ba8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D6BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6BA8u;
            // 0x1d6bac: 0x23043  sra         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ba8) {
            ctx->pc = 0x1D6BB8u;
            goto label_1d6bb8;
        }
    }
    ctx->pc = 0x1D6BB0u;
    // 0x1d6bb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d6bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d6bb4: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x1d6bb4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
label_1d6bb8:
    // 0x1d6bb8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1d6bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1d6bbc: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1d6bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1d6bc0: 0x66b821  addu        $s7, $v1, $a2
    ctx->pc = 0x1d6bc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1d6bc4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6BC4u;
    {
        const bool branch_taken_0x1d6bc4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D6BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6BC4u;
            // 0x1d6bc8: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6bc4) {
            ctx->pc = 0x1D6BD4u;
            goto label_1d6bd4;
        }
    }
    ctx->pc = 0x1D6BCCu;
    // 0x1d6bcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d6bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d6bd0: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1d6bd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_1d6bd4:
    // 0x1d6bd4: 0x2173023  subu        $a2, $s0, $s7
    ctx->pc = 0x1d6bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x1d6bd8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1d6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1d6bdc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1d6bdcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6be0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d6be0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6be4: 0x0  nop
    ctx->pc = 0x1d6be4u;
    // NOP
    // 0x1d6be8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1d6be8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1d6bec: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1d6becu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6bf0: 0x0  nop
    ctx->pc = 0x1d6bf0u;
    // NOP
    // 0x1d6bf4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6BF4u;
    {
        const bool branch_taken_0x1d6bf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D6BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6BF4u;
            // 0x1d6bf8: 0x43f021  addu        $fp, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6bf4) {
            ctx->pc = 0x1D6C00u;
            goto label_1d6c00;
        }
    }
    ctx->pc = 0x1D6BFCu;
    // 0x1d6bfc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1d6bfcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1d6c00:
    // 0x1d6c00: 0x23e1023  subu        $v0, $s1, $fp
    ctx->pc = 0x1d6c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x1d6c04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d6c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6c08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6c08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6c0c: 0x0  nop
    ctx->pc = 0x1d6c0cu;
    // NOP
    // 0x1d6c10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d6c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d6c14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d6c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6c18: 0x0  nop
    ctx->pc = 0x1d6c18u;
    // NOP
    // 0x1d6c1c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6C1Cu;
    {
        const bool branch_taken_0x1d6c1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6c1c) {
            ctx->pc = 0x1D6C28u;
            goto label_1d6c28;
        }
    }
    ctx->pc = 0x1D6C24u;
    // 0x1d6c24: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1d6c24u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1d6c28:
    // 0x1d6c28: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1d6c28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6c2c: 0x0  nop
    ctx->pc = 0x1d6c2cu;
    // NOP
    // 0x1d6c30: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x1D6C30u;
    {
        const bool branch_taken_0x1d6c30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6c30) {
            ctx->pc = 0x1D6C80u;
            goto label_1d6c80;
        }
    }
    ctx->pc = 0x1D6C38u;
    // 0x1d6c38: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6C38u;
    {
        const bool branch_taken_0x1d6c38 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1D6C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6C38u;
            // 0x1d6c3c: 0x24120008  addiu       $s2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c38) {
            ctx->pc = 0x1D6C44u;
            goto label_1d6c44;
        }
    }
    ctx->pc = 0x1D6C40u;
    // 0x1d6c40: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1d6c40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d6c44:
    // 0x1d6c44: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1d6c44u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6c48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6c48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6c4c: 0x0  nop
    ctx->pc = 0x1d6c4cu;
    // NOP
    // 0x1d6c50: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d6c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d6c54: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1d6c54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6c58: 0x0  nop
    ctx->pc = 0x1d6c58u;
    // NOP
    // 0x1d6c5c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6C5Cu;
    {
        const bool branch_taken_0x1d6c5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6c5c) {
            ctx->pc = 0x1D6C68u;
            goto label_1d6c68;
        }
    }
    ctx->pc = 0x1D6C64u;
    // 0x1d6c64: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1d6c64u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_1d6c68:
    // 0x1d6c68: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D6C68u;
    SET_GPR_U32(ctx, 31, 0x1D6C70u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6C70u; }
        if (ctx->pc != 0x1D6C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6C70u; }
        if (ctx->pc != 0x1D6C70u) { return; }
    }
    ctx->pc = 0x1D6C70u;
label_1d6c70:
    // 0x1d6c70: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D6C70u;
    SET_GPR_U32(ctx, 31, 0x1D6C78u);
    ctx->pc = 0x1D6C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6C70u;
            // 0x1d6c74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6C78u; }
        if (ctx->pc != 0x1D6C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6C78u; }
        if (ctx->pc != 0x1D6C78u) { return; }
    }
    ctx->pc = 0x1D6C78u;
label_1d6c78:
    // 0x1d6c78: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D6C78u;
    {
        const bool branch_taken_0x1d6c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6C78u;
            // 0x1d6c7c: 0x24530001  addiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c78) {
            ctx->pc = 0x1D6CC4u;
            goto label_1d6cc4;
        }
    }
    ctx->pc = 0x1D6C80u;
label_1d6c80:
    // 0x1d6c80: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6C80u;
    {
        const bool branch_taken_0x1d6c80 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D6C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6C80u;
            // 0x1d6c84: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6c80) {
            ctx->pc = 0x1D6C8Cu;
            goto label_1d6c8c;
        }
    }
    ctx->pc = 0x1D6C88u;
    // 0x1d6c88: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1d6c88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d6c8c:
    // 0x1d6c8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d6c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6c90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6c90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6c94: 0x0  nop
    ctx->pc = 0x1d6c94u;
    // NOP
    // 0x1d6c98: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d6c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d6c9c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1d6c9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6ca0: 0x0  nop
    ctx->pc = 0x1d6ca0u;
    // NOP
    // 0x1d6ca4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6CA4u;
    {
        const bool branch_taken_0x1d6ca4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6ca4) {
            ctx->pc = 0x1D6CB0u;
            goto label_1d6cb0;
        }
    }
    ctx->pc = 0x1D6CACu;
    // 0x1d6cac: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1d6cacu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_1d6cb0:
    // 0x1d6cb0: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D6CB0u;
    SET_GPR_U32(ctx, 31, 0x1D6CB8u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CB8u; }
        if (ctx->pc != 0x1D6CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CB8u; }
        if (ctx->pc != 0x1D6CB8u) { return; }
    }
    ctx->pc = 0x1D6CB8u;
label_1d6cb8:
    // 0x1d6cb8: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D6CB8u;
    SET_GPR_U32(ctx, 31, 0x1D6CC0u);
    ctx->pc = 0x1D6CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6CB8u;
            // 0x1d6cbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CC0u; }
        if (ctx->pc != 0x1D6CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6CC0u; }
        if (ctx->pc != 0x1D6CC0u) { return; }
    }
    ctx->pc = 0x1D6CC0u;
label_1d6cc0:
    // 0x1d6cc0: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x1d6cc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d6cc4:
    // 0x1d6cc4: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x1d6cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d6cc8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6CC8u;
    {
        const bool branch_taken_0x1d6cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6cc8) {
            ctx->pc = 0x1D6CD4u;
            goto label_1d6cd4;
        }
    }
    ctx->pc = 0x1D6CD0u;
    // 0x1d6cd0: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1d6cd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d6cd4:
    // 0x1d6cd4: 0x86c601b8  lh          $a2, 0x1B8($s6)
    ctx->pc = 0x1d6cd4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d6cd8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d6cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d6cdc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d6cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d6ce0: 0x8ec301cc  lw          $v1, 0x1CC($s6)
    ctx->pc = 0x1d6ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 460)));
    // 0x1d6ce4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d6ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d6ce8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d6ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6cec: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d6cecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6cf0: 0x2263818  mult        $a3, $s1, $a2
    ctx->pc = 0x1d6cf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1d6cf4: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x1d6cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1d6cf8: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1d6cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1d6cfc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d6cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d6d00: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1d6d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1d6d04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d6d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d6d08: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1d6d08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x1d6d0c: 0x86c601b8  lh          $a2, 0x1B8($s6)
    ctx->pc = 0x1d6d0cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d6d10: 0x8ec301cc  lw          $v1, 0x1CC($s6)
    ctx->pc = 0x1d6d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 460)));
    // 0x1d6d14: 0x72263818  mult1       $a3, $s1, $a2
    ctx->pc = 0x1d6d14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1d6d18: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x1d6d18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1d6d1c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1d6d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1d6d20: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d6d20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d6d24: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1d6d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1d6d28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6d2c: 0xa4550008  sh          $s5, 0x8($v0)
    ctx->pc = 0x1d6d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 21));
label_1d6d30:
    // 0x1d6d30: 0x1a600069  blez        $s3, . + 4 + (0x69 << 2)
    ctx->pc = 0x1D6D30u;
    {
        const bool branch_taken_0x1d6d30 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x1d6d30) {
            ctx->pc = 0x1D6ED8u;
            goto label_1d6ed8;
        }
    }
    ctx->pc = 0x1D6D38u;
label_1d6d38:
    // 0x1d6d38: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d6d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6d3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d6d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6d40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d6d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6d44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d6d44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6d48: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1d6d48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6d4c: 0xc075794  jal         func_1D5E50
    ctx->pc = 0x1D6D4Cu;
    SET_GPR_U32(ctx, 31, 0x1D6D54u);
    ctx->pc = 0x1D6D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6D4Cu;
            // 0x1d6d50: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5E50u;
    if (runtime->hasFunction(0x1D5E50u)) {
        auto targetFn = runtime->lookupFunction(0x1D5E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D54u; }
        if (ctx->pc != 0x1D6D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LinkConnectCheck__11CAutoMapGenFiiiii_0x1d5e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D54u; }
        if (ctx->pc != 0x1D6D54u) { return; }
    }
    ctx->pc = 0x1D6D54u;
label_1d6d54:
    // 0x1d6d54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6D54u;
    {
        const bool branch_taken_0x1d6d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6d54) {
            ctx->pc = 0x1D6D68u;
            goto label_1d6d68;
        }
    }
    ctx->pc = 0x1D6D5Cu;
    // 0x1d6d5c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d6d5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6d60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d6d60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6d64: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1d6d64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6d68:
    // 0x1d6d68: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D6D68u;
    {
        const bool branch_taken_0x1d6d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6D68u;
            // 0x1d6d6c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6d68) {
            ctx->pc = 0x1D6D9Cu;
            goto label_1d6d9c;
        }
    }
    ctx->pc = 0x1D6D70u;
    // 0x1d6d70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d6d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6d74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d6d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6d78: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1d6d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d6d7c: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1d6d7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6d80: 0xc075794  jal         func_1D5E50
    ctx->pc = 0x1D6D80u;
    SET_GPR_U32(ctx, 31, 0x1D6D88u);
    ctx->pc = 0x1D6D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6D80u;
            // 0x1d6d84: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5E50u;
    if (runtime->hasFunction(0x1D5E50u)) {
        auto targetFn = runtime->lookupFunction(0x1D5E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D88u; }
        if (ctx->pc != 0x1D6D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LinkConnectCheck__11CAutoMapGenFiiiii_0x1d5e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6D88u; }
        if (ctx->pc != 0x1D6D88u) { return; }
    }
    ctx->pc = 0x1D6D88u;
label_1d6d88:
    // 0x1d6d88: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6D88u;
    {
        const bool branch_taken_0x1d6d88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d6d88) {
            ctx->pc = 0x1D6D9Cu;
            goto label_1d6d9c;
        }
    }
    ctx->pc = 0x1D6D90u;
    // 0x1d6d90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d6d90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6d94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d6d94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6d98: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x1d6d98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d6d9c:
    // 0x1d6d9c: 0x0  nop
    ctx->pc = 0x1d6d9cu;
    // NOP
    // 0x1d6da0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d6da4: 0x12420010  beq         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D6DA4u;
    {
        const bool branch_taken_0x1d6da4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D6DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6DA4u;
            // 0x1d6da8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6da4) {
            ctx->pc = 0x1D6DE8u;
            goto label_1d6de8;
        }
    }
    ctx->pc = 0x1D6DACu;
    // 0x1d6dac: 0x1242000c  beq         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D6DACu;
    {
        const bool branch_taken_0x1d6dac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D6DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6DACu;
            // 0x1d6db0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6dac) {
            ctx->pc = 0x1D6DE0u;
            goto label_1d6de0;
        }
    }
    ctx->pc = 0x1D6DB4u;
    // 0x1d6db4: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6DB4u;
    {
        const bool branch_taken_0x1d6db4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D6DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6DB4u;
            // 0x1d6db8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6db4) {
            ctx->pc = 0x1D6DD8u;
            goto label_1d6dd8;
        }
    }
    ctx->pc = 0x1D6DBCu;
    // 0x1d6dbc: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6DBCu;
    {
        const bool branch_taken_0x1d6dbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d6dbc) {
            ctx->pc = 0x1D6DCCu;
            goto label_1d6dcc;
        }
    }
    ctx->pc = 0x1D6DC4u;
    // 0x1d6dc4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D6DC4u;
    {
        const bool branch_taken_0x1d6dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6dc4) {
            ctx->pc = 0x1D6DECu;
            goto label_1d6dec;
        }
    }
    ctx->pc = 0x1D6DCCu;
label_1d6dcc:
    // 0x1d6dcc: 0x0  nop
    ctx->pc = 0x1d6dccu;
    // NOP
    // 0x1d6dd0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6DD0u;
    {
        const bool branch_taken_0x1d6dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6DD0u;
            // 0x1d6dd4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6dd0) {
            ctx->pc = 0x1D6DECu;
            goto label_1d6dec;
        }
    }
    ctx->pc = 0x1D6DD8u;
label_1d6dd8:
    // 0x1d6dd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6DD8u;
    {
        const bool branch_taken_0x1d6dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6DD8u;
            // 0x1d6ddc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6dd8) {
            ctx->pc = 0x1D6DECu;
            goto label_1d6dec;
        }
    }
    ctx->pc = 0x1D6DE0u;
label_1d6de0:
    // 0x1d6de0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6DE0u;
    {
        const bool branch_taken_0x1d6de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6DE0u;
            // 0x1d6de4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6de0) {
            ctx->pc = 0x1D6DECu;
            goto label_1d6dec;
        }
    }
    ctx->pc = 0x1D6DE8u;
label_1d6de8:
    // 0x1d6de8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d6de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d6dec:
    // 0x1d6dec: 0x0  nop
    ctx->pc = 0x1d6decu;
    // NOP
    // 0x1d6df0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d6df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d6df4: 0x12820003  beq         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6DF4u;
    {
        const bool branch_taken_0x1d6df4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d6df4) {
            ctx->pc = 0x1D6E04u;
            goto label_1d6e04;
        }
    }
    ctx->pc = 0x1D6DFCu;
    // 0x1d6dfc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1D6DFCu;
    {
        const bool branch_taken_0x1d6dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6dfc) {
            ctx->pc = 0x1D6E44u;
            goto label_1d6e44;
        }
    }
    ctx->pc = 0x1D6E04u;
label_1d6e04:
    // 0x1d6e04: 0x0  nop
    ctx->pc = 0x1d6e04u;
    // NOP
    // 0x1d6e08: 0x86c401b8  lh          $a0, 0x1B8($s6)
    ctx->pc = 0x1d6e08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d6e0c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d6e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d6e10: 0x8ec301cc  lw          $v1, 0x1CC($s6)
    ctx->pc = 0x1d6e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 460)));
    // 0x1d6e14: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d6e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d6e18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d6e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d6e1c: 0x2242818  mult        $a1, $s1, $a0
    ctx->pc = 0x1d6e1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d6e20: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d6e20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d6e24: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1d6e24u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d6e28: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d6e28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d6e2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d6e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d6e30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d6e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d6e34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d6e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d6e38: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1d6e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1d6e3c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1D6E3Cu;
    {
        const bool branch_taken_0x1d6e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6E3Cu;
            // 0x1d6e40: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e3c) {
            ctx->pc = 0x1D6E80u;
            goto label_1d6e80;
        }
    }
    ctx->pc = 0x1D6E44u;
label_1d6e44:
    // 0x1d6e44: 0x0  nop
    ctx->pc = 0x1d6e44u;
    // NOP
    // 0x1d6e48: 0x86c401b8  lh          $a0, 0x1B8($s6)
    ctx->pc = 0x1d6e48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d6e4c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d6e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d6e50: 0x8ec301cc  lw          $v1, 0x1CC($s6)
    ctx->pc = 0x1d6e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 460)));
    // 0x1d6e54: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d6e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d6e58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d6e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d6e5c: 0x2242818  mult        $a1, $s1, $a0
    ctx->pc = 0x1d6e5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d6e60: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d6e60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d6e64: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1d6e64u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d6e68: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d6e68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d6e6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d6e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d6e70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d6e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d6e74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d6e78: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1d6e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1d6e7c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d6e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1d6e80:
    // 0x1d6e80: 0x1680000d  bnez        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x1D6E80u;
    {
        const bool branch_taken_0x1d6e80 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e80) {
            ctx->pc = 0x1D6EB8u;
            goto label_1d6eb8;
        }
    }
    ctx->pc = 0x1D6E88u;
    // 0x1d6e88: 0x86c401b8  lh          $a0, 0x1B8($s6)
    ctx->pc = 0x1d6e88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x1d6e8c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1d6e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d6e90: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1d6e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1d6e94: 0x8ec301cc  lw          $v1, 0x1CC($s6)
    ctx->pc = 0x1d6e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 460)));
    // 0x1d6e98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d6e9c: 0x2242818  mult        $a1, $s1, $a0
    ctx->pc = 0x1d6e9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d6ea0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1d6ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d6ea4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1d6ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d6ea8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d6ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d6eac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d6eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d6eb0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d6eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d6eb4: 0xa4550008  sh          $s5, 0x8($v0)
    ctx->pc = 0x1d6eb4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 21));
label_1d6eb8:
    // 0x1d6eb8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1d6eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ebc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d6ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ec0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d6ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ec4: 0xc075814  jal         func_1D6050
    ctx->pc = 0x1D6EC4u;
    SET_GPR_U32(ctx, 31, 0x1D6ECCu);
    ctx->pc = 0x1D6EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6EC4u;
            // 0x1d6ec8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6050u;
    if (runtime->hasFunction(0x1D6050u)) {
        auto targetFn = runtime->lookupFunction(0x1D6050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6ECCu; }
        if (ctx->pc != 0x1D6ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRoadLinkMark__11CAutoMapGenFiii_0x1d6050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6ECCu; }
        if (ctx->pc != 0x1D6ECCu) { return; }
    }
    ctx->pc = 0x1D6ECCu;
label_1d6ecc:
    // 0x1d6ecc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1d6eccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1d6ed0: 0x1e60ff99  bgtz        $s3, . + 4 + (-0x67 << 2)
    ctx->pc = 0x1D6ED0u;
    {
        const bool branch_taken_0x1d6ed0 = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x1d6ed0) {
            ctx->pc = 0x1D6D38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d6d38;
        }
    }
    ctx->pc = 0x1D6ED8u;
label_1d6ed8:
    // 0x1d6ed8: 0x2171023  subu        $v0, $s0, $s7
    ctx->pc = 0x1d6ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x1d6edc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d6edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6ee0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6ee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6ee4: 0x0  nop
    ctx->pc = 0x1d6ee4u;
    // NOP
    // 0x1d6ee8: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x1d6ee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1d6eec: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1d6eecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6ef0: 0x0  nop
    ctx->pc = 0x1d6ef0u;
    // NOP
    // 0x1d6ef4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6EF4u;
    {
        const bool branch_taken_0x1d6ef4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6ef4) {
            ctx->pc = 0x1D6F00u;
            goto label_1d6f00;
        }
    }
    ctx->pc = 0x1D6EFCu;
    // 0x1d6efc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1d6efcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1d6f00:
    // 0x1d6f00: 0x23e1823  subu        $v1, $s1, $fp
    ctx->pc = 0x1d6f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x1d6f04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d6f04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6f08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6f08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6f0c: 0x0  nop
    ctx->pc = 0x1d6f0cu;
    // NOP
    // 0x1d6f10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d6f10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d6f14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d6f14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6f18: 0x0  nop
    ctx->pc = 0x1d6f18u;
    // NOP
    // 0x1d6f1c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6F1Cu;
    {
        const bool branch_taken_0x1d6f1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6f1c) {
            ctx->pc = 0x1D6F28u;
            goto label_1d6f28;
        }
    }
    ctx->pc = 0x1D6F24u;
    // 0x1d6f24: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1d6f24u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1d6f28:
    // 0x1d6f28: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1d6f28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6f2c: 0x0  nop
    ctx->pc = 0x1d6f2cu;
    // NOP
    // 0x1d6f30: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1D6F30u;
    {
        const bool branch_taken_0x1d6f30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6f30) {
            ctx->pc = 0x1D6F8Cu;
            goto label_1d6f8c;
        }
    }
    ctx->pc = 0x1D6F38u;
    // 0x1d6f38: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6F38u;
    {
        const bool branch_taken_0x1d6f38 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D6F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F38u;
            // 0x1d6f3c: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f38) {
            ctx->pc = 0x1D6F48u;
            goto label_1d6f48;
        }
    }
    ctx->pc = 0x1D6F40u;
    // 0x1d6f40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6F40u;
    {
        const bool branch_taken_0x1d6f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6f40) {
            ctx->pc = 0x1D6F4Cu;
            goto label_1d6f4c;
        }
    }
    ctx->pc = 0x1D6F48u;
label_1d6f48:
    // 0x1d6f48: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x1d6f48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d6f4c:
    // 0x1d6f4c: 0x0  nop
    ctx->pc = 0x1d6f4cu;
    // NOP
    // 0x1d6f50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d6f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6f54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6f54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6f58: 0x0  nop
    ctx->pc = 0x1d6f58u;
    // NOP
    // 0x1d6f5c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d6f5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d6f60: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1d6f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6f64: 0x0  nop
    ctx->pc = 0x1d6f64u;
    // NOP
    // 0x1d6f68: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6F68u;
    {
        const bool branch_taken_0x1d6f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6f68) {
            ctx->pc = 0x1D6F74u;
            goto label_1d6f74;
        }
    }
    ctx->pc = 0x1D6F70u;
    // 0x1d6f70: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1d6f70u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_1d6f74:
    // 0x1d6f74: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D6F74u;
    SET_GPR_U32(ctx, 31, 0x1D6F7Cu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F7Cu; }
        if (ctx->pc != 0x1D6F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F7Cu; }
        if (ctx->pc != 0x1D6F7Cu) { return; }
    }
    ctx->pc = 0x1D6F7Cu;
label_1d6f7c:
    // 0x1d6f7c: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D6F7Cu;
    SET_GPR_U32(ctx, 31, 0x1D6F84u);
    ctx->pc = 0x1D6F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F7Cu;
            // 0x1d6f80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F84u; }
        if (ctx->pc != 0x1D6F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6F84u; }
        if (ctx->pc != 0x1D6F84u) { return; }
    }
    ctx->pc = 0x1D6F84u;
label_1d6f84:
    // 0x1d6f84: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D6F84u;
    {
        const bool branch_taken_0x1d6f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F84u;
            // 0x1d6f88: 0x24530001  addiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f84) {
            ctx->pc = 0x1D6FE0u;
            goto label_1d6fe0;
        }
    }
    ctx->pc = 0x1D6F8Cu;
label_1d6f8c:
    // 0x1d6f8c: 0x0  nop
    ctx->pc = 0x1d6f8cu;
    // NOP
    // 0x1d6f90: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6F90u;
    {
        const bool branch_taken_0x1d6f90 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D6F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6F90u;
            // 0x1d6f94: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f90) {
            ctx->pc = 0x1D6FA0u;
            goto label_1d6fa0;
        }
    }
    ctx->pc = 0x1D6F98u;
    // 0x1d6f98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6F98u;
    {
        const bool branch_taken_0x1d6f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6f98) {
            ctx->pc = 0x1D6FA4u;
            goto label_1d6fa4;
        }
    }
    ctx->pc = 0x1D6FA0u;
label_1d6fa0:
    // 0x1d6fa0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d6fa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6fa4:
    // 0x1d6fa4: 0x0  nop
    ctx->pc = 0x1d6fa4u;
    // NOP
    // 0x1d6fa8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d6fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d6fac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d6fb0: 0x0  nop
    ctx->pc = 0x1d6fb0u;
    // NOP
    // 0x1d6fb4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1d6fb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d6fb8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1d6fb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d6fbc: 0x0  nop
    ctx->pc = 0x1d6fbcu;
    // NOP
    // 0x1d6fc0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6FC0u;
    {
        const bool branch_taken_0x1d6fc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6fc0) {
            ctx->pc = 0x1D6FCCu;
            goto label_1d6fcc;
        }
    }
    ctx->pc = 0x1D6FC8u;
    // 0x1d6fc8: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x1d6fc8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_1d6fcc:
    // 0x1d6fcc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1D6FCCu;
    SET_GPR_U32(ctx, 31, 0x1D6FD4u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6FD4u; }
        if (ctx->pc != 0x1D6FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6FD4u; }
        if (ctx->pc != 0x1D6FD4u) { return; }
    }
    ctx->pc = 0x1D6FD4u;
label_1d6fd4:
    // 0x1d6fd4: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1D6FD4u;
    SET_GPR_U32(ctx, 31, 0x1D6FDCu);
    ctx->pc = 0x1D6FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6FD4u;
            // 0x1d6fd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6FDCu; }
        if (ctx->pc != 0x1D6FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6FDCu; }
        if (ctx->pc != 0x1D6FDCu) { return; }
    }
    ctx->pc = 0x1D6FDCu;
label_1d6fdc:
    // 0x1d6fdc: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x1d6fdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d6fe0:
    // 0x1d6fe0: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x1d6fe0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d6fe4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6FE4u;
    {
        const bool branch_taken_0x1d6fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6fe4) {
            ctx->pc = 0x1D6FF0u;
            goto label_1d6ff0;
        }
    }
    ctx->pc = 0x1D6FECu;
    // 0x1d6fec: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1d6fecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d6ff0:
    // 0x1d6ff0: 0x1280ff4f  beqz        $s4, . + 4 + (-0xB1 << 2)
    ctx->pc = 0x1D6FF0u;
    {
        const bool branch_taken_0x1d6ff0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6ff0) {
            ctx->pc = 0x1D6D30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d6d30;
        }
    }
    ctx->pc = 0x1D6FF8u;
label_1d6ff8:
    // 0x1d6ff8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1d6ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d6ffc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d6ffcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d7000: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d7000u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d7004: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d7004u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d7008: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d7008u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d700c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d700cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d7010: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d7010u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7014: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d7014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7018: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d701c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d701cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7020: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7020u;
            // 0x1d7024: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7028u;
}

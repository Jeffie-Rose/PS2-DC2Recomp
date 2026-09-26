#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDummyTree__11CAutoMapGenFv
// Address: 0x1d7bb0 - 0x1d8134
void SetDummyTree__11CAutoMapGenFv_0x1d7bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDummyTree__11CAutoMapGenFv_0x1d7bb0");
#endif

    switch (ctx->pc) {
        case 0x1d7c04u: goto label_1d7c04;
        case 0x1d7c30u: goto label_1d7c30;
        case 0x1d7c74u: goto label_1d7c74;
        case 0x1d7ca8u: goto label_1d7ca8;
        case 0x1d7cb4u: goto label_1d7cb4;
        case 0x1d7d3cu: goto label_1d7d3c;
        case 0x1d7d4cu: goto label_1d7d4c;
        case 0x1d7e64u: goto label_1d7e64;
        case 0x1d7e74u: goto label_1d7e74;
        case 0x1d7f7cu: goto label_1d7f7c;
        case 0x1d7fc0u: goto label_1d7fc0;
        case 0x1d7fc8u: goto label_1d7fc8;
        case 0x1d8088u: goto label_1d8088;
        case 0x1d80c8u: goto label_1d80c8;
        default: break;
    }

    ctx->pc = 0x1d7bb0u;

    // 0x1d7bb0: 0x3c01ffff  lui         $at, 0xFFFF
    ctx->pc = 0x1d7bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
    // 0x1d7bb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7bb8: 0x34217f30  ori         $at, $at, 0x7F30
    ctx->pc = 0x1d7bb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32560);
    // 0x1d7bbc: 0x3a1e821  addu        $sp, $sp, $at
    ctx->pc = 0x1d7bbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1d7bc0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1d7bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1d7bc4: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d7bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1d7bc8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d7bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1d7bcc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d7bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1d7bd0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d7bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d7bd4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d7bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d7bd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d7bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d7bdc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d7bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d7be0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d7be4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7be8: 0x848301b8  lh          $v1, 0x1B8($a0)
    ctx->pc = 0x1d7be8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x1d7bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7bf0: 0x848201ba  lh          $v0, 0x1BA($a0)
    ctx->pc = 0x1d7bf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 442)));
    // 0x1d7bf4: 0x24710008  addiu       $s1, $v1, 0x8
    ctx->pc = 0x1d7bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1d7bf8: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d7bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x1d7bfc: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x1D7BFCu;
    SET_GPR_U32(ctx, 31, 0x1D7C04u);
    ctx->pc = 0x1D7C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7BFCu;
            // 0x1d7c00: 0x24520008  addiu       $s2, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C04u; }
        if (ctx->pc != 0x1D7C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7C04u; }
        if (ctx->pc != 0x1D7C04u) { return; }
    }
    ctx->pc = 0x1D7C04u;
label_1d7c04:
    // 0x1d7c04: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1d7c04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c08: 0x12e0013d  beqz        $s7, . + 4 + (0x13D << 2)
    ctx->pc = 0x1D7C08u;
    {
        const bool branch_taken_0x1d7c08 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7C08u;
            // 0x1d7c0c: 0x2513818  mult        $a3, $s2, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c08) {
            ctx->pc = 0x1D8100u;
            goto label_1d8100;
        }
    }
    ctx->pc = 0x1D7C10u;
    // 0x1d7c10: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x1d7c10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1d7c14: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D7C14u;
    {
        const bool branch_taken_0x1d7c14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7C14u;
            // 0x1d7c18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c14) {
            ctx->pc = 0x1D7C94u;
            goto label_1d7c94;
        }
    }
    ctx->pc = 0x1D7C1Cu;
    // 0x1d7c1c: 0x28e10009  slti        $at, $a3, 0x9
    ctx->pc = 0x1d7c1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1d7c20: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D7C20u;
    {
        const bool branch_taken_0x1d7c20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7C20u;
            // 0x1d7c24: 0x24e5fff8  addiu       $a1, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c20) {
            ctx->pc = 0x1D7C68u;
            goto label_1d7c68;
        }
    }
    ctx->pc = 0x1D7C28u;
    // 0x1d7c28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d7c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d7c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d7c30:
    // 0x1d7c30: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x1d7c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x1d7c34: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1d7c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1d7c38: 0x244800a0  addiu       $t0, $v0, 0xA0
    ctx->pc = 0x1d7c38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1d7c3c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1d7c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1d7c40: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x1d7c40u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d7c44: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1d7c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d7c48: 0xa5030002  sh          $v1, 0x2($t0)
    ctx->pc = 0x1d7c48u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d7c4c: 0xa5030004  sh          $v1, 0x4($t0)
    ctx->pc = 0x1d7c4cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d7c50: 0xa5030006  sh          $v1, 0x6($t0)
    ctx->pc = 0x1d7c50u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d7c54: 0xa5030008  sh          $v1, 0x8($t0)
    ctx->pc = 0x1d7c54u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d7c58: 0xa503000a  sh          $v1, 0xA($t0)
    ctx->pc = 0x1d7c58u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d7c5c: 0xa503000c  sh          $v1, 0xC($t0)
    ctx->pc = 0x1d7c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d7c60: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D7C60u;
    {
        const bool branch_taken_0x1d7c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7C60u;
            // 0x1d7c64: 0xa503000e  sh          $v1, 0xE($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c60) {
            ctx->pc = 0x1D7C30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7c30;
        }
    }
    ctx->pc = 0x1D7C68u;
label_1d7c68:
    // 0x1d7c68: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x1d7c68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d7c6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7C6Cu;
    {
        const bool branch_taken_0x1d7c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7C6Cu;
            // 0x1d7c70: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c6c) {
            ctx->pc = 0x1D7C84u;
            goto label_1d7c84;
        }
    }
    ctx->pc = 0x1D7C74u;
label_1d7c74:
    // 0x1d7c74: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x1d7c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1d7c78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d7c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d7c7c: 0xa44300a0  sh          $v1, 0xA0($v0)
    ctx->pc = 0x1d7c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d7c80: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1d7c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_1d7c84:
    // 0x1d7c84: 0x0  nop
    ctx->pc = 0x1d7c84u;
    // NOP
    // 0x1d7c88: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x1d7c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1d7c8c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D7C8Cu;
    {
        const bool branch_taken_0x1d7c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7c8c) {
            ctx->pc = 0x1D7C74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7c74;
        }
    }
    ctx->pc = 0x1D7C94u;
label_1d7c94:
    // 0x1d7c94: 0x0  nop
    ctx->pc = 0x1d7c94u;
    // NOP
    // 0x1d7c98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d7c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7c9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d7c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7ca0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D7CA0u;
    {
        const bool branch_taken_0x1d7ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7CA0u;
            // 0x1d7ca4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ca0) {
            ctx->pc = 0x1D7D0Cu;
            goto label_1d7d0c;
        }
    }
    ctx->pc = 0x1D7CA8u;
label_1d7ca8:
    // 0x1d7ca8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d7ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7cac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D7CACu;
    {
        const bool branch_taken_0x1d7cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7CACu;
            // 0x1d7cb0: 0x24460004  addiu       $a2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7cac) {
            ctx->pc = 0x1D7CF8u;
            goto label_1d7cf8;
        }
    }
    ctx->pc = 0x1D7CB4u;
label_1d7cb4:
    // 0x1d7cb4: 0x0  nop
    ctx->pc = 0x1d7cb4u;
    // NOP
    // 0x1d7cb8: 0x8e0501cc  lw          $a1, 0x1CC($s0)
    ctx->pc = 0x1d7cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x1d7cbc: 0x495018  mult        $t2, $v0, $t1
    ctx->pc = 0x1d7cbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1d7cc0: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x1d7cc0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1d7cc4: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x1d7cc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1d7cc8: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1d7cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1d7ccc: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1d7cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1d7cd0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1d7cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1d7cd4: 0x84a50004  lh          $a1, 0x4($a1)
    ctx->pc = 0x1d7cd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d7cd8: 0x10a80005  beq         $a1, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7CD8u;
    {
        const bool branch_taken_0x1d7cd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        ctx->pc = 0x1D7CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7CD8u;
            // 0x1d7cdc: 0xd12818  mult        $a1, $a2, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7cd8) {
            ctx->pc = 0x1D7CF0u;
            goto label_1d7cf0;
        }
    }
    ctx->pc = 0x1D7CE0u;
    // 0x1d7ce0: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1d7ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d7ce4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1d7ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d7ce8: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x1d7ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x1d7cec: 0xa4a700a8  sh          $a3, 0xA8($a1)
    ctx->pc = 0x1d7cecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 168), (uint16_t)GPR_U32(ctx, 7));
label_1d7cf0:
    // 0x1d7cf0: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x1d7cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x1d7cf4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d7cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d7cf8:
    // 0x1d7cf8: 0x860901b8  lh          $t1, 0x1B8($s0)
    ctx->pc = 0x1d7cf8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x1d7cfc: 0x69282a  slt         $a1, $v1, $t1
    ctx->pc = 0x1d7cfcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1d7d00: 0x14a0ffec  bnez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1D7D00u;
    {
        const bool branch_taken_0x1d7d00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7d00) {
            ctx->pc = 0x1D7CB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7cb4;
        }
    }
    ctx->pc = 0x1D7D08u;
    // 0x1d7d08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d7d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d7d0c:
    // 0x1d7d0c: 0x0  nop
    ctx->pc = 0x1d7d0cu;
    // NOP
    // 0x1d7d10: 0x860301ba  lh          $v1, 0x1BA($s0)
    ctx->pc = 0x1d7d10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 442)));
    // 0x1d7d14: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1d7d14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d7d18: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1D7D18u;
    {
        const bool branch_taken_0x1d7d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7D18u;
            // 0x1d7d1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d18) {
            ctx->pc = 0x1D7CA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7ca8;
        }
    }
    ctx->pc = 0x1D7D20u;
    // 0x1d7d20: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1d7d20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d7d24: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x1D7D24u;
    {
        const bool branch_taken_0x1d7d24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7D24u;
            // 0x1d7d28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d24) {
            ctx->pc = 0x1D7E48u;
            goto label_1d7e48;
        }
    }
    ctx->pc = 0x1D7D2Cu;
    // 0x1d7d2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d7d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7d30: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x1d7d30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7d34: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d7d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7d38: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1d7d38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1d7d3c:
    // 0x1d7d3c: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x1D7D3Cu;
    {
        const bool branch_taken_0x1d7d3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7D3Cu;
            // 0x1d7d40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d3c) {
            ctx->pc = 0x1D7E38u;
            goto label_1d7e38;
        }
    }
    ctx->pc = 0x1D7D44u;
    // 0x1d7d44: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x1d7d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d7d48: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1d7d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1d7d4c:
    // 0x1d7d4c: 0x0  nop
    ctx->pc = 0x1d7d4cu;
    // NOP
    // 0x1d7d50: 0xd14018  mult        $t0, $a2, $s1
    ctx->pc = 0x1d7d50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1d7d54: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x1d7d54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1d7d58: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1d7d58u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1d7d5c: 0x11d4021  addu        $t0, $t0, $sp
    ctx->pc = 0x1d7d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x1d7d60: 0x250900a0  addiu       $t1, $t0, 0xA0
    ctx->pc = 0x1d7d60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
    // 0x1d7d64: 0x85280000  lh          $t0, 0x0($t1)
    ctx->pc = 0x1d7d64u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7d68: 0x1505002e  bne         $t0, $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1D7D68u;
    {
        const bool branch_taken_0x1d7d68 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D7D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7D68u;
            // 0x1d7d6c: 0x915018  mult        $t2, $a0, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d68) {
            ctx->pc = 0x1D7E24u;
            goto label_1d7e24;
        }
    }
    ctx->pc = 0x1D7D70u;
    // 0x1d7d70: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x1d7d70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1d7d74: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1d7d74u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1d7d78: 0x15d5021  addu        $t2, $t2, $sp
    ctx->pc = 0x1d7d78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x1d7d7c: 0x254a00a0  addiu       $t2, $t2, 0xA0
    ctx->pc = 0x1d7d7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 160));
    // 0x1d7d80: 0x854c0000  lh          $t4, 0x0($t2)
    ctx->pc = 0x1d7d80u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1d7d84: 0x15830002  bne         $t4, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7D84u;
    {
        const bool branch_taken_0x1d7d84 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D7D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7D84u;
            // 0x1d7d88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d84) {
            ctx->pc = 0x1D7D90u;
            goto label_1d7d90;
        }
    }
    ctx->pc = 0x1D7D8Cu;
    // 0x1d7d8c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1d7d8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d7d90:
    // 0x1d7d90: 0x516018  mult        $t4, $v0, $s1
    ctx->pc = 0x1d7d90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1d7d94: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x1d7d94u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x1d7d98: 0xc6040  sll         $t4, $t4, 1
    ctx->pc = 0x1d7d98u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1d7d9c: 0x19d6021  addu        $t4, $t4, $sp
    ctx->pc = 0x1d7d9cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x1d7da0: 0x258d00a0  addiu       $t5, $t4, 0xA0
    ctx->pc = 0x1d7da0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 160));
    // 0x1d7da4: 0x85ac0000  lh          $t4, 0x0($t5)
    ctx->pc = 0x1d7da4u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1d7da8: 0x15830002  bne         $t4, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7DA8u;
    {
        const bool branch_taken_0x1d7da8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7da8) {
            ctx->pc = 0x1D7DB4u;
            goto label_1d7db4;
        }
    }
    ctx->pc = 0x1D7DB0u;
    // 0x1d7db0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1d7db0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d7db4:
    // 0x1d7db4: 0x0  nop
    ctx->pc = 0x1d7db4u;
    // NOP
    // 0x1d7db8: 0x852cfffe  lh          $t4, -0x2($t1)
    ctx->pc = 0x1d7db8u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294967294)));
    // 0x1d7dbc: 0x15830002  bne         $t4, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7DBCu;
    {
        const bool branch_taken_0x1d7dbc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7dbc) {
            ctx->pc = 0x1D7DC8u;
            goto label_1d7dc8;
        }
    }
    ctx->pc = 0x1D7DC4u;
    // 0x1d7dc4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1d7dc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d7dc8:
    // 0x1d7dc8: 0x852c0002  lh          $t4, 0x2($t1)
    ctx->pc = 0x1d7dc8u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x1d7dcc: 0x15830002  bne         $t4, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7DCCu;
    {
        const bool branch_taken_0x1d7dcc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7dcc) {
            ctx->pc = 0x1D7DD8u;
            goto label_1d7dd8;
        }
    }
    ctx->pc = 0x1D7DD4u;
    // 0x1d7dd4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1d7dd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d7dd8:
    // 0x1d7dd8: 0x854cfffe  lh          $t4, -0x2($t2)
    ctx->pc = 0x1d7dd8u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4294967294)));
    // 0x1d7ddc: 0x15830002  bne         $t4, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7DDCu;
    {
        const bool branch_taken_0x1d7ddc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7ddc) {
            ctx->pc = 0x1D7DE8u;
            goto label_1d7de8;
        }
    }
    ctx->pc = 0x1D7DE4u;
    // 0x1d7de4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1d7de4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d7de8:
    // 0x1d7de8: 0x854a0002  lh          $t2, 0x2($t2)
    ctx->pc = 0x1d7de8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x1d7dec: 0x15430002  bne         $t2, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7DECu;
    {
        const bool branch_taken_0x1d7dec = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7dec) {
            ctx->pc = 0x1D7DF8u;
            goto label_1d7df8;
        }
    }
    ctx->pc = 0x1D7DF4u;
    // 0x1d7df4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1d7df4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d7df8:
    // 0x1d7df8: 0x85aafffe  lh          $t2, -0x2($t5)
    ctx->pc = 0x1d7df8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 4294967294)));
    // 0x1d7dfc: 0x15430002  bne         $t2, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7DFCu;
    {
        const bool branch_taken_0x1d7dfc = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7dfc) {
            ctx->pc = 0x1D7E08u;
            goto label_1d7e08;
        }
    }
    ctx->pc = 0x1D7E04u;
    // 0x1d7e04: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1d7e04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d7e08:
    // 0x1d7e08: 0x85aa0002  lh          $t2, 0x2($t5)
    ctx->pc = 0x1d7e08u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x1d7e0c: 0x15430002  bne         $t2, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7E0Cu;
    {
        const bool branch_taken_0x1d7e0c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7e0c) {
            ctx->pc = 0x1D7E18u;
            goto label_1d7e18;
        }
    }
    ctx->pc = 0x1D7E14u;
    // 0x1d7e14: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1d7e14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d7e18:
    // 0x1d7e18: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7E18u;
    {
        const bool branch_taken_0x1d7e18 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e18) {
            ctx->pc = 0x1D7E24u;
            goto label_1d7e24;
        }
    }
    ctx->pc = 0x1D7E20u;
    // 0x1d7e20: 0xa52b0000  sh          $t3, 0x0($t1)
    ctx->pc = 0x1d7e20u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 11));
label_1d7e24:
    // 0x1d7e24: 0x0  nop
    ctx->pc = 0x1d7e24u;
    // NOP
    // 0x1d7e28: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d7e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d7e2c: 0xf1402a  slt         $t0, $a3, $s1
    ctx->pc = 0x1d7e2cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d7e30: 0x1500ffc6  bnez        $t0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1D7E30u;
    {
        const bool branch_taken_0x1d7e30 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e30) {
            ctx->pc = 0x1D7D4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7d4c;
        }
    }
    ctx->pc = 0x1D7E38u;
label_1d7e38:
    // 0x1d7e38: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d7e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d7e3c: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x1d7e3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d7e40: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1D7E40u;
    {
        const bool branch_taken_0x1d7e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E40u;
            // 0x1d7e44: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e40) {
            ctx->pc = 0x1D7D3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7d3c;
        }
    }
    ctx->pc = 0x1D7E48u;
label_1d7e48:
    // 0x1d7e48: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1d7e48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d7e4c: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x1D7E4Cu;
    {
        const bool branch_taken_0x1d7e4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E4Cu;
            // 0x1d7e50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e4c) {
            ctx->pc = 0x1D7F70u;
            goto label_1d7f70;
        }
    }
    ctx->pc = 0x1D7E54u;
    // 0x1d7e54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d7e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7e58: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1d7e58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d7e5c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d7e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7e60: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1d7e60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1d7e64:
    // 0x1d7e64: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x1D7E64u;
    {
        const bool branch_taken_0x1d7e64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E64u;
            // 0x1d7e68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e64) {
            ctx->pc = 0x1D7F60u;
            goto label_1d7f60;
        }
    }
    ctx->pc = 0x1D7E6Cu;
    // 0x1d7e6c: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x1d7e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d7e70: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1d7e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1d7e74:
    // 0x1d7e74: 0x0  nop
    ctx->pc = 0x1d7e74u;
    // NOP
    // 0x1d7e78: 0xd14018  mult        $t0, $a2, $s1
    ctx->pc = 0x1d7e78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1d7e7c: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x1d7e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1d7e80: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1d7e80u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1d7e84: 0x11d4021  addu        $t0, $t0, $sp
    ctx->pc = 0x1d7e84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
    // 0x1d7e88: 0x250900a0  addiu       $t1, $t0, 0xA0
    ctx->pc = 0x1d7e88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 160));
    // 0x1d7e8c: 0x85280000  lh          $t0, 0x0($t1)
    ctx->pc = 0x1d7e8cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7e90: 0x1505002e  bne         $t0, $a1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1D7E90u;
    {
        const bool branch_taken_0x1d7e90 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D7E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E90u;
            // 0x1d7e94: 0x915018  mult        $t2, $a0, $s1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e90) {
            ctx->pc = 0x1D7F4Cu;
            goto label_1d7f4c;
        }
    }
    ctx->pc = 0x1D7E98u;
    // 0x1d7e98: 0xea5021  addu        $t2, $a3, $t2
    ctx->pc = 0x1d7e98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1d7e9c: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1d7e9cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1d7ea0: 0x15d5021  addu        $t2, $t2, $sp
    ctx->pc = 0x1d7ea0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x1d7ea4: 0x254a00a0  addiu       $t2, $t2, 0xA0
    ctx->pc = 0x1d7ea4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 160));
    // 0x1d7ea8: 0x854c0000  lh          $t4, 0x0($t2)
    ctx->pc = 0x1d7ea8u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1d7eac: 0x15830002  bne         $t4, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7EACu;
    {
        const bool branch_taken_0x1d7eac = (GPR_U64(ctx, 12) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D7EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7EACu;
            // 0x1d7eb0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7eac) {
            ctx->pc = 0x1D7EB8u;
            goto label_1d7eb8;
        }
    }
    ctx->pc = 0x1D7EB4u;
    // 0x1d7eb4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d7eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7eb8:
    // 0x1d7eb8: 0x516018  mult        $t4, $v0, $s1
    ctx->pc = 0x1d7eb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1d7ebc: 0xec6021  addu        $t4, $a3, $t4
    ctx->pc = 0x1d7ebcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x1d7ec0: 0xc6040  sll         $t4, $t4, 1
    ctx->pc = 0x1d7ec0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x1d7ec4: 0x19d6021  addu        $t4, $t4, $sp
    ctx->pc = 0x1d7ec4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x1d7ec8: 0x258d00a0  addiu       $t5, $t4, 0xA0
    ctx->pc = 0x1d7ec8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 160));
    // 0x1d7ecc: 0x85ac0000  lh          $t4, 0x0($t5)
    ctx->pc = 0x1d7eccu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1d7ed0: 0x15830002  bne         $t4, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7ED0u;
    {
        const bool branch_taken_0x1d7ed0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7ed0) {
            ctx->pc = 0x1D7EDCu;
            goto label_1d7edc;
        }
    }
    ctx->pc = 0x1D7ED8u;
    // 0x1d7ed8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d7ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7edc:
    // 0x1d7edc: 0x0  nop
    ctx->pc = 0x1d7edcu;
    // NOP
    // 0x1d7ee0: 0x852cfffe  lh          $t4, -0x2($t1)
    ctx->pc = 0x1d7ee0u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294967294)));
    // 0x1d7ee4: 0x15830002  bne         $t4, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7EE4u;
    {
        const bool branch_taken_0x1d7ee4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7ee4) {
            ctx->pc = 0x1D7EF0u;
            goto label_1d7ef0;
        }
    }
    ctx->pc = 0x1D7EECu;
    // 0x1d7eec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d7eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7ef0:
    // 0x1d7ef0: 0x852c0002  lh          $t4, 0x2($t1)
    ctx->pc = 0x1d7ef0u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x1d7ef4: 0x15830002  bne         $t4, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7EF4u;
    {
        const bool branch_taken_0x1d7ef4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7ef4) {
            ctx->pc = 0x1D7F00u;
            goto label_1d7f00;
        }
    }
    ctx->pc = 0x1D7EFCu;
    // 0x1d7efc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d7efcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7f00:
    // 0x1d7f00: 0x854cfffe  lh          $t4, -0x2($t2)
    ctx->pc = 0x1d7f00u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4294967294)));
    // 0x1d7f04: 0x15830002  bne         $t4, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7F04u;
    {
        const bool branch_taken_0x1d7f04 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7f04) {
            ctx->pc = 0x1D7F10u;
            goto label_1d7f10;
        }
    }
    ctx->pc = 0x1D7F0Cu;
    // 0x1d7f0c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d7f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7f10:
    // 0x1d7f10: 0x854a0002  lh          $t2, 0x2($t2)
    ctx->pc = 0x1d7f10u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x1d7f14: 0x15430002  bne         $t2, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7F14u;
    {
        const bool branch_taken_0x1d7f14 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7f14) {
            ctx->pc = 0x1D7F20u;
            goto label_1d7f20;
        }
    }
    ctx->pc = 0x1D7F1Cu;
    // 0x1d7f1c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d7f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7f20:
    // 0x1d7f20: 0x85aafffe  lh          $t2, -0x2($t5)
    ctx->pc = 0x1d7f20u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 4294967294)));
    // 0x1d7f24: 0x15430002  bne         $t2, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7F24u;
    {
        const bool branch_taken_0x1d7f24 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7f24) {
            ctx->pc = 0x1D7F30u;
            goto label_1d7f30;
        }
    }
    ctx->pc = 0x1D7F2Cu;
    // 0x1d7f2c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d7f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7f30:
    // 0x1d7f30: 0x85aa0002  lh          $t2, 0x2($t5)
    ctx->pc = 0x1d7f30u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x1d7f34: 0x15430002  bne         $t2, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7F34u;
    {
        const bool branch_taken_0x1d7f34 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7f34) {
            ctx->pc = 0x1D7F40u;
            goto label_1d7f40;
        }
    }
    ctx->pc = 0x1D7F3Cu;
    // 0x1d7f3c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d7f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d7f40:
    // 0x1d7f40: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7F40u;
    {
        const bool branch_taken_0x1d7f40 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7f40) {
            ctx->pc = 0x1D7F4Cu;
            goto label_1d7f4c;
        }
    }
    ctx->pc = 0x1D7F48u;
    // 0x1d7f48: 0xa52b0000  sh          $t3, 0x0($t1)
    ctx->pc = 0x1d7f48u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 11));
label_1d7f4c:
    // 0x1d7f4c: 0x0  nop
    ctx->pc = 0x1d7f4cu;
    // NOP
    // 0x1d7f50: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1d7f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d7f54: 0xf1402a  slt         $t0, $a3, $s1
    ctx->pc = 0x1d7f54u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d7f58: 0x1500ffc6  bnez        $t0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1D7F58u;
    {
        const bool branch_taken_0x1d7f58 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7f58) {
            ctx->pc = 0x1D7E74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7e74;
        }
    }
    ctx->pc = 0x1D7F60u;
label_1d7f60:
    // 0x1d7f60: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d7f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d7f64: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x1d7f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d7f68: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1D7F68u;
    {
        const bool branch_taken_0x1d7f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7F68u;
            // 0x1d7f6c: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f68) {
            ctx->pc = 0x1D7E64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7e64;
        }
    }
    ctx->pc = 0x1D7F70u;
label_1d7f70:
    // 0x1d7f70: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d7f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x1d7f74: 0xc0a0c64  jal         func_283190
    ctx->pc = 0x1D7F74u;
    SET_GPR_U32(ctx, 31, 0x1D7F7Cu);
    ctx->pc = 0x1D7F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7F74u;
            // 0x1d7f78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F7Cu; }
        if (ctx->pc != 0x1D7F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F7Cu; }
        if (ctx->pc != 0x1D7F7Cu) { return; }
    }
    ctx->pc = 0x1D7F7Cu;
label_1d7f7c:
    // 0x1d7f7c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d7f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d7f80: 0x340180b0  ori         $at, $zero, 0x80B0
    ctx->pc = 0x1d7f80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32944);
    // 0x1d7f84: 0x2463d9a0  addiu       $v1, $v1, -0x2660
    ctx->pc = 0x1d7f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957472));
    // 0x1d7f88: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x1d7f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1d7f8c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1d7f8cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7f90: 0x340180c0  ori         $at, $zero, 0x80C0
    ctx->pc = 0x1d7f90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32960);
    // 0x1d7f94: 0x3a12021  addu        $a0, $sp, $at
    ctx->pc = 0x1d7f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1d7f98: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1d7f98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f9c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x1d7f9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d7fa0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d7fa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fa4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d7fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d7fa8: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1d7fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x1d7fac: 0x2463d9b0  addiu       $v1, $v1, -0x2650
    ctx->pc = 0x1d7facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957488));
    // 0x1d7fb0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1d7fb0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7fb4: 0x10200052  beqz        $at, . + 4 + (0x52 << 2)
    ctx->pc = 0x1D7FB4u;
    {
        const bool branch_taken_0x1d7fb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7FB4u;
            // 0x1d7fb8: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fb4) {
            ctx->pc = 0x1D8100u;
            goto label_1d8100;
        }
    }
    ctx->pc = 0x1D7FBCu;
    // 0x1d7fbc: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1d7fbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1d7fc0:
    // 0x1d7fc0: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
    ctx->pc = 0x1D7FC0u;
    {
        const bool branch_taken_0x1d7fc0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7FC0u;
            // 0x1d7fc4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fc0) {
            ctx->pc = 0x1D80F0u;
            goto label_1d80f0;
        }
    }
    ctx->pc = 0x1D7FC8u;
label_1d7fc8:
    // 0x1d7fc8: 0x2911818  mult        $v1, $s4, $s1
    ctx->pc = 0x1d7fc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d7fcc: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1d7fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d7fd0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1d7fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d7fd4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1d7fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1d7fd8: 0x247e00a0  addiu       $fp, $v1, 0xA0
    ctx->pc = 0x1d7fd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x1d7fdc: 0x87c60000  lh          $a2, 0x0($fp)
    ctx->pc = 0x1d7fdcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1d7fe0: 0x28c10002  slti        $at, $a2, 0x2
    ctx->pc = 0x1d7fe0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d7fe4: 0x1420003d  bnez        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x1D7FE4u;
    {
        const bool branch_taken_0x1d7fe4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7fe4) {
            ctx->pc = 0x1D80DCu;
            goto label_1d80dc;
        }
    }
    ctx->pc = 0x1D7FECu;
    // 0x1d7fec: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1d7fecu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7ff0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d7ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1d7ff4: 0xc60101bc  lwc1        $f1, 0x1BC($s0)
    ctx->pc = 0x1d7ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7ff8: 0x3c054080  lui         $a1, 0x4080
    ctx->pc = 0x1d7ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16512 << 16));
    // 0x1d7ffc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d7ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d8000: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d8000u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1d8004: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1d8004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1d8008: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d8008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d800c: 0xac2080a4  sw          $zero, -0x7F5C($at)
    ctx->pc = 0x1d800cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934692), GPR_U32(ctx, 0));
    // 0x1d8010: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x1d8010u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d8014: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d8014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1d8018: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1d8018u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d801c: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d801cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1d8020: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1d8020u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8024: 0x0  nop
    ctx->pc = 0x1d8024u;
    // NOP
    // 0x1d8028: 0x4601105d  msub.s      $f1, $f2, $f1
    ctx->pc = 0x1d8028u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1d802c: 0xe42180a0  swc1        $f1, -0x7F60($at)
    ctx->pc = 0x1d802cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294934688), bits); }
    // 0x1d8030: 0xc60101c0  lwc1        $f1, 0x1C0($s0)
    ctx->pc = 0x1d8030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8034: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d8034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1d8038: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d8038u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d803c: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d803cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1d8040: 0xac2480ac  sw          $a0, -0x7F54($at)
    ctx->pc = 0x1d8040u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934700), GPR_U32(ctx, 4));
    // 0x1d8044: 0x4601001a  mula.s      $f0, $f1
    ctx->pc = 0x1d8044u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d8048: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d8048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1d804c: 0x4601101d  msub.s      $f0, $f2, $f1
    ctx->pc = 0x1d804cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
    // 0x1d8050: 0x3a10821  addu        $at, $sp, $at
    ctx->pc = 0x1d8050u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1d8054: 0x14c3000d  bne         $a2, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D8054u;
    {
        const bool branch_taken_0x1d8054 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D8058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8054u;
            // 0x1d8058: 0xe42080a8  swc1        $f0, -0x7F58($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294934696), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8054) {
            ctx->pc = 0x1D808Cu;
            goto label_1d808c;
        }
    }
    ctx->pc = 0x1D805Cu;
    // 0x1d805c: 0x340180a0  ori         $at, $zero, 0x80A0
    ctx->pc = 0x1d805cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32928);
    // 0x1d8060: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1d8060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1d8064: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x1d8064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1d8068: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d8068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d806c: 0x340180b0  ori         $at, $zero, 0x80B0
    ctx->pc = 0x1d806cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32944);
    // 0x1d8070: 0x24a57e00  addiu       $a1, $a1, 0x7E00
    ctx->pc = 0x1d8070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32256));
    // 0x1d8074: 0x3a13821  addu        $a3, $sp, $at
    ctx->pc = 0x1d8074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1d8078: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x1d8078u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d807c: 0x340180c0  ori         $at, $zero, 0x80C0
    ctx->pc = 0x1d807cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32960);
    // 0x1d8080: 0xc057420  jal         func_15D080
    ctx->pc = 0x1D8080u;
    SET_GPR_U32(ctx, 31, 0x1D8088u);
    ctx->pc = 0x1D8084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8080u;
            // 0x1d8084: 0x3a14021  addu        $t0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D080u;
    if (runtime->hasFunction(0x15D080u)) {
        auto targetFn = runtime->lookupFunction(0x15D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8088u; }
        if (ctx->pc != 0x1D8088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceParts__4CMapFPcPfPfPfP9mgCMemory_0x15d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8088u; }
        if (ctx->pc != 0x1D8088u) { return; }
    }
    ctx->pc = 0x1D8088u;
label_1d8088:
    // 0x1d8088: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d8088u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d808c:
    // 0x1d808c: 0x0  nop
    ctx->pc = 0x1d808cu;
    // NOP
    // 0x1d8090: 0x87c40000  lh          $a0, 0x0($fp)
    ctx->pc = 0x1d8090u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1d8094: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d8094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d8098: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1D8098u;
    {
        const bool branch_taken_0x1d8098 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D809Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8098u;
            // 0x1d809c: 0x340180a0  ori         $at, $zero, 0x80A0 (Delay Slot)
        SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32928);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8098) {
            ctx->pc = 0x1D80CCu;
            goto label_1d80cc;
        }
    }
    ctx->pc = 0x1D80A0u;
    // 0x1d80a0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1d80a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1d80a4: 0x3a13021  addu        $a2, $sp, $at
    ctx->pc = 0x1d80a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1d80a8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d80a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80ac: 0x340180b0  ori         $at, $zero, 0x80B0
    ctx->pc = 0x1d80acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32944);
    // 0x1d80b0: 0x24a57e08  addiu       $a1, $a1, 0x7E08
    ctx->pc = 0x1d80b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32264));
    // 0x1d80b4: 0x3a13821  addu        $a3, $sp, $at
    ctx->pc = 0x1d80b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
    // 0x1d80b8: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x1d80b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d80bc: 0x340180c0  ori         $at, $zero, 0x80C0
    ctx->pc = 0x1d80bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32960);
    // 0x1d80c0: 0xc057420  jal         func_15D080
    ctx->pc = 0x1D80C0u;
    SET_GPR_U32(ctx, 31, 0x1D80C8u);
    ctx->pc = 0x1D80C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D80C0u;
            // 0x1d80c4: 0x3a14021  addu        $t0, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D080u;
    if (runtime->hasFunction(0x15D080u)) {
        auto targetFn = runtime->lookupFunction(0x15D080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D80C8u; }
        if (ctx->pc != 0x1D80C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceParts__4CMapFPcPfPfPfP9mgCMemory_0x15d080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D80C8u; }
        if (ctx->pc != 0x1D80C8u) { return; }
    }
    ctx->pc = 0x1D80C8u;
label_1d80c8:
    // 0x1d80c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d80c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d80cc:
    // 0x1d80cc: 0x0  nop
    ctx->pc = 0x1d80ccu;
    // NOP
    // 0x1d80d0: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D80D0u;
    {
        const bool branch_taken_0x1d80d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D80D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D80D0u;
            // 0x1d80d4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80d0) {
            ctx->pc = 0x1D80DCu;
            goto label_1d80dc;
        }
    }
    ctx->pc = 0x1D80D8u;
    // 0x1d80d8: 0xae6301dc  sw          $v1, 0x1DC($s3)
    ctx->pc = 0x1d80d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 476), GPR_U32(ctx, 3));
label_1d80dc:
    // 0x1d80dc: 0x0  nop
    ctx->pc = 0x1d80dcu;
    // NOP
    // 0x1d80e0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1d80e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1d80e4: 0x2b1182a  slt         $v1, $s5, $s1
    ctx->pc = 0x1d80e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1d80e8: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
    ctx->pc = 0x1D80E8u;
    {
        const bool branch_taken_0x1d80e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d80e8) {
            ctx->pc = 0x1D7FC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7fc8;
        }
    }
    ctx->pc = 0x1D80F0u;
label_1d80f0:
    // 0x1d80f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d80f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d80f4: 0x292182a  slt         $v1, $s4, $s2
    ctx->pc = 0x1d80f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d80f8: 0x1460ffb1  bnez        $v1, . + 4 + (-0x4F << 2)
    ctx->pc = 0x1D80F8u;
    {
        const bool branch_taken_0x1d80f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D80FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D80F8u;
            // 0x1d80fc: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80f8) {
            ctx->pc = 0x1D7FC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7fc0;
        }
    }
    ctx->pc = 0x1D8100u;
label_1d8100:
    // 0x1d8100: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1d8100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d8104: 0x340180d0  ori         $at, $zero, 0x80D0
    ctx->pc = 0x1d8104u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32976);
    // 0x1d8108: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d8108u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d810c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d810cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8110: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d8110u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d8114: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d8114u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8118: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d8118u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d811c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d811cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8120: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d8120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8124: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d8124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8128: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d812c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D812Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D812Cu;
            // 0x1d8130: 0x3a1e821  addu        $sp, $sp, $at (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8134u;
}

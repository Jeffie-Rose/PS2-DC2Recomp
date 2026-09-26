#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEtcTbl2Value__14CPosDataManageFPcPfi
// Address: 0x22acc0 - 0x22ad9c
void GetEtcTbl2Value__14CPosDataManageFPcPfi_0x22acc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEtcTbl2Value__14CPosDataManageFPcPfi_0x22acc0");
#endif

    switch (ctx->pc) {
        case 0x22acdcu: goto label_22acdc;
        case 0x22acfcu: goto label_22acfc;
        case 0x22ad64u: goto label_22ad64;
        default: break;
    }

    ctx->pc = 0x22acc0u;

    // 0x22acc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22acc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22acc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22acc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22acc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22acc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22accc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22acccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22acd0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22acd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22acd4: 0xc08ab0c  jal         func_22AC30
    ctx->pc = 0x22ACD4u;
    SET_GPR_U32(ctx, 31, 0x22ACDCu);
    ctx->pc = 0x22ACD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22ACD4u;
            // 0x22acd8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AC30u;
    if (runtime->hasFunction(0x22AC30u)) {
        auto targetFn = runtime->lookupFunction(0x22AC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ACDCu; }
        if (ctx->pc != 0x22ACDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTbl2__14CPosDataManageFPc_0x22ac30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22ACDCu; }
        if (ctx->pc != 0x22ACDCu) { return; }
    }
    ctx->pc = 0x22ACDCu;
label_22acdc:
    // 0x22acdc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x22ACDCu;
    {
        const bool branch_taken_0x22acdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ACE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ACDCu;
            // 0x22ace0: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22acdc) {
            ctx->pc = 0x22AD88u;
            goto label_22ad88;
        }
    }
    ctx->pc = 0x22ACE4u;
    // 0x22ace4: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x22ACE4u;
    {
        const bool branch_taken_0x22ace4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ACE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ACE4u;
            // 0x22ace8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ace4) {
            ctx->pc = 0x22AD84u;
            goto label_22ad84;
        }
    }
    ctx->pc = 0x22ACECu;
    // 0x22acec: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x22acecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x22acf0: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x22ACF0u;
    {
        const bool branch_taken_0x22acf0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x22ACF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ACF0u;
            // 0x22acf4: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22acf0) {
            ctx->pc = 0x22AD54u;
            goto label_22ad54;
        }
    }
    ctx->pc = 0x22ACF8u;
    // 0x22acf8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22acf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22acfc:
    // 0x22acfc: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x22acfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22ad00: 0x2264021  addu        $t0, $s1, $a2
    ctx->pc = 0x22ad00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x22ad04: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x22ad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ad08: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x22ad08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x22ad0c: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x22ad0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x22ad10: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x22ad10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x22ad14: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x22ad14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x22ad18: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x22ad18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ad1c: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x22ad1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x22ad20: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x22ad20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ad24: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x22ad24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x22ad28: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x22ad28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ad2c: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x22ad2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x22ad30: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x22ad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ad34: 0xe5000010  swc1        $f0, 0x10($t0)
    ctx->pc = 0x22ad34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
    // 0x22ad38: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x22ad38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ad3c: 0xe5000014  swc1        $f0, 0x14($t0)
    ctx->pc = 0x22ad3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
    // 0x22ad40: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x22ad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ad44: 0xe5000018  swc1        $f0, 0x18($t0)
    ctx->pc = 0x22ad44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 24), bits); }
    // 0x22ad48: 0xc4e00020  lwc1        $f0, 0x20($a3)
    ctx->pc = 0x22ad48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ad4c: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x22AD4Cu;
    {
        const bool branch_taken_0x22ad4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AD4Cu;
            // 0x22ad50: 0xe500001c  swc1        $f0, 0x1C($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad4c) {
            ctx->pc = 0x22ACFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22acfc;
        }
    }
    ctx->pc = 0x22AD54u;
label_22ad54:
    // 0x22ad54: 0x0  nop
    ctx->pc = 0x22ad54u;
    // NOP
    // 0x22ad58: 0xb0082a  slt         $at, $a1, $s0
    ctx->pc = 0x22ad58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x22ad5c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x22AD5Cu;
    {
        const bool branch_taken_0x22ad5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AD5Cu;
            // 0x22ad60: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad5c) {
            ctx->pc = 0x22AD84u;
            goto label_22ad84;
        }
    }
    ctx->pc = 0x22AD64u;
label_22ad64:
    // 0x22ad64: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x22ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x22ad68: 0x2262021  addu        $a0, $s1, $a2
    ctx->pc = 0x22ad68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x22ad6c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x22ad6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ad70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22ad70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x22ad74: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x22ad74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x22ad78: 0xb0182a  slt         $v1, $a1, $s0
    ctx->pc = 0x22ad78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x22ad7c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22AD7Cu;
    {
        const bool branch_taken_0x22ad7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AD7Cu;
            // 0x22ad80: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad7c) {
            ctx->pc = 0x22AD64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22ad64;
        }
    }
    ctx->pc = 0x22AD84u;
label_22ad84:
    // 0x22ad84: 0x0  nop
    ctx->pc = 0x22ad84u;
    // NOP
label_22ad88:
    // 0x22ad88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22ad88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ad8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22ad8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ad90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ad90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ad94: 0x3e00008  jr          $ra
    ctx->pc = 0x22AD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AD94u;
            // 0x22ad98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22AD9Cu;
}

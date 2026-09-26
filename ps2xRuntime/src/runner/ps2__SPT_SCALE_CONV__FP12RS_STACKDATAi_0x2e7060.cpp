#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_SCALE_CONV__FP12RS_STACKDATAi
// Address: 0x2e7060 - 0x2e7148
void ps2__SPT_SCALE_CONV__FP12RS_STACKDATAi_0x2e7060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_SCALE_CONV__FP12RS_STACKDATAi_0x2e7060");
#endif

    switch (ctx->pc) {
        case 0x2e7094u: goto label_2e7094;
        case 0x2e70a4u: goto label_2e70a4;
        case 0x2e70b4u: goto label_2e70b4;
        case 0x2e70c4u: goto label_2e70c4;
        case 0x2e70d8u: goto label_2e70d8;
        case 0x2e70e4u: goto label_2e70e4;
        case 0x2e70ecu: goto label_2e70ec;
        default: break;
    }

    ctx->pc = 0x2e7060u;

    // 0x2e7060: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e7060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e7064: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e7064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e7068: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e7068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e706c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e706cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e7070: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e7070u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e7074: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e7074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e7078: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e7078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e707c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e707cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e7080: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e7080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7084: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2e7084u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e7088: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e7088u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e708c: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E708Cu;
    SET_GPR_U32(ctx, 31, 0x2E7094u);
    ctx->pc = 0x2E7090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E708Cu;
            // 0x2e7090: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7094u; }
        if (ctx->pc != 0x2E7094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E7094u; }
        if (ctx->pc != 0x2E7094u) { return; }
    }
    ctx->pc = 0x2E7094u;
label_2e7094:
    // 0x2e7094: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e7094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7098: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e7098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e709c: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E709Cu;
    SET_GPR_U32(ctx, 31, 0x2E70A4u);
    ctx->pc = 0x2E70A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E709Cu;
            // 0x2e70a0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E70A4u; }
        if (ctx->pc != 0x2E70A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E70A4u; }
        if (ctx->pc != 0x2E70A4u) { return; }
    }
    ctx->pc = 0x2E70A4u;
label_2e70a4:
    // 0x2e70a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e70a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e70a8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2e70a8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2e70ac: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E70ACu;
    SET_GPR_U32(ctx, 31, 0x2E70B4u);
    ctx->pc = 0x2E70B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E70ACu;
            // 0x2e70b0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E70B4u; }
        if (ctx->pc != 0x2E70B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E70B4u; }
        if (ctx->pc != 0x2E70B4u) { return; }
    }
    ctx->pc = 0x2E70B4u;
label_2e70b4:
    // 0x2e70b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e70b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e70b8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2e70b8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2e70bc: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E70BCu;
    SET_GPR_U32(ctx, 31, 0x2E70C4u);
    ctx->pc = 0x2E70C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E70BCu;
            // 0x2e70c0: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E70C4u; }
        if (ctx->pc != 0x2E70C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E70C4u; }
        if (ctx->pc != 0x2E70C4u) { return; }
    }
    ctx->pc = 0x2E70C4u;
label_2e70c4:
    // 0x2e70c4: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x2e70c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e70c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E70C8u;
    {
        const bool branch_taken_0x2e70c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E70CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E70C8u;
            // 0x2e70cc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e70c8) {
            ctx->pc = 0x2E70DCu;
            goto label_2e70dc;
        }
    }
    ctx->pc = 0x2E70D0u;
    // 0x2e70d0: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E70D0u;
    SET_GPR_U32(ctx, 31, 0x2E70D8u);
    ctx->pc = 0x2E70D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E70D0u;
            // 0x2e70d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E70D8u; }
        if (ctx->pc != 0x2E70D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E70D8u; }
        if (ctx->pc != 0x2E70D8u) { return; }
    }
    ctx->pc = 0x2E70D8u;
label_2e70d8:
    // 0x2e70d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e70d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e70dc:
    // 0x2e70dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E70DCu;
    {
        const bool branch_taken_0x2e70dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E70E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E70DCu;
            // 0x2e70e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e70dc) {
            ctx->pc = 0x2E710Cu;
            goto label_2e710c;
        }
    }
    ctx->pc = 0x2E70E4u;
label_2e70e4:
    // 0x2e70e4: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E70E4u;
    SET_GPR_U32(ctx, 31, 0x2E70ECu);
    ctx->pc = 0x2E70E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E70E4u;
            // 0x2e70e8: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E70ECu; }
        if (ctx->pc != 0x2E70ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E70ECu; }
        if (ctx->pc != 0x2E70ECu) { return; }
    }
    ctx->pc = 0x2E70ECu;
label_2e70ec:
    // 0x2e70ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E70ECu;
    {
        const bool branch_taken_0x2e70ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e70ec) {
            ctx->pc = 0x2E70FCu;
            goto label_2e70fc;
        }
    }
    ctx->pc = 0x2E70F4u;
    // 0x2e70f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E70F4u;
    {
        const bool branch_taken_0x2e70f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E70F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E70F4u;
            // 0x2e70f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e70f4) {
            ctx->pc = 0x2E7120u;
            goto label_2e7120;
        }
    }
    ctx->pc = 0x2E70FCu;
label_2e70fc:
    // 0x2e70fc: 0xe45500b8  swc1        $f21, 0xB8($v0)
    ctx->pc = 0x2e70fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x2e7100: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e7100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e7104: 0xe45600bc  swc1        $f22, 0xBC($v0)
    ctx->pc = 0x2e7104u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x2e7108: 0xe45400c0  swc1        $f20, 0xC0($v0)
    ctx->pc = 0x2e7108u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
label_2e710c:
    // 0x2e710c: 0x0  nop
    ctx->pc = 0x2e710cu;
    // NOP
    // 0x2e7110: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2e7110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e7114: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e7114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e7118: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2E7118u;
    {
        const bool branch_taken_0x2e7118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E711Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7118u;
            // 0x2e711c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7118) {
            ctx->pc = 0x2E70E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e70e4;
        }
    }
    ctx->pc = 0x2E7120u;
label_2e7120:
    // 0x2e7120: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e7120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e7124: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2e7124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e7128: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e7128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e712c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e712cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e7130: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e7130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7134: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e7134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e7138: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e7138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e713c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e713cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7140: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E7140u;
            // 0x2e7144: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E7148u;
}

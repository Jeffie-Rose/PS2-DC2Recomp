#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_ADD_ROTZ__FP12RS_STACKDATAi
// Address: 0x2e6580 - 0x2e6648
void ps2__SPT_ADD_ROTZ__FP12RS_STACKDATAi_0x2e6580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_ADD_ROTZ__FP12RS_STACKDATAi_0x2e6580");
#endif

    switch (ctx->pc) {
        case 0x2e65acu: goto label_2e65ac;
        case 0x2e65bcu: goto label_2e65bc;
        case 0x2e65d0u: goto label_2e65d0;
        case 0x2e65dcu: goto label_2e65dc;
        case 0x2e65e8u: goto label_2e65e8;
        case 0x2e660cu: goto label_2e660c;
        default: break;
    }

    ctx->pc = 0x2e6580u;

    // 0x2e6580: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e6580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e6584: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e6584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e6588: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e6588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e658c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e658cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e6590: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e6590u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e6594: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e6594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e6598: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e6598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e659c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e659cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e65a0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e65a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e65a4: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E65A4u;
    SET_GPR_U32(ctx, 31, 0x2E65ACu);
    ctx->pc = 0x2E65A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E65A4u;
            // 0x2e65a8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E65ACu; }
        if (ctx->pc != 0x2E65ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E65ACu; }
        if (ctx->pc != 0x2E65ACu) { return; }
    }
    ctx->pc = 0x2E65ACu;
label_2e65ac:
    // 0x2e65ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e65acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e65b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e65b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e65b4: 0xc0b8cb0  jal         func_2E32C0
    ctx->pc = 0x2E65B4u;
    SET_GPR_U32(ctx, 31, 0x2E65BCu);
    ctx->pc = 0x2E65B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E65B4u;
            // 0x2e65b8: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E32C0u;
    if (runtime->hasFunction(0x2E32C0u)) {
        auto targetFn = runtime->lookupFunction(0x2E32C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E65BCu; }
        if (ctx->pc != 0x2E65BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2e32c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E65BCu; }
        if (ctx->pc != 0x2E65BCu) { return; }
    }
    ctx->pc = 0x2E65BCu;
label_2e65bc:
    // 0x2e65bc: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x2e65bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e65c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E65C0u;
    {
        const bool branch_taken_0x2e65c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E65C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E65C0u;
            // 0x2e65c4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65c0) {
            ctx->pc = 0x2E65D4u;
            goto label_2e65d4;
        }
    }
    ctx->pc = 0x2E65C8u;
    // 0x2e65c8: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E65C8u;
    SET_GPR_U32(ctx, 31, 0x2E65D0u);
    ctx->pc = 0x2E65CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E65C8u;
            // 0x2e65cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E65D0u; }
        if (ctx->pc != 0x2E65D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E65D0u; }
        if (ctx->pc != 0x2E65D0u) { return; }
    }
    ctx->pc = 0x2E65D0u;
label_2e65d0:
    // 0x2e65d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e65d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e65d4:
    // 0x2e65d4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E65D4u;
    {
        const bool branch_taken_0x2e65d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E65D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E65D4u;
            // 0x2e65d8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65d4) {
            ctx->pc = 0x2E6614u;
            goto label_2e6614;
        }
    }
    ctx->pc = 0x2E65DCu;
label_2e65dc:
    // 0x2e65dc: 0x8f849ed0  lw          $a0, -0x6130($gp)
    ctx->pc = 0x2e65dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e65e0: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E65E0u;
    SET_GPR_U32(ctx, 31, 0x2E65E8u);
    ctx->pc = 0x2E65E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E65E0u;
            // 0x2e65e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E65E8u; }
        if (ctx->pc != 0x2E65E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E65E8u; }
        if (ctx->pc != 0x2E65E8u) { return; }
    }
    ctx->pc = 0x2E65E8u;
label_2e65e8:
    // 0x2e65e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e65e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e65ec: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E65ECu;
    {
        const bool branch_taken_0x2e65ec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E65F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E65ECu;
            // 0x2e65f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65ec) {
            ctx->pc = 0x2E65FCu;
            goto label_2e65fc;
        }
    }
    ctx->pc = 0x2E65F4u;
    // 0x2e65f4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E65F4u;
    {
        const bool branch_taken_0x2e65f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E65F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E65F4u;
            // 0x2e65f8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e65f4) {
            ctx->pc = 0x2E662Cu;
            goto label_2e662c;
        }
    }
    ctx->pc = 0x2E65FCu;
label_2e65fc:
    // 0x2e65fc: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x2e65fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e6600: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x2e6600u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2e6604: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2E6604u;
    SET_GPR_U32(ctx, 31, 0x2E660Cu);
    ctx->pc = 0x2E6608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6604u;
            // 0x2e6608: 0xe66c0050  swc1        $f12, 0x50($s3) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E660Cu; }
        if (ctx->pc != 0x2E660Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E660Cu; }
        if (ctx->pc != 0x2E660Cu) { return; }
    }
    ctx->pc = 0x2E660Cu;
label_2e660c:
    // 0x2e660c: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x2e660cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x2e6610: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e6610u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2e6614:
    // 0x2e6614: 0x0  nop
    ctx->pc = 0x2e6614u;
    // NOP
    // 0x2e6618: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2e6618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2e661c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2e661cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e6620: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2E6620u;
    {
        const bool branch_taken_0x2e6620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6620u;
            // 0x2e6624: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6620) {
            ctx->pc = 0x2E65DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e65dc;
        }
    }
    ctx->pc = 0x2E6628u;
    // 0x2e6628: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e6628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e662c:
    // 0x2e662c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e662cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e6630: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e6630u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e6634: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e6634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6638: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e6638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e663c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e663cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6640: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E6640u;
            // 0x2e6644: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E6648u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sceDevFontRefDirectImage
// Address: 0x105e18 - 0x105fa0
void sceDevFontRefDirectImage_0x105e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevFontRefDirectImage_0x105e18");
#endif

    switch (ctx->pc) {
        case 0x105e90u: goto label_105e90;
        case 0x105ec4u: goto label_105ec4;
        case 0x105ed0u: goto label_105ed0;
        case 0x105edcu: goto label_105edc;
        case 0x105ee8u: goto label_105ee8;
        case 0x105ef4u: goto label_105ef4;
        case 0x105f00u: goto label_105f00;
        case 0x105f0cu: goto label_105f0c;
        case 0x105f18u: goto label_105f18;
        case 0x105f24u: goto label_105f24;
        case 0x105f30u: goto label_105f30;
        case 0x105f3cu: goto label_105f3c;
        case 0x105f48u: goto label_105f48;
        case 0x105f54u: goto label_105f54;
        case 0x105f5cu: goto label_105f5c;
        default: break;
    }

    ctx->pc = 0x105e18u;

    // 0x105e18: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x105e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x105e1c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x105e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x105e20: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x105e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x105e24: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x105e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105e2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x105e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e30: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x105e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x105e34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105e38: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x105e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x105e3c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x105e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x105e40: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x105e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x105e44: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x105e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x105e48: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x105e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x105e4c: 0x12400048  beqz        $s2, . + 4 + (0x48 << 2)
    ctx->pc = 0x105E4Cu;
    {
        const bool branch_taken_0x105e4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x105E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105E4Cu;
            // 0x105e50: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e4c) {
            ctx->pc = 0x105F70u;
            goto label_105f70;
        }
    }
    ctx->pc = 0x105E54u;
    // 0x105e54: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x105e54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x105e58: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x105e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x105e5c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x105e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x105e60: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x105e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x105e64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x105e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x105e68: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x105e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x105e6c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x105e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x105e70: 0x6b03c  dsll32      $s6, $a2, 0
    ctx->pc = 0x105e70u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) << (32 + 0));
    // 0x105e74: 0x3adfa  dsrl        $s5, $v1, 23
    ctx->pc = 0x105e74u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) >> 23);
    // 0x105e78: 0x222882f  dsubu       $s1, $s1, $v0
    ctx->pc = 0x105e78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
    // 0x105e7c: 0x249efd58  addiu       $fp, $a0, -0x2A8
    ctx->pc = 0x105e7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966616));
    // 0x105e80: 0x7a03c  dsll32      $s4, $a3, 0
    ctx->pc = 0x105e80u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 7) << (32 + 0));
    // 0x105e84: 0x24130007  addiu       $s3, $zero, 0x7
    ctx->pc = 0x105e84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x105e88: 0x241700c2  addiu       $s7, $zero, 0xC2
    ctx->pc = 0x105e88u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x105e8c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x105e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_105e90:
    // 0x105e90: 0x16183e  dsrl32      $v1, $s6, 0
    ctx->pc = 0x105e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x105e94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x105e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x105e98: 0x223882d  daddu       $s1, $s1, $v1
    ctx->pc = 0x105e98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
    // 0x105e9c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x105E9Cu;
    {
        const bool branch_taken_0x105e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105E9Cu;
            // 0x105ea0: 0x12923a  dsrl        $s2, $s2, 8 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105e9c) {
            ctx->pc = 0x105F5Cu;
            goto label_105f5c;
        }
    }
    ctx->pc = 0x105EA4u;
    // 0x105ea4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x105ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x105ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105eac: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x105eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x105eb0: 0x3c05c400  lui         $a1, 0xC400
    ctx->pc = 0x105eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50176 << 16));
    // 0x105eb4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x105eb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x105eb8: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x105eb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x105ebc: 0xc04188e  jal         func_106238
    ctx->pc = 0x105EBCu;
    SET_GPR_U32(ctx, 31, 0x105EC4u);
    ctx->pc = 0x105EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105EBCu;
            // 0x105ec0: 0xdc460000  ld          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106238u;
    if (runtime->hasFunction(0x106238u)) {
        auto targetFn = runtime->lookupFunction(0x106238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105EC4u; }
        if (ctx->pc != 0x105EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        chaGifPkOpenGifTag2_0x106238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105EC4u; }
        if (ctx->pc != 0x105EC4u) { return; }
    }
    ctx->pc = 0x105EC4u;
label_105ec4:
    // 0x105ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ec8: 0xc041a42  jal         func_106908
    ctx->pc = 0x105EC8u;
    SET_GPR_U32(ctx, 31, 0x105ED0u);
    ctx->pc = 0x105ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105EC8u;
            // 0x105ecc: 0x2b72825  or          $a1, $s5, $s7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106908u;
    if (runtime->hasFunction(0x106908u)) {
        auto targetFn = runtime->lookupFunction(0x106908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105ED0u; }
        if (ctx->pc != 0x105ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsData_0x106908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105ED0u; }
        if (ctx->pc != 0x105ED0u) { return; }
    }
    ctx->pc = 0x105ED0u;
label_105ed0:
    // 0x105ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ed4: 0xc041a42  jal         func_106908
    ctx->pc = 0x105ED4u;
    SET_GPR_U32(ctx, 31, 0x105EDCu);
    ctx->pc = 0x105ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105ED4u;
            // 0x105ed8: 0x14283e  dsrl32      $a1, $s4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106908u;
    if (runtime->hasFunction(0x106908u)) {
        auto targetFn = runtime->lookupFunction(0x106908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105EDCu; }
        if (ctx->pc != 0x105EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsData_0x106908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105EDCu; }
        if (ctx->pc != 0x105EDCu) { return; }
    }
    ctx->pc = 0x105EDCu;
label_105edc:
    // 0x105edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ee0: 0xc041a42  jal         func_106908
    ctx->pc = 0x105EE0u;
    SET_GPR_U32(ctx, 31, 0x105EE8u);
    ctx->pc = 0x105EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105EE0u;
            // 0x105ee4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106908u;
    if (runtime->hasFunction(0x106908u)) {
        auto targetFn = runtime->lookupFunction(0x106908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105EE8u; }
        if (ctx->pc != 0x105EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsData_0x106908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105EE8u; }
        if (ctx->pc != 0x105EE8u) { return; }
    }
    ctx->pc = 0x105EE8u;
label_105ee8:
    // 0x105ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105eec: 0xc041a42  jal         func_106908
    ctx->pc = 0x105EECu;
    SET_GPR_U32(ctx, 31, 0x105EF4u);
    ctx->pc = 0x105EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105EECu;
            // 0x105ef0: 0x66250010  daddiu      $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)16);
        ctx->in_delay_slot = false;
    ctx->pc = 0x106908u;
    if (runtime->hasFunction(0x106908u)) {
        auto targetFn = runtime->lookupFunction(0x106908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105EF4u; }
        if (ctx->pc != 0x105EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsData_0x106908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105EF4u; }
        if (ctx->pc != 0x105EF4u) { return; }
    }
    ctx->pc = 0x105EF4u;
label_105ef4:
    // 0x105ef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ef8: 0xc041a42  jal         func_106908
    ctx->pc = 0x105EF8u;
    SET_GPR_U32(ctx, 31, 0x105F00u);
    ctx->pc = 0x105EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105EF8u;
            // 0x105efc: 0x66250020  daddiu      $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x106908u;
    if (runtime->hasFunction(0x106908u)) {
        auto targetFn = runtime->lookupFunction(0x106908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F00u; }
        if (ctx->pc != 0x105F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsData_0x106908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F00u; }
        if (ctx->pc != 0x105F00u) { return; }
    }
    ctx->pc = 0x105F00u;
label_105f00:
    // 0x105f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f04: 0xc041a42  jal         func_106908
    ctx->pc = 0x105F04u;
    SET_GPR_U32(ctx, 31, 0x105F0Cu);
    ctx->pc = 0x105F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105F04u;
            // 0x105f08: 0x66250030  daddiu      $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
    ctx->pc = 0x106908u;
    if (runtime->hasFunction(0x106908u)) {
        auto targetFn = runtime->lookupFunction(0x106908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F0Cu; }
        if (ctx->pc != 0x105F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsData_0x106908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F0Cu; }
        if (ctx->pc != 0x105F0Cu) { return; }
    }
    ctx->pc = 0x105F0Cu;
label_105f0c:
    // 0x105f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f10: 0xc041a42  jal         func_106908
    ctx->pc = 0x105F10u;
    SET_GPR_U32(ctx, 31, 0x105F18u);
    ctx->pc = 0x105F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105F10u;
            // 0x105f14: 0x66250040  daddiu      $a1, $s1, 0x40 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)64);
        ctx->in_delay_slot = false;
    ctx->pc = 0x106908u;
    if (runtime->hasFunction(0x106908u)) {
        auto targetFn = runtime->lookupFunction(0x106908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F18u; }
        if (ctx->pc != 0x105F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsData_0x106908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F18u; }
        if (ctx->pc != 0x105F18u) { return; }
    }
    ctx->pc = 0x105F18u;
label_105f18:
    // 0x105f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f1c: 0xc041a42  jal         func_106908
    ctx->pc = 0x105F1Cu;
    SET_GPR_U32(ctx, 31, 0x105F24u);
    ctx->pc = 0x105F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105F1Cu;
            // 0x105f20: 0x66250050  daddiu      $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)80);
        ctx->in_delay_slot = false;
    ctx->pc = 0x106908u;
    if (runtime->hasFunction(0x106908u)) {
        auto targetFn = runtime->lookupFunction(0x106908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F24u; }
        if (ctx->pc != 0x105F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsData_0x106908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F24u; }
        if (ctx->pc != 0x105F24u) { return; }
    }
    ctx->pc = 0x105F24u;
label_105f24:
    // 0x105f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f28: 0xc041a42  jal         func_106908
    ctx->pc = 0x105F28u;
    SET_GPR_U32(ctx, 31, 0x105F30u);
    ctx->pc = 0x105F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105F28u;
            // 0x105f2c: 0x66250060  daddiu      $a1, $s1, 0x60 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)96);
        ctx->in_delay_slot = false;
    ctx->pc = 0x106908u;
    if (runtime->hasFunction(0x106908u)) {
        auto targetFn = runtime->lookupFunction(0x106908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F30u; }
        if (ctx->pc != 0x105F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsData_0x106908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F30u; }
        if (ctx->pc != 0x105F30u) { return; }
    }
    ctx->pc = 0x105F30u;
label_105f30:
    // 0x105f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f34: 0xc041a42  jal         func_106908
    ctx->pc = 0x105F34u;
    SET_GPR_U32(ctx, 31, 0x105F3Cu);
    ctx->pc = 0x105F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105F34u;
            // 0x105f38: 0x66250070  daddiu      $a1, $s1, 0x70 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)112);
        ctx->in_delay_slot = false;
    ctx->pc = 0x106908u;
    if (runtime->hasFunction(0x106908u)) {
        auto targetFn = runtime->lookupFunction(0x106908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F3Cu; }
        if (ctx->pc != 0x105F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsData_0x106908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F3Cu; }
        if (ctx->pc != 0x105F3Cu) { return; }
    }
    ctx->pc = 0x105F3Cu;
label_105f3c:
    // 0x105f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f40: 0xc041a42  jal         func_106908
    ctx->pc = 0x105F40u;
    SET_GPR_U32(ctx, 31, 0x105F48u);
    ctx->pc = 0x105F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105F40u;
            // 0x105f44: 0x66250080  daddiu      $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x106908u;
    if (runtime->hasFunction(0x106908u)) {
        auto targetFn = runtime->lookupFunction(0x106908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F48u; }
        if (ctx->pc != 0x105F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsData_0x106908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F48u; }
        if (ctx->pc != 0x105F48u) { return; }
    }
    ctx->pc = 0x105F48u;
label_105f48:
    // 0x105f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105f4c: 0xc041a42  jal         func_106908
    ctx->pc = 0x105F4Cu;
    SET_GPR_U32(ctx, 31, 0x105F54u);
    ctx->pc = 0x105F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105F4Cu;
            // 0x105f50: 0x66250090  daddiu      $a1, $s1, 0x90 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)144);
        ctx->in_delay_slot = false;
    ctx->pc = 0x106908u;
    if (runtime->hasFunction(0x106908u)) {
        auto targetFn = runtime->lookupFunction(0x106908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F54u; }
        if (ctx->pc != 0x105F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkAddGsData_0x106908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F54u; }
        if (ctx->pc != 0x105F54u) { return; }
    }
    ctx->pc = 0x105F54u;
label_105f54:
    // 0x105f54: 0xc041a18  jal         func_106860
    ctx->pc = 0x105F54u;
    SET_GPR_U32(ctx, 31, 0x105F5Cu);
    ctx->pc = 0x105F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105F54u;
            // 0x105f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106860u;
    if (runtime->hasFunction(0x106860u)) {
        auto targetFn = runtime->lookupFunction(0x106860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F5Cu; }
        if (ctx->pc != 0x105F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGifPkCloseGifTag_0x106860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105F5Cu; }
        if (ctx->pc != 0x105F5Cu) { return; }
    }
    ctx->pc = 0x105F5Cu;
label_105f5c:
    // 0x105f5c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x105f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x105f60: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x105f60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x105f64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x105f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x105f68: 0x1662ffc9  bne         $s3, $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x105F68u;
    {
        const bool branch_taken_0x105f68 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x105F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105F68u;
            // 0x105f6c: 0x324200ff  andi        $v0, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f68) {
            ctx->pc = 0x105E90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_105e90;
        }
    }
    ctx->pc = 0x105F70u;
label_105f70:
    // 0x105f70: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x105f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x105f74: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x105f74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x105f78: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x105f78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x105f7c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x105f7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x105f80: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x105f80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105f84: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x105f84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x105f88: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x105f88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105f8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x105f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105f90: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x105f90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105f94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105f98: 0x3e00008  jr          $ra
    ctx->pc = 0x105F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105F98u;
            // 0x105f9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x105FA0u;
}

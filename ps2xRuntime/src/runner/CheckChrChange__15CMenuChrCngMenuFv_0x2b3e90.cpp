#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckChrChange__15CMenuChrCngMenuFv
// Address: 0x2b3e90 - 0x2b4074
void CheckChrChange__15CMenuChrCngMenuFv_0x2b3e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckChrChange__15CMenuChrCngMenuFv_0x2b3e90");
#endif

    switch (ctx->pc) {
        case 0x2b3eb0u: goto label_2b3eb0;
        case 0x2b3f40u: goto label_2b3f40;
        case 0x2b3f50u: goto label_2b3f50;
        case 0x2b3fb8u: goto label_2b3fb8;
        case 0x2b3fe0u: goto label_2b3fe0;
        case 0x2b3fecu: goto label_2b3fec;
        case 0x2b3ff4u: goto label_2b3ff4;
        case 0x2b4024u: goto label_2b4024;
        case 0x2b4034u: goto label_2b4034;
        case 0x2b4040u: goto label_2b4040;
        default: break;
    }

    ctx->pc = 0x2b3e90u;

    // 0x2b3e90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b3e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b3e94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b3e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b3e98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b3e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b3e9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b3e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b3ea0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b3ea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ea4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b3ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b3ea8: 0xc05239c  jal         func_148E70
    ctx->pc = 0x2B3EA8u;
    SET_GPR_U32(ctx, 31, 0x2B3EB0u);
    ctx->pc = 0x2B3EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3EA8u;
            // 0x2b3eac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3EB0u; }
        if (ctx->pc != 0x2B3EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3EB0u; }
        if (ctx->pc != 0x2B3EB0u) { return; }
    }
    ctx->pc = 0x2B3EB0u;
label_2b3eb0:
    // 0x2b3eb0: 0x86460120  lh          $a2, 0x120($s2)
    ctx->pc = 0x2b3eb0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x2b3eb4: 0x3c1101ed  lui         $s1, 0x1ED
    ctx->pc = 0x2b3eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)493 << 16));
    // 0x2b3eb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b3eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b3ebc: 0x10c30065  beq         $a2, $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x2B3EBCu;
    {
        const bool branch_taken_0x2b3ebc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B3EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3EBCu;
            // 0x2b3ec0: 0x2631dbf0  addiu       $s1, $s1, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294958064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ebc) {
            ctx->pc = 0x2B4054u;
            goto label_2b4054;
        }
    }
    ctx->pc = 0x2B3EC4u;
    // 0x2b3ec4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2b3ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3ec8: 0x10c50024  beq         $a2, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B3EC8u;
    {
        const bool branch_taken_0x2b3ec8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B3ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3EC8u;
            // 0x2b3ecc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ec8) {
            ctx->pc = 0x2B3F5Cu;
            goto label_2b3f5c;
        }
    }
    ctx->pc = 0x2B3ED0u;
    // 0x2b3ed0: 0x10c40005  beq         $a2, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3ED0u;
    {
        const bool branch_taken_0x2b3ed0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b3ed0) {
            ctx->pc = 0x2B3EE8u;
            goto label_2b3ee8;
        }
    }
    ctx->pc = 0x2B3ED8u;
    // 0x2b3ed8: 0x10c00060  beqz        $a2, . + 4 + (0x60 << 2)
    ctx->pc = 0x2B3ED8u;
    {
        const bool branch_taken_0x2b3ed8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3ED8u;
            // 0x2b3edc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ed8) {
            ctx->pc = 0x2B405Cu;
            goto label_2b405c;
        }
    }
    ctx->pc = 0x2B3EE0u;
    // 0x2b3ee0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2B3EE0u;
    {
        const bool branch_taken_0x2b3ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3ee0) {
            ctx->pc = 0x2B4058u;
            goto label_2b4058;
        }
    }
    ctx->pc = 0x2B3EE8u;
label_2b3ee8:
    // 0x2b3ee8: 0x9243011f  lbu         $v1, 0x11F($s2)
    ctx->pc = 0x2b3ee8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 287)));
    // 0x2b3eec: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x2B3EECu;
    {
        const bool branch_taken_0x2b3eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3eec) {
            ctx->pc = 0x2B4058u;
            goto label_2b4058;
        }
    }
    ctx->pc = 0x2B3EF4u;
    // 0x2b3ef4: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2B3EF4u;
    {
        const bool branch_taken_0x2b3ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3ef4) {
            ctx->pc = 0x2B4058u;
            goto label_2b4058;
        }
    }
    ctx->pc = 0x2B3EFCu;
    // 0x2b3efc: 0x86470122  lh          $a3, 0x122($s2)
    ctx->pc = 0x2b3efcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 290)));
    // 0x2b3f00: 0x10e5000f  beq         $a3, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2B3F00u;
    {
        const bool branch_taken_0x2b3f00 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x2b3f00) {
            ctx->pc = 0x2B3F40u;
            goto label_2b3f40;
        }
    }
    ctx->pc = 0x2B3F08u;
    // 0x2b3f08: 0x10e40005  beq         $a3, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3F08u;
    {
        const bool branch_taken_0x2b3f08 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B3F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3F08u;
            // 0x2b3f0c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f08) {
            ctx->pc = 0x2B3F20u;
            goto label_2b3f20;
        }
    }
    ctx->pc = 0x2B3F10u;
    // 0x2b3f10: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3F10u;
    {
        const bool branch_taken_0x2b3f10 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3f10) {
            ctx->pc = 0x2B3F20u;
            goto label_2b3f20;
        }
    }
    ctx->pc = 0x2B3F18u;
    // 0x2b3f18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B3F18u;
    {
        const bool branch_taken_0x2b3f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3F18u;
            // 0x2b3f1c: 0x86450122  lh          $a1, 0x122($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 290)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f18) {
            ctx->pc = 0x2B3F44u;
            goto label_2b3f44;
        }
    }
    ctx->pc = 0x2B3F20u;
label_2b3f20:
    // 0x2b3f20: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2b3f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2b3f24: 0x8429d5fc  lh          $t1, -0x2A04($at)
    ctx->pc = 0x2b3f24u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294956540)));
    // 0x2b3f28: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2b3f28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
    // 0x2b3f2c: 0x2484ca80  addiu       $a0, $a0, -0x3580
    ctx->pc = 0x2b3f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
    // 0x2b3f30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b3f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f34: 0x24c6caa0  addiu       $a2, $a2, -0x3560
    ctx->pc = 0x2b3f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953632));
    // 0x2b3f38: 0xc0ae634  jal         func_2B98D0
    ctx->pc = 0x2B3F38u;
    SET_GPR_U32(ctx, 31, 0x2B3F40u);
    ctx->pc = 0x2B3F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3F38u;
            // 0x2b3f3c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B98D0u;
    if (runtime->hasFunction(0x2B98D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B98D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3F40u; }
        if (ctx->pc != 0x2B3F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoadEndCheck__FPP17MENU_BGREAD_INFO2P9mgCMemoryPP12CActionCharaiii_0x2b98d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3F40u; }
        if (ctx->pc != 0x2B3F40u) { return; }
    }
    ctx->pc = 0x2B3F40u;
label_2b3f40:
    // 0x2b3f40: 0x86450122  lh          $a1, 0x122($s2)
    ctx->pc = 0x2b3f40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 290)));
label_2b3f44:
    // 0x2b3f44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b3f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3f48: 0xc0ae7c8  jal         func_2B9F20
    ctx->pc = 0x2B3F48u;
    SET_GPR_U32(ctx, 31, 0x2B3F50u);
    ctx->pc = 0x2B3F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3F48u;
            // 0x2b3f4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9F20u;
    if (runtime->hasFunction(0x2B9F20u)) {
        auto targetFn = runtime->lookupFunction(0x2B9F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3F50u; }
        if (ctx->pc != 0x2B3F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCharaSoundLoad__FP9mgCMemoryii_0x2b9f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3F50u; }
        if (ctx->pc != 0x2B3F50u) { return; }
    }
    ctx->pc = 0x2B3F50u;
label_2b3f50:
    // 0x2b3f50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b3f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b3f54: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2B3F54u;
    {
        const bool branch_taken_0x2b3f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3F54u;
            // 0x2b3f58: 0xa6420120  sh          $v0, 0x120($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 288), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f54) {
            ctx->pc = 0x2B4058u;
            goto label_2b4058;
        }
    }
    ctx->pc = 0x2B3F5Cu;
label_2b3f5c:
    // 0x2b3f5c: 0x9243011f  lbu         $v1, 0x11F($s2)
    ctx->pc = 0x2b3f5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 287)));
    // 0x2b3f60: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x2B3F60u;
    {
        const bool branch_taken_0x2b3f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3f60) {
            ctx->pc = 0x2B4058u;
            goto label_2b4058;
        }
    }
    ctx->pc = 0x2B3F68u;
    // 0x2b3f68: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2B3F68u;
    {
        const bool branch_taken_0x2b3f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b3f68) {
            ctx->pc = 0x2B4058u;
            goto label_2b4058;
        }
    }
    ctx->pc = 0x2B3F70u;
    // 0x2b3f70: 0x86470122  lh          $a3, 0x122($s2)
    ctx->pc = 0x2b3f70u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 290)));
    // 0x2b3f74: 0x10e50012  beq         $a3, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B3F74u;
    {
        const bool branch_taken_0x2b3f74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B3F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3F74u;
            // 0x2b3f78: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f74) {
            ctx->pc = 0x2B3FC0u;
            goto label_2b3fc0;
        }
    }
    ctx->pc = 0x2B3F7Cu;
    // 0x2b3f7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b3f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3f80: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3F80u;
    {
        const bool branch_taken_0x2b3f80 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3F80u;
            // 0x2b3f84: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f80) {
            ctx->pc = 0x2B3F98u;
            goto label_2b3f98;
        }
    }
    ctx->pc = 0x2B3F88u;
    // 0x2b3f88: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3F88u;
    {
        const bool branch_taken_0x2b3f88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3f88) {
            ctx->pc = 0x2B3F98u;
            goto label_2b3f98;
        }
    }
    ctx->pc = 0x2B3F90u;
    // 0x2b3f90: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2B3F90u;
    {
        const bool branch_taken_0x2b3f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3F90u;
            // 0x2b3f94: 0x8f8494a4  lw          $a0, -0x6B5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3f90) {
            ctx->pc = 0x2B3FE4u;
            goto label_2b3fe4;
        }
    }
    ctx->pc = 0x2B3F98u;
label_2b3f98:
    // 0x2b3f98: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2b3f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2b3f9c: 0x8429d5fc  lh          $t1, -0x2A04($at)
    ctx->pc = 0x2b3f9cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294956540)));
    // 0x2b3fa0: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2b3fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
    // 0x2b3fa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b3fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3fa8: 0x2484ca80  addiu       $a0, $a0, -0x3580
    ctx->pc = 0x2b3fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
    // 0x2b3fac: 0x24c6caa0  addiu       $a2, $a2, -0x3560
    ctx->pc = 0x2b3facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953632));
    // 0x2b3fb0: 0xc0ae634  jal         func_2B98D0
    ctx->pc = 0x2B3FB0u;
    SET_GPR_U32(ctx, 31, 0x2B3FB8u);
    ctx->pc = 0x2B3FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3FB0u;
            // 0x2b3fb4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B98D0u;
    if (runtime->hasFunction(0x2B98D0u)) {
        auto targetFn = runtime->lookupFunction(0x2B98D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3FB8u; }
        if (ctx->pc != 0x2B3FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoadEndCheck__FPP17MENU_BGREAD_INFO2P9mgCMemoryPP12CActionCharaiii_0x2b98d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3FB8u; }
        if (ctx->pc != 0x2B3FB8u) { return; }
    }
    ctx->pc = 0x2B3FB8u;
label_2b3fb8:
    // 0x2b3fb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B3FB8u;
    {
        const bool branch_taken_0x2b3fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3fb8) {
            ctx->pc = 0x2B3FE0u;
            goto label_2b3fe0;
        }
    }
    ctx->pc = 0x2B3FC0u;
label_2b3fc0:
    // 0x2b3fc0: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2b3fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2b3fc4: 0x8428d5fc  lh          $t0, -0x2A04($at)
    ctx->pc = 0x2b3fc4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294956540)));
    // 0x2b3fc8: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x2b3fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
    // 0x2b3fcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b3fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3fd0: 0x2484ca80  addiu       $a0, $a0, -0x3580
    ctx->pc = 0x2b3fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
    // 0x2b3fd4: 0x24c6caa0  addiu       $a2, $a2, -0x3560
    ctx->pc = 0x2b3fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953632));
    // 0x2b3fd8: 0xc0ae9a4  jal         func_2BA690
    ctx->pc = 0x2B3FD8u;
    SET_GPR_U32(ctx, 31, 0x2B3FE0u);
    ctx->pc = 0x2B3FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3FD8u;
            // 0x2b3fdc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA690u;
    if (runtime->hasFunction(0x2BA690u)) {
        auto targetFn = runtime->lookupFunction(0x2BA690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3FE0u; }
        if (ctx->pc != 0x2B3FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemRoboDataLoadEndCheck__FPP17MENU_BGREAD_INFO2P9mgCMemoryPP12CActionCharaii_0x2ba690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3FE0u; }
        if (ctx->pc != 0x2B3FE0u) { return; }
    }
    ctx->pc = 0x2B3FE0u;
label_2b3fe0:
    // 0x2b3fe0: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2b3fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2b3fe4:
    // 0x2b3fe4: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x2B3FE4u;
    SET_GPR_U32(ctx, 31, 0x2B3FECu);
    ctx->pc = 0x2B3FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3FE4u;
            // 0x2b3fe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3FECu; }
        if (ctx->pc != 0x2B3FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3FECu; }
        if (ctx->pc != 0x2B3FECu) { return; }
    }
    ctx->pc = 0x2B3FECu;
label_2b3fec:
    // 0x2b3fec: 0xc08ca88  jal         func_232A20
    ctx->pc = 0x2B3FECu;
    SET_GPR_U32(ctx, 31, 0x2B3FF4u);
    ctx->pc = 0x2B3FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3FECu;
            // 0x2b3ff0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232A20u;
    if (runtime->hasFunction(0x232A20u)) {
        auto targetFn = runtime->lookupFunction(0x232A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3FF4u; }
        if (ctx->pc != 0x2B3FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuLoopType__Fv_0x232a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3FF4u; }
        if (ctx->pc != 0x2B3FF4u) { return; }
    }
    ctx->pc = 0x2B3FF4u;
label_2b3ff4:
    // 0x2b3ff4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3ff8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3FF8u;
    {
        const bool branch_taken_0x2b3ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b3ff8) {
            ctx->pc = 0x2B4008u;
            goto label_2b4008;
        }
    }
    ctx->pc = 0x2B4000u;
    // 0x2b4000: 0x8f828ddc  lw          $v0, -0x7224($gp)
    ctx->pc = 0x2b4000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
    // 0x2b4004: 0xae0207dc  sw          $v0, 0x7DC($s0)
    ctx->pc = 0x2b4004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2012), GPR_U32(ctx, 2));
label_2b4008:
    // 0x2b4008: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4008u;
    {
        const bool branch_taken_0x2b4008 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b4008) {
            ctx->pc = 0x2B4024u;
            goto label_2b4024;
        }
    }
    ctx->pc = 0x2B4010u;
    // 0x2b4010: 0x83829b71  lb          $v0, -0x648F($gp)
    ctx->pc = 0x2b4010u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941553)));
    // 0x2b4014: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4014u;
    {
        const bool branch_taken_0x2b4014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4014u;
            // 0x2b4018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4014) {
            ctx->pc = 0x2B4024u;
            goto label_2b4024;
        }
    }
    ctx->pc = 0x2B401Cu;
    // 0x2b401c: 0xc05c458  jal         func_171160
    ctx->pc = 0x2B401Cu;
    SET_GPR_U32(ctx, 31, 0x2B4024u);
    ctx->pc = 0x171160u;
    if (runtime->hasFunction(0x171160u)) {
        auto targetFn = runtime->lookupFunction(0x171160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4024u; }
        if (ctx->pc != 0x2B4024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitScript__12CActionCharaFv_0x171160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4024u; }
        if (ctx->pc != 0x2B4024u) { return; }
    }
    ctx->pc = 0x2B4024u;
label_2b4024:
    // 0x2b4024: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x2b4024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x2b4028: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b4028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b402c: 0xc0ae808  jal         func_2BA020
    ctx->pc = 0x2B402Cu;
    SET_GPR_U32(ctx, 31, 0x2B4034u);
    ctx->pc = 0x2B4030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B402Cu;
            // 0x2b4030: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BA020u;
    if (runtime->hasFunction(0x2BA020u)) {
        auto targetFn = runtime->lookupFunction(0x2BA020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4034u; }
        if (ctx->pc != 0x2B4034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCharaSoundEnter__FP6CSceneP12CActionCharai_0x2ba020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4034u; }
        if (ctx->pc != 0x2B4034u) { return; }
    }
    ctx->pc = 0x2B4034u;
label_2b4034:
    // 0x2b4034: 0x86440122  lh          $a0, 0x122($s2)
    ctx->pc = 0x2b4034u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 290)));
    // 0x2b4038: 0xc08da84  jal         func_236A10
    ctx->pc = 0x2B4038u;
    SET_GPR_U32(ctx, 31, 0x2B4040u);
    ctx->pc = 0x2B403Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B4038u;
            // 0x2b403c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236A10u;
    if (runtime->hasFunction(0x236A10u)) {
        auto targetFn = runtime->lookupFunction(0x236A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4040u; }
        if (ctx->pc != 0x2B4040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyActiveItemAndWeapon__Fii_0x236a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4040u; }
        if (ctx->pc != 0x2B4040u) { return; }
    }
    ctx->pc = 0x2B4040u;
label_2b4040:
    // 0x2b4040: 0x86420120  lh          $v0, 0x120($s2)
    ctx->pc = 0x2b4040u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x2b4044: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2b4044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b4048: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b4048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2b404c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B404Cu;
    {
        const bool branch_taken_0x2b404c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B404Cu;
            // 0x2b4050: 0xa6420120  sh          $v0, 0x120($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 288), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b404c) {
            ctx->pc = 0x2B4058u;
            goto label_2b4058;
        }
    }
    ctx->pc = 0x2B4054u;
label_2b4054:
    // 0x2b4054: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x2b4054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b4058:
    // 0x2b4058: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b4058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b405c:
    // 0x2b405c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b405cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4060: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b4060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b4064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b4068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b406c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B406Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B406Cu;
            // 0x2b4070: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B4074u;
}

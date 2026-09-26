#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckDrawGlidInfo__16CDngFloorManagerFv
// Address: 0x2f9f30 - 0x2fa2b8
void CheckDrawGlidInfo__16CDngFloorManagerFv_0x2f9f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckDrawGlidInfo__16CDngFloorManagerFv_0x2f9f30");
#endif

    switch (ctx->pc) {
        case 0x2f9f64u: goto label_2f9f64;
        case 0x2f9f98u: goto label_2f9f98;
        case 0x2f9fa0u: goto label_2f9fa0;
        case 0x2f9fb0u: goto label_2f9fb0;
        case 0x2fa008u: goto label_2fa008;
        case 0x2fa040u: goto label_2fa040;
        case 0x2fa05cu: goto label_2fa05c;
        case 0x2fa07cu: goto label_2fa07c;
        case 0x2fa0acu: goto label_2fa0ac;
        case 0x2fa0d4u: goto label_2fa0d4;
        case 0x2fa118u: goto label_2fa118;
        case 0x2fa14cu: goto label_2fa14c;
        case 0x2fa154u: goto label_2fa154;
        case 0x2fa17cu: goto label_2fa17c;
        case 0x2fa1bcu: goto label_2fa1bc;
        case 0x2fa208u: goto label_2fa208;
        case 0x2fa210u: goto label_2fa210;
        case 0x2fa23cu: goto label_2fa23c;
        default: break;
    }

    ctx->pc = 0x2f9f30u;

    // 0x2f9f30: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2f9f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2f9f34: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2f9f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2f9f38: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2f9f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2f9f3c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2f9f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2f9f40: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2f9f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2f9f44: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f9f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2f9f48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f9f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f9f4c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2f9f4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9f50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f9f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f9f54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f9f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f9f58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f9f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f9f5c: 0xc08ca98  jal         func_232A60
    ctx->pc = 0x2F9F5Cu;
    SET_GPR_U32(ctx, 31, 0x2F9F64u);
    ctx->pc = 0x2F9F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9F5Cu;
            // 0x2f9f60: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232A60u;
    if (runtime->hasFunction(0x232A60u)) {
        auto targetFn = runtime->lookupFunction(0x232A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9F64u; }
        if (ctx->pc != 0x2F9F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_GetSaveDataDungeon__Fv_0x232a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9F64u; }
        if (ctx->pc != 0x2F9F64u) { return; }
    }
    ctx->pc = 0x2F9F64u;
label_2f9f64:
    // 0x2f9f64: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2f9f64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9f68: 0x12c000c7  beqz        $s6, . + 4 + (0xC7 << 2)
    ctx->pc = 0x2F9F68u;
    {
        const bool branch_taken_0x2f9f68 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9F68u;
            // 0x2f9f6c: 0x3c060036  lui         $a2, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9f68) {
            ctx->pc = 0x2FA288u;
            goto label_2fa288;
        }
    }
    ctx->pc = 0x2F9F70u;
    // 0x2f9f70: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2f9f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2f9f74: 0x24c6d0e0  addiu       $a2, $a2, -0x2F20
    ctx->pc = 0x2f9f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955232));
    // 0x2f9f78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f9f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9f7c: 0x78c40000  lq          $a0, 0x0($a2)
    ctx->pc = 0x2f9f7cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f9f80: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x2f9f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9f84: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x2f9f84u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2f9f88: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2f9f88u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2f9f8c: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x2f9f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x2f9f90: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2F9F90u;
    {
        const bool branch_taken_0x2f9f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9F90u;
            // 0x2f9f94: 0xe4a00018  swc1        $f0, 0x18($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9f90) {
            ctx->pc = 0x2F9FDCu;
            goto label_2f9fdc;
        }
    }
    ctx->pc = 0x2F9F98u;
label_2f9f98:
    // 0x2f9f98: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x2F9F98u;
    SET_GPR_U32(ctx, 31, 0x2F9FA0u);
    ctx->pc = 0x2F9F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9F98u;
            // 0x2f9f9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9FA0u; }
        if (ctx->pc != 0x2F9FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9FA0u; }
        if (ctx->pc != 0x2F9FA0u) { return; }
    }
    ctx->pc = 0x2F9FA0u;
label_2f9fa0:
    // 0x2f9fa0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f9fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9fa4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f9fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9fa8: 0xc0be768  jal         func_2F9DA0
    ctx->pc = 0x2F9FA8u;
    SET_GPR_U32(ctx, 31, 0x2F9FB0u);
    ctx->pc = 0x2F9FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9FA8u;
            // 0x2f9fac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9DA0u;
    if (runtime->hasFunction(0x2F9DA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F9DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9FB0u; }
        if (ctx->pc != 0x2F9FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorInfo__16CDngFloorManagerFi_0x2f9da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9FB0u; }
        if (ctx->pc != 0x2F9FB0u) { return; }
    }
    ctx->pc = 0x2F9FB0u;
label_2f9fb0:
    // 0x2f9fb0: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F9FB0u;
    {
        const bool branch_taken_0x2f9fb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9fb0) {
            ctx->pc = 0x2F9FD8u;
            goto label_2f9fd8;
        }
    }
    ctx->pc = 0x2F9FB8u;
    // 0x2f9fb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9FB8u;
    {
        const bool branch_taken_0x2f9fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9fb8) {
            ctx->pc = 0x2F9FD8u;
            goto label_2f9fd8;
        }
    }
    ctx->pc = 0x2F9FC0u;
    // 0x2f9fc0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9FC0u;
    {
        const bool branch_taken_0x2f9fc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9FC0u;
            // 0x2f9fc4: 0xa0400045  sb          $zero, 0x45($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 69), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fc0) {
            ctx->pc = 0x2F9FD8u;
            goto label_2f9fd8;
        }
    }
    ctx->pc = 0x2F9FC8u;
    // 0x2f9fc8: 0x96230012  lhu         $v1, 0x12($s1)
    ctx->pc = 0x2f9fc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2f9fcc: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F9FCCu;
    {
        const bool branch_taken_0x2f9fcc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F9FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9FCCu;
            // 0x2f9fd0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fcc) {
            ctx->pc = 0x2F9FD8u;
            goto label_2f9fd8;
        }
    }
    ctx->pc = 0x2F9FD4u;
    // 0x2f9fd4: 0xa0430045  sb          $v1, 0x45($v0)
    ctx->pc = 0x2f9fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 69), (uint8_t)GPR_U32(ctx, 3));
label_2f9fd8:
    // 0x2f9fd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f9fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f9fdc:
    // 0x2f9fdc: 0x0  nop
    ctx->pc = 0x2f9fdcu;
    // NOP
    // 0x2f9fe0: 0x82a50000  lb          $a1, 0x0($s5)
    ctx->pc = 0x2f9fe0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f9fe4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2f9fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2f9fe8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x2f9fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x2f9fec: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x2f9fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x2f9ff0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2f9ff0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f9ff4: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2F9FF4u;
    {
        const bool branch_taken_0x2f9ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9FF4u;
            // 0x2f9ff8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ff4) {
            ctx->pc = 0x2F9F98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f9f98;
        }
    }
    ctx->pc = 0x2F9FFCu;
    // 0x2f9ffc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f9ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa000: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2FA000u;
    {
        const bool branch_taken_0x2fa000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA000u;
            // 0x2fa004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa000) {
            ctx->pc = 0x2FA028u;
            goto label_2fa028;
        }
    }
    ctx->pc = 0x2FA008u;
label_2fa008:
    // 0x2fa008: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2fa008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2fa00c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2fa00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2fa010: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FA010u;
    {
        const bool branch_taken_0x2fa010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa010) {
            ctx->pc = 0x2FA01Cu;
            goto label_2fa01c;
        }
    }
    ctx->pc = 0x2FA018u;
    // 0x2fa018: 0xa060001c  sb          $zero, 0x1C($v1)
    ctx->pc = 0x2fa018u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28), (uint8_t)GPR_U32(ctx, 0));
label_2fa01c:
    // 0x2fa01c: 0x0  nop
    ctx->pc = 0x2fa01cu;
    // NOP
    // 0x2fa020: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x2fa020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x2fa024: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2fa024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2fa028:
    // 0x2fa028: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2fa028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2fa02c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2fa02cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fa030: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2FA030u;
    {
        const bool branch_taken_0x2fa030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA030u;
            // 0x2fa034: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa030) {
            ctx->pc = 0x2FA008u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fa008;
        }
    }
    ctx->pc = 0x2FA038u;
    // 0x2fa038: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2FA038u;
    {
        const bool branch_taken_0x2fa038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA038u;
            // 0x2fa03c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa038) {
            ctx->pc = 0x2FA100u;
            goto label_2fa100;
        }
    }
    ctx->pc = 0x2FA040u;
label_2fa040:
    // 0x2fa040: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2fa040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2fa044: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fa044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa048: 0x938821  addu        $s1, $a0, $s3
    ctx->pc = 0x2fa048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2fa04c: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x2fa04cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fa050: 0x14830029  bne         $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2FA050u;
    {
        const bool branch_taken_0x2fa050 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FA054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA050u;
            // 0x2fa054: 0x26320020  addiu       $s2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa050) {
            ctx->pc = 0x2FA0F8u;
            goto label_2fa0f8;
        }
    }
    ctx->pc = 0x2FA058u;
    // 0x2fa058: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fa058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa05c:
    // 0x2fa05c: 0x0  nop
    ctx->pc = 0x2fa05cu;
    // NOP
    // 0x2fa060: 0x82450008  lb          $a1, 0x8($s2)
    ctx->pc = 0x2fa060u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2fa064: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2fa064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa068: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2fa068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa06c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fa06cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa070: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2fa070u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fa074: 0xc0be8ec  jal         func_2FA3B0
    ctx->pc = 0x2FA074u;
    SET_GPR_U32(ctx, 31, 0x2FA07Cu);
    ctx->pc = 0x2FA078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA074u;
            // 0x2fa078: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FA3B0u;
    if (runtime->hasFunction(0x2FA3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2FA3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA07Cu; }
        if (ctx->pc != 0x2FA07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextRoom__16CDngFloorManagerFiiP9GLID_INFOiPi_0x2fa3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA07Cu; }
        if (ctx->pc != 0x2FA07Cu) { return; }
    }
    ctx->pc = 0x2FA07Cu;
label_2fa07c:
    // 0x2fa07c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FA07Cu;
    {
        const bool branch_taken_0x2fa07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa07c) {
            ctx->pc = 0x2FA0ACu;
            goto label_2fa0ac;
        }
    }
    ctx->pc = 0x2FA084u;
    // 0x2fa084: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FA084u;
    {
        const bool branch_taken_0x2fa084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2fa084) {
            ctx->pc = 0x2FA0ACu;
            goto label_2fa0ac;
        }
    }
    ctx->pc = 0x2FA08Cu;
    // 0x2fa08c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2fa08cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa090: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fa090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa094: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA094u;
    {
        const bool branch_taken_0x2fa094 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fa094) {
            ctx->pc = 0x2FA0ACu;
            goto label_2fa0ac;
        }
    }
    ctx->pc = 0x2FA09Cu;
    // 0x2fa09c: 0x80460028  lb          $a2, 0x28($v0)
    ctx->pc = 0x2fa09cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2fa0a0: 0x82a50000  lb          $a1, 0x0($s5)
    ctx->pc = 0x2fa0a0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2fa0a4: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x2FA0A4u;
    SET_GPR_U32(ctx, 31, 0x2FA0ACu);
    ctx->pc = 0x2FA0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA0A4u;
            // 0x2fa0a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA0ACu; }
        if (ctx->pc != 0x2FA0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA0ACu; }
        if (ctx->pc != 0x2FA0ACu) { return; }
    }
    ctx->pc = 0x2FA0ACu;
label_2fa0ac:
    // 0x2fa0ac: 0x0  nop
    ctx->pc = 0x2fa0acu;
    // NOP
    // 0x2fa0b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fa0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2fa0b4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x2fa0b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2fa0b8: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2FA0B8u;
    {
        const bool branch_taken_0x2fa0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA0B8u;
            // 0x2fa0bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa0b8) {
            ctx->pc = 0x2FA05Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fa05c;
        }
    }
    ctx->pc = 0x2FA0C0u;
    // 0x2fa0c0: 0xa2420044  sb          $v0, 0x44($s2)
    ctx->pc = 0x2fa0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 68), (uint8_t)GPR_U32(ctx, 2));
    // 0x2fa0c4: 0x82a50000  lb          $a1, 0x0($s5)
    ctx->pc = 0x2fa0c4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2fa0c8: 0x82460008  lb          $a2, 0x8($s2)
    ctx->pc = 0x2fa0c8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2fa0cc: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x2FA0CCu;
    SET_GPR_U32(ctx, 31, 0x2FA0D4u);
    ctx->pc = 0x2FA0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA0CCu;
            // 0x2fa0d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA0D4u; }
        if (ctx->pc != 0x2FA0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA0D4u; }
        if (ctx->pc != 0x2FA0D4u) { return; }
    }
    ctx->pc = 0x2FA0D4u;
label_2fa0d4:
    // 0x2fa0d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FA0D4u;
    {
        const bool branch_taken_0x2fa0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA0D4u;
            // 0x2fa0d8: 0xa2400046  sb          $zero, 0x46($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 70), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa0d4) {
            ctx->pc = 0x2FA0F8u;
            goto label_2fa0f8;
        }
    }
    ctx->pc = 0x2FA0DCu;
    // 0x2fa0dc: 0x9444000e  lhu         $a0, 0xE($v0)
    ctx->pc = 0x2fa0dcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2fa0e0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x2fa0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2fa0e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FA0E4u;
    {
        const bool branch_taken_0x2fa0e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA0E4u;
            // 0x2fa0e8: 0x30830002  andi        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa0e4) {
            ctx->pc = 0x2FA0F8u;
            goto label_2fa0f8;
        }
    }
    ctx->pc = 0x2FA0ECu;
    // 0x2fa0ec: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FA0ECu;
    {
        const bool branch_taken_0x2fa0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA0ECu;
            // 0x2fa0f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa0ec) {
            ctx->pc = 0x2FA0F8u;
            goto label_2fa0f8;
        }
    }
    ctx->pc = 0x2FA0F4u;
    // 0x2fa0f4: 0xa2430046  sb          $v1, 0x46($s2)
    ctx->pc = 0x2fa0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 70), (uint8_t)GPR_U32(ctx, 3));
label_2fa0f8:
    // 0x2fa0f8: 0x26730070  addiu       $s3, $s3, 0x70
    ctx->pc = 0x2fa0f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
    // 0x2fa0fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2fa0fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2fa100:
    // 0x2fa100: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2fa100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2fa104: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2fa104u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fa108: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x2FA108u;
    {
        const bool branch_taken_0x2fa108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA108u;
            // 0x2fa10c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa108) {
            ctx->pc = 0x2FA040u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fa040;
        }
    }
    ctx->pc = 0x2FA110u;
    // 0x2fa110: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2FA110u;
    {
        const bool branch_taken_0x2fa110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA110u;
            // 0x2fa114: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa110) {
            ctx->pc = 0x2FA278u;
            goto label_2fa278;
        }
    }
    ctx->pc = 0x2FA118u;
label_2fa118:
    // 0x2fa118: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x2fa118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2fa11c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fa11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa120: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2fa120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2fa124: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x2fa124u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2fa128: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x2fa128u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fa12c: 0x1464004e  bne         $v1, $a0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2FA12Cu;
    {
        const bool branch_taken_0x2fa12c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2fa12c) {
            ctx->pc = 0x2FA268u;
            goto label_2fa268;
        }
    }
    ctx->pc = 0x2FA134u;
    // 0x2fa134: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x2fa134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2fa138: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x2fa138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2fa13c: 0x82a50000  lb          $a1, 0x0($s5)
    ctx->pc = 0x2fa13cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2fa140: 0x82460028  lb          $a2, 0x28($s2)
    ctx->pc = 0x2fa140u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2fa144: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x2FA144u;
    SET_GPR_U32(ctx, 31, 0x2FA14Cu);
    ctx->pc = 0x2FA148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA144u;
            // 0x2fa148: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA14Cu; }
        if (ctx->pc != 0x2FA14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA14Cu; }
        if (ctx->pc != 0x2FA14Cu) { return; }
    }
    ctx->pc = 0x2FA14Cu;
label_2fa14c:
    // 0x2fa14c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2fa14cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa150: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2fa150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa154:
    // 0x2fa154: 0x0  nop
    ctx->pc = 0x2fa154u;
    // NOP
    // 0x2fa158: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2fa158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fa15c: 0xafb300dc  sw          $s3, 0xDC($sp)
    ctx->pc = 0x2fa15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 19));
    // 0x2fa160: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2fa160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa164: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fa164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa168: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fa168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa16c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2fa16cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fa170: 0x80450008  lb          $a1, 0x8($v0)
    ctx->pc = 0x2fa170u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2fa174: 0xc0be8ec  jal         func_2FA3B0
    ctx->pc = 0x2FA174u;
    SET_GPR_U32(ctx, 31, 0x2FA17Cu);
    ctx->pc = 0x2FA178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA174u;
            // 0x2fa178: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FA3B0u;
    if (runtime->hasFunction(0x2FA3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2FA3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA17Cu; }
        if (ctx->pc != 0x2FA17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextRoom__16CDngFloorManagerFiiP9GLID_INFOiPi_0x2fa3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA17Cu; }
        if (ctx->pc != 0x2FA17Cu) { return; }
    }
    ctx->pc = 0x2FA17Cu;
label_2fa17c:
    // 0x2fa17c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2fa17cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa180: 0x12800035  beqz        $s4, . + 4 + (0x35 << 2)
    ctx->pc = 0x2FA180u;
    {
        const bool branch_taken_0x2fa180 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa180) {
            ctx->pc = 0x2FA258u;
            goto label_2fa258;
        }
    }
    ctx->pc = 0x2FA188u;
    // 0x2fa188: 0x12920033  beq         $s4, $s2, . + 4 + (0x33 << 2)
    ctx->pc = 0x2FA188u;
    {
        const bool branch_taken_0x2fa188 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 18));
        if (branch_taken_0x2fa188) {
            ctx->pc = 0x2FA258u;
            goto label_2fa258;
        }
    }
    ctx->pc = 0x2FA190u;
    // 0x2fa190: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x2fa190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x2fa194: 0x14730030  bne         $v1, $s3, . + 4 + (0x30 << 2)
    ctx->pc = 0x2FA194u;
    {
        const bool branch_taken_0x2fa194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x2FA198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA194u;
            // 0x2fa198: 0x26830020  addiu       $v1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa194) {
            ctx->pc = 0x2FA258u;
            goto label_2fa258;
        }
    }
    ctx->pc = 0x2FA19Cu;
    // 0x2fa19c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fa19cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa1a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2fa1a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa1a4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA1A4u;
    {
        const bool branch_taken_0x2fa1a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA1A4u;
            // 0x2fa1a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa1a4) {
            ctx->pc = 0x2FA1BCu;
            goto label_2fa1bc;
        }
    }
    ctx->pc = 0x2FA1ACu;
    // 0x2fa1ac: 0x80660008  lb          $a2, 0x8($v1)
    ctx->pc = 0x2fa1acu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fa1b0: 0x82a50000  lb          $a1, 0x0($s5)
    ctx->pc = 0x2fa1b0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2fa1b4: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x2FA1B4u;
    SET_GPR_U32(ctx, 31, 0x2FA1BCu);
    ctx->pc = 0x2FA1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA1B4u;
            // 0x2fa1b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA1BCu; }
        if (ctx->pc != 0x2FA1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA1BCu; }
        if (ctx->pc != 0x2FA1BCu) { return; }
    }
    ctx->pc = 0x2FA1BCu;
label_2fa1bc:
    // 0x2fa1bc: 0x0  nop
    ctx->pc = 0x2fa1bcu;
    // NOP
    // 0x2fa1c0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FA1C0u;
    {
        const bool branch_taken_0x2fa1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa1c0) {
            ctx->pc = 0x2FA1F8u;
            goto label_2fa1f8;
        }
    }
    ctx->pc = 0x2FA1C8u;
    // 0x2fa1c8: 0x12e0000b  beqz        $s7, . + 4 + (0xB << 2)
    ctx->pc = 0x2FA1C8u;
    {
        const bool branch_taken_0x2fa1c8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa1c8) {
            ctx->pc = 0x2FA1F8u;
            goto label_2fa1f8;
        }
    }
    ctx->pc = 0x2FA1D0u;
    // 0x2fa1d0: 0x96e3000e  lhu         $v1, 0xE($s7)
    ctx->pc = 0x2fa1d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 14)));
    // 0x2fa1d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2fa1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2fa1d8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA1D8u;
    {
        const bool branch_taken_0x2fa1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa1d8) {
            ctx->pc = 0x2FA1F8u;
            goto label_2fa1f8;
        }
    }
    ctx->pc = 0x2FA1E0u;
    // 0x2fa1e0: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x2fa1e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2fa1e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fa1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fa1e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA1E8u;
    {
        const bool branch_taken_0x2fa1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa1e8) {
            ctx->pc = 0x2FA1F8u;
            goto label_2fa1f8;
        }
    }
    ctx->pc = 0x2FA1F0u;
    // 0x2fa1f0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2fa1f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa1f4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2fa1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fa1f8:
    // 0x2fa1f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2fa1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa1fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fa1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa200: 0xc0be8b0  jal         func_2FA2C0
    ctx->pc = 0x2FA200u;
    SET_GPR_U32(ctx, 31, 0x2FA208u);
    ctx->pc = 0x2FA204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA200u;
            // 0x2fa204: 0x27a600dc  addiu       $a2, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FA2C0u;
    if (runtime->hasFunction(0x2FA2C0u)) {
        auto targetFn = runtime->lookupFunction(0x2FA2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA208u; }
        if (ctx->pc != 0x2FA208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextGlid__16CDngFloorManagerFP9GLID_INFOPi_0x2fa2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA208u; }
        if (ctx->pc != 0x2FA208u) { return; }
    }
    ctx->pc = 0x2FA208u;
label_2fa208:
    // 0x2fa208: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2FA208u;
    {
        const bool branch_taken_0x2fa208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA208u;
            // 0x2fa20c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa208) {
            ctx->pc = 0x2FA240u;
            goto label_2fa240;
        }
    }
    ctx->pc = 0x2FA210u;
label_2fa210:
    // 0x2fa210: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x2fa210u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fa214: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FA214u;
    {
        const bool branch_taken_0x2fa214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa214) {
            ctx->pc = 0x2FA258u;
            goto label_2fa258;
        }
    }
    ctx->pc = 0x2FA21Cu;
    // 0x2fa21c: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x2fa21cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2fa220: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2fa220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa224: 0xa0a20023  sb          $v0, 0x23($a1)
    ctx->pc = 0x2fa224u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 35), (uint8_t)GPR_U32(ctx, 2));
    // 0x2fa228: 0x27a600dc  addiu       $a2, $sp, 0xDC
    ctx->pc = 0x2fa228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x2fa22c: 0x80a20024  lb          $v0, 0x24($a1)
    ctx->pc = 0x2fa22cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2fa230: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x2fa230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x2fa234: 0xc0be8b0  jal         func_2FA2C0
    ctx->pc = 0x2FA234u;
    SET_GPR_U32(ctx, 31, 0x2FA23Cu);
    ctx->pc = 0x2FA238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA234u;
            // 0x2fa238: 0xa0a20024  sb          $v0, 0x24($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 36), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FA2C0u;
    if (runtime->hasFunction(0x2FA2C0u)) {
        auto targetFn = runtime->lookupFunction(0x2FA2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA23Cu; }
        if (ctx->pc != 0x2FA23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNextGlid__16CDngFloorManagerFP9GLID_INFOPi_0x2fa2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA23Cu; }
        if (ctx->pc != 0x2FA23Cu) { return; }
    }
    ctx->pc = 0x2FA23Cu;
label_2fa23c:
    // 0x2fa23c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fa23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fa240:
    // 0x2fa240: 0x10b40005  beq         $a1, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FA240u;
    {
        const bool branch_taken_0x2fa240 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 20));
        if (branch_taken_0x2fa240) {
            ctx->pc = 0x2FA258u;
            goto label_2fa258;
        }
    }
    ctx->pc = 0x2FA248u;
    // 0x2fa248: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA248u;
    {
        const bool branch_taken_0x2fa248 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa248) {
            ctx->pc = 0x2FA258u;
            goto label_2fa258;
        }
    }
    ctx->pc = 0x2FA250u;
    // 0x2fa250: 0x1680ffef  bnez        $s4, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2FA250u;
    {
        const bool branch_taken_0x2fa250 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa250) {
            ctx->pc = 0x2FA210u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fa210;
        }
    }
    ctx->pc = 0x2FA258u;
label_2fa258:
    // 0x2fa258: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2fa258u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2fa25c: 0x2a630004  slti        $v1, $s3, 0x4
    ctx->pc = 0x2fa25cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2fa260: 0x1460ffbc  bnez        $v1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x2FA260u;
    {
        const bool branch_taken_0x2fa260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa260) {
            ctx->pc = 0x2FA154u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fa154;
        }
    }
    ctx->pc = 0x2FA268u;
label_2fa268:
    // 0x2fa268: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2fa268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2fa26c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2fa26cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2fa270: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2fa270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2fa274: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2fa274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_2fa278:
    // 0x2fa278: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2fa278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2fa27c: 0x3c3182a  slt         $v1, $fp, $v1
    ctx->pc = 0x2fa27cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fa280: 0x1460ffa5  bnez        $v1, . + 4 + (-0x5B << 2)
    ctx->pc = 0x2FA280u;
    {
        const bool branch_taken_0x2fa280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa280) {
            ctx->pc = 0x2FA118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fa118;
        }
    }
    ctx->pc = 0x2FA288u;
label_2fa288:
    // 0x2fa288: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2fa288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fa28c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2fa28cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fa290: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2fa290u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fa294: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2fa294u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fa298: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2fa298u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fa29c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2fa29cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fa2a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fa2a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fa2a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fa2a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fa2a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fa2a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa2ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fa2acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA2B0u;
            // 0x2fa2b4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FA2B8u;
}

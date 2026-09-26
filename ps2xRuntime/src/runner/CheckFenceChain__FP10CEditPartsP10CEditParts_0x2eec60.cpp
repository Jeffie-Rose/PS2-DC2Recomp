#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckFenceChain__FP10CEditPartsP10CEditParts
// Address: 0x2eec60 - 0x2eede0
void CheckFenceChain__FP10CEditPartsP10CEditParts_0x2eec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckFenceChain__FP10CEditPartsP10CEditParts_0x2eec60");
#endif

    switch (ctx->pc) {
        case 0x2eec94u: goto label_2eec94;
        case 0x2eecacu: goto label_2eecac;
        case 0x2eecc4u: goto label_2eecc4;
        case 0x2eecf4u: goto label_2eecf4;
        case 0x2eed10u: goto label_2eed10;
        case 0x2eed28u: goto label_2eed28;
        case 0x2eed54u: goto label_2eed54;
        case 0x2eed80u: goto label_2eed80;
        case 0x2eedacu: goto label_2eedac;
        default: break;
    }

    ctx->pc = 0x2eec60u;

    // 0x2eec60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2eec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2eec64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2eec64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2eec68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2eec68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2eec6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2eec6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2eec70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2eec70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eec74: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEC74u;
    {
        const bool branch_taken_0x2eec74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEC74u;
            // 0x2eec78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec74) {
            ctx->pc = 0x2EEC84u;
            goto label_2eec84;
        }
    }
    ctx->pc = 0x2EEC7Cu;
    // 0x2eec7c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEC7Cu;
    {
        const bool branch_taken_0x2eec7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEC7Cu;
            // 0x2eec80: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec7c) {
            ctx->pc = 0x2EEC8Cu;
            goto label_2eec8c;
        }
    }
    ctx->pc = 0x2EEC84u;
label_2eec84:
    // 0x2eec84: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2EEC84u;
    {
        const bool branch_taken_0x2eec84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEC84u;
            // 0x2eec88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec84) {
            ctx->pc = 0x2EEDCCu;
            goto label_2eedcc;
        }
    }
    ctx->pc = 0x2EEC8Cu;
label_2eec8c:
    // 0x2eec8c: 0xc059ca0  jal         func_167280
    ctx->pc = 0x2EEC8Cu;
    SET_GPR_U32(ctx, 31, 0x2EEC94u);
    ctx->pc = 0x167280u;
    if (runtime->hasFunction(0x167280u)) {
        auto targetFn = runtime->lookupFunction(0x167280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEC94u; }
        if (ctx->pc != 0x2EEC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBoundSphere__9CMapPartsFPf_0x167280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEC94u; }
        if (ctx->pc != 0x2EEC94u) { return; }
    }
    ctx->pc = 0x2EEC94u;
label_2eec94:
    // 0x2eec94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEC94u;
    {
        const bool branch_taken_0x2eec94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEC94u;
            // 0x2eec98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec94) {
            ctx->pc = 0x2EECA4u;
            goto label_2eeca4;
        }
    }
    ctx->pc = 0x2EEC9Cu;
    // 0x2eec9c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2EEC9Cu;
    {
        const bool branch_taken_0x2eec9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EECA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEC9Cu;
            // 0x2eeca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec9c) {
            ctx->pc = 0x2EEDCCu;
            goto label_2eedcc;
        }
    }
    ctx->pc = 0x2EECA4u;
label_2eeca4:
    // 0x2eeca4: 0xc059ca0  jal         func_167280
    ctx->pc = 0x2EECA4u;
    SET_GPR_U32(ctx, 31, 0x2EECACu);
    ctx->pc = 0x2EECA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EECA4u;
            // 0x2eeca8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167280u;
    if (runtime->hasFunction(0x167280u)) {
        auto targetFn = runtime->lookupFunction(0x167280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EECACu; }
        if (ctx->pc != 0x2EECACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBoundSphere__9CMapPartsFPf_0x167280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EECACu; }
        if (ctx->pc != 0x2EECACu) { return; }
    }
    ctx->pc = 0x2EECACu;
label_2eecac:
    // 0x2eecac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EECACu;
    {
        const bool branch_taken_0x2eecac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EECB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EECACu;
            // 0x2eecb0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eecac) {
            ctx->pc = 0x2EECBCu;
            goto label_2eecbc;
        }
    }
    ctx->pc = 0x2EECB4u;
    // 0x2eecb4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2EECB4u;
    {
        const bool branch_taken_0x2eecb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EECB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EECB4u;
            // 0x2eecb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eecb4) {
            ctx->pc = 0x2EEDCCu;
            goto label_2eedcc;
        }
    }
    ctx->pc = 0x2EECBCu;
label_2eecbc:
    // 0x2eecbc: 0xc04c018  jal         func_130060
    ctx->pc = 0x2EECBCu;
    SET_GPR_U32(ctx, 31, 0x2EECC4u);
    ctx->pc = 0x2EECC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EECBCu;
            // 0x2eecc0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EECC4u; }
        if (ctx->pc != 0x2EECC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EECC4u; }
        if (ctx->pc != 0x2EECC4u) { return; }
    }
    ctx->pc = 0x2EECC4u;
label_2eecc4:
    // 0x2eecc4: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x2eecc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2eecc8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x2eecc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eeccc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x2eecccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2eecd0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2eecd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eecd4: 0x0  nop
    ctx->pc = 0x2eecd4u;
    // NOP
    // 0x2eecd8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2EECD8u;
    {
        const bool branch_taken_0x2eecd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EECDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EECD8u;
            // 0x2eecdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eecd8) {
            ctx->pc = 0x2EECE8u;
            goto label_2eece8;
        }
    }
    ctx->pc = 0x2EECE0u;
    // 0x2eece0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2EECE0u;
    {
        const bool branch_taken_0x2eece0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EECE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EECE0u;
            // 0x2eece4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eece0) {
            ctx->pc = 0x2EEDCCu;
            goto label_2eedcc;
        }
    }
    ctx->pc = 0x2EECE8u;
label_2eece8:
    // 0x2eece8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2eece8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2eecec: 0xc06d6c8  jal         func_1B5B20
    ctx->pc = 0x2EECECu;
    SET_GPR_U32(ctx, 31, 0x2EECF4u);
    ctx->pc = 0x2EECF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EECECu;
            // 0x2eecf0: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5B20u;
    if (runtime->hasFunction(0x1B5B20u)) {
        auto targetFn = runtime->lookupFunction(0x1B5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EECF4u; }
        if (ctx->pc != 0x2EECF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFenceSide__10CEditPartsFPfPf_0x1b5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EECF4u; }
        if (ctx->pc != 0x2EECF4u) { return; }
    }
    ctx->pc = 0x2EECF4u;
label_2eecf4:
    // 0x2eecf4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EECF4u;
    {
        const bool branch_taken_0x2eecf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EECF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EECF4u;
            // 0x2eecf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eecf4) {
            ctx->pc = 0x2EED04u;
            goto label_2eed04;
        }
    }
    ctx->pc = 0x2EECFCu;
    // 0x2eecfc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2EECFCu;
    {
        const bool branch_taken_0x2eecfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EECFCu;
            // 0x2eed00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eecfc) {
            ctx->pc = 0x2EEDCCu;
            goto label_2eedcc;
        }
    }
    ctx->pc = 0x2EED04u;
label_2eed04:
    // 0x2eed04: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2eed04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2eed08: 0xc06d6c8  jal         func_1B5B20
    ctx->pc = 0x2EED08u;
    SET_GPR_U32(ctx, 31, 0x2EED10u);
    ctx->pc = 0x2EED0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EED08u;
            // 0x2eed0c: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5B20u;
    if (runtime->hasFunction(0x1B5B20u)) {
        auto targetFn = runtime->lookupFunction(0x1B5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EED10u; }
        if (ctx->pc != 0x2EED10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFenceSide__10CEditPartsFPfPf_0x1b5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EED10u; }
        if (ctx->pc != 0x2EED10u) { return; }
    }
    ctx->pc = 0x2EED10u;
label_2eed10:
    // 0x2eed10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EED10u;
    {
        const bool branch_taken_0x2eed10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EED14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EED10u;
            // 0x2eed14: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed10) {
            ctx->pc = 0x2EED20u;
            goto label_2eed20;
        }
    }
    ctx->pc = 0x2EED18u;
    // 0x2eed18: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2EED18u;
    {
        const bool branch_taken_0x2eed18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EED18u;
            // 0x2eed1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed18) {
            ctx->pc = 0x2EEDCCu;
            goto label_2eedcc;
        }
    }
    ctx->pc = 0x2EED20u;
label_2eed20:
    // 0x2eed20: 0xc04c018  jal         func_130060
    ctx->pc = 0x2EED20u;
    SET_GPR_U32(ctx, 31, 0x2EED28u);
    ctx->pc = 0x2EED24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EED20u;
            // 0x2eed24: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EED28u; }
        if (ctx->pc != 0x2EED28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EED28u; }
        if (ctx->pc != 0x2EED28u) { return; }
    }
    ctx->pc = 0x2EED28u;
label_2eed28:
    // 0x2eed28: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2eed28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2eed2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eed2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eed30: 0x0  nop
    ctx->pc = 0x2eed30u;
    // NOP
    // 0x2eed34: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eed34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eed38: 0x0  nop
    ctx->pc = 0x2eed38u;
    // NOP
    // 0x2eed3c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2EED3Cu;
    {
        const bool branch_taken_0x2eed3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EED40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EED3Cu;
            // 0x2eed40: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed3c) {
            ctx->pc = 0x2EED4Cu;
            goto label_2eed4c;
        }
    }
    ctx->pc = 0x2EED44u;
    // 0x2eed44: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2EED44u;
    {
        const bool branch_taken_0x2eed44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EED44u;
            // 0x2eed48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed44) {
            ctx->pc = 0x2EEDCCu;
            goto label_2eedcc;
        }
    }
    ctx->pc = 0x2EED4Cu;
label_2eed4c:
    // 0x2eed4c: 0xc04c018  jal         func_130060
    ctx->pc = 0x2EED4Cu;
    SET_GPR_U32(ctx, 31, 0x2EED54u);
    ctx->pc = 0x2EED50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EED4Cu;
            // 0x2eed50: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EED54u; }
        if (ctx->pc != 0x2EED54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EED54u; }
        if (ctx->pc != 0x2EED54u) { return; }
    }
    ctx->pc = 0x2EED54u;
label_2eed54:
    // 0x2eed54: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2eed54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2eed58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eed58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eed5c: 0x0  nop
    ctx->pc = 0x2eed5cu;
    // NOP
    // 0x2eed60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eed60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eed64: 0x0  nop
    ctx->pc = 0x2eed64u;
    // NOP
    // 0x2eed68: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2EED68u;
    {
        const bool branch_taken_0x2eed68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EED6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EED68u;
            // 0x2eed6c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed68) {
            ctx->pc = 0x2EED78u;
            goto label_2eed78;
        }
    }
    ctx->pc = 0x2EED70u;
    // 0x2eed70: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2EED70u;
    {
        const bool branch_taken_0x2eed70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EED74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EED70u;
            // 0x2eed74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed70) {
            ctx->pc = 0x2EEDCCu;
            goto label_2eedcc;
        }
    }
    ctx->pc = 0x2EED78u;
label_2eed78:
    // 0x2eed78: 0xc04c018  jal         func_130060
    ctx->pc = 0x2EED78u;
    SET_GPR_U32(ctx, 31, 0x2EED80u);
    ctx->pc = 0x2EED7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EED78u;
            // 0x2eed7c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EED80u; }
        if (ctx->pc != 0x2EED80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EED80u; }
        if (ctx->pc != 0x2EED80u) { return; }
    }
    ctx->pc = 0x2EED80u;
label_2eed80:
    // 0x2eed80: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2eed80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2eed84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2eed84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eed88: 0x0  nop
    ctx->pc = 0x2eed88u;
    // NOP
    // 0x2eed8c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eed8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eed90: 0x0  nop
    ctx->pc = 0x2eed90u;
    // NOP
    // 0x2eed94: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2EED94u;
    {
        const bool branch_taken_0x2eed94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EED98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EED94u;
            // 0x2eed98: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed94) {
            ctx->pc = 0x2EEDA4u;
            goto label_2eeda4;
        }
    }
    ctx->pc = 0x2EED9Cu;
    // 0x2eed9c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2EED9Cu;
    {
        const bool branch_taken_0x2eed9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EED9Cu;
            // 0x2eeda0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eed9c) {
            ctx->pc = 0x2EEDCCu;
            goto label_2eedcc;
        }
    }
    ctx->pc = 0x2EEDA4u;
label_2eeda4:
    // 0x2eeda4: 0xc04c018  jal         func_130060
    ctx->pc = 0x2EEDA4u;
    SET_GPR_U32(ctx, 31, 0x2EEDACu);
    ctx->pc = 0x2EEDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEDA4u;
            // 0x2eeda8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEDACu; }
        if (ctx->pc != 0x2EEDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EEDACu; }
        if (ctx->pc != 0x2EEDACu) { return; }
    }
    ctx->pc = 0x2EEDACu;
label_2eedac:
    // 0x2eedac: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2eedacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2eedb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2eedb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eedb4: 0x0  nop
    ctx->pc = 0x2eedb4u;
    // NOP
    // 0x2eedb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2eedb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eedbc: 0x0  nop
    ctx->pc = 0x2eedbcu;
    // NOP
    // 0x2eedc0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2EEDC0u;
    {
        const bool branch_taken_0x2eedc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EEDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEDC0u;
            // 0x2eedc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eedc0) {
            ctx->pc = 0x2EEDCCu;
            goto label_2eedcc;
        }
    }
    ctx->pc = 0x2EEDC8u;
    // 0x2eedc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eedc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eedcc:
    // 0x2eedcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2eedccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eedd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2eedd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eedd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2eedd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eedd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEDD8u;
            // 0x2eeddc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EEDE0u;
}

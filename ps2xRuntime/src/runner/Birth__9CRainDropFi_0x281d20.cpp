#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Birth__9CRainDropFi
// Address: 0x281d20 - 0x281e8c
void Birth__9CRainDropFi_0x281d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Birth__9CRainDropFi_0x281d20");
#endif

    switch (ctx->pc) {
        case 0x281d80u: goto label_281d80;
        case 0x281dacu: goto label_281dac;
        case 0x281dc0u: goto label_281dc0;
        case 0x281ddcu: goto label_281ddc;
        case 0x281e04u: goto label_281e04;
        case 0x281e28u: goto label_281e28;
        default: break;
    }

    ctx->pc = 0x281d20u;

    // 0x281d20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x281d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x281d24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x281d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x281d28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x281d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x281d2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x281d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x281d30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x281d34: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x281d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x281d38: 0x1460004e  bnez        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x281D38u;
    {
        const bool branch_taken_0x281d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x281D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281D38u;
            // 0x281d3c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281d38) {
            ctx->pc = 0x281E74u;
            goto label_281e74;
        }
    }
    ctx->pc = 0x281D40u;
    // 0x281d40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x281d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281d44: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x281d44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x281d48: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x281d48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
    // 0x281d4c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x281d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x281d50: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x281D50u;
    {
        const bool branch_taken_0x281d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x281D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281D50u;
            // 0x281d54: 0x3c0242dc  lui         $v0, 0x42DC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281d50) {
            ctx->pc = 0x281D88u;
            goto label_281d88;
        }
    }
    ctx->pc = 0x281D58u;
    // 0x281d58: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x281d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x281d5c: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x281d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x281d60: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x281d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x281d64: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x281d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x281d68: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x281d68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x281d6c: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x281d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x281d70: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x281d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x281d74: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x281d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x281d78: 0xc0a04e8  jal         func_2813A0
    ctx->pc = 0x281D78u;
    SET_GPR_U32(ctx, 31, 0x281D80u);
    ctx->pc = 0x281D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281D78u;
            // 0x281d7c: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2813A0u;
    if (runtime->hasFunction(0x2813A0u)) {
        auto targetFn = runtime->lookupFunction(0x2813A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281D80u; }
        if (ctx->pc != 0x281D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RandXYinViewArea__FfffPfPf_0x2813a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281D80u; }
        if (ctx->pc != 0x281D80u) { return; }
    }
    ctx->pc = 0x281D80u;
label_281d80:
    // 0x281d80: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x281D80u;
    {
        const bool branch_taken_0x281d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281D80u;
            // 0x281d84: 0xe6400014  swc1        $f0, 0x14($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x281d80) {
            ctx->pc = 0x281DB0u;
            goto label_281db0;
        }
    }
    ctx->pc = 0x281D88u;
label_281d88:
    // 0x281d88: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x281d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x281d8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x281d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x281d90: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x281d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x281d94: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x281d94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x281d98: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x281d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x281d9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x281d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x281da0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x281da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x281da4: 0xc0a04e8  jal         func_2813A0
    ctx->pc = 0x281DA4u;
    SET_GPR_U32(ctx, 31, 0x281DACu);
    ctx->pc = 0x281DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281DA4u;
            // 0x281da8: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2813A0u;
    if (runtime->hasFunction(0x2813A0u)) {
        auto targetFn = runtime->lookupFunction(0x2813A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281DACu; }
        if (ctx->pc != 0x281DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RandXYinViewArea__FfffPfPf_0x2813a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281DACu; }
        if (ctx->pc != 0x281DACu) { return; }
    }
    ctx->pc = 0x281DACu;
label_281dac:
    // 0x281dac: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x281dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_281db0:
    // 0x281db0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x281db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x281db4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x281db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281db8: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x281db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x281dbc: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x281dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_281dc0:
    // 0x281dc0: 0x2602ffff  addiu       $v0, $s0, -0x1
    ctx->pc = 0x281dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x281dc4: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x281dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x281dc8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x281dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x281dcc: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x281dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x281dd0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x281dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x281dd4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x281DD4u;
    SET_GPR_U32(ctx, 31, 0x281DDCu);
    ctx->pc = 0x281DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281DD4u;
            // 0x281dd8: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281DDCu; }
        if (ctx->pc != 0x281DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281DDCu; }
        if (ctx->pc != 0x281DDCu) { return; }
    }
    ctx->pc = 0x281DDCu;
label_281ddc:
    // 0x281ddc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x281ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x281de0: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x281de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x281de4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x281DE4u;
    {
        const bool branch_taken_0x281de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281DE4u;
            // 0x281de8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281de4) {
            ctx->pc = 0x281DC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_281dc0;
        }
    }
    ctx->pc = 0x281DECu;
    // 0x281dec: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x281decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x281df0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x281df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x281df4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x281df4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x281df8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x281df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x281dfc: 0xc0a04c0  jal         func_281300
    ctx->pc = 0x281DFCu;
    SET_GPR_U32(ctx, 31, 0x281E04u);
    ctx->pc = 0x281300u;
    if (runtime->hasFunction(0x281300u)) {
        auto targetFn = runtime->lookupFunction(0x281300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281E04u; }
        if (ctx->pc != 0x281E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        f_rand__Fff_0x281300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281E04u; }
        if (ctx->pc != 0x281E04u) { return; }
    }
    ctx->pc = 0x281E04u;
label_281e04:
    // 0x281e04: 0xe6400090  swc1        $f0, 0x90($s2)
    ctx->pc = 0x281e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 144), bits); }
    // 0x281e08: 0x3c02c170  lui         $v0, 0xC170
    ctx->pc = 0x281e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49520 << 16));
    // 0x281e0c: 0xae420094  sw          $v0, 0x94($s2)
    ctx->pc = 0x281e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
    // 0x281e10: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x281e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x281e14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x281e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x281e18: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x281e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x281e1c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x281e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x281e20: 0xc0a04c0  jal         func_281300
    ctx->pc = 0x281E20u;
    SET_GPR_U32(ctx, 31, 0x281E28u);
    ctx->pc = 0x281300u;
    if (runtime->hasFunction(0x281300u)) {
        auto targetFn = runtime->lookupFunction(0x281300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281E28u; }
        if (ctx->pc != 0x281E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        f_rand__Fff_0x281300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281E28u; }
        if (ctx->pc != 0x281E28u) { return; }
    }
    ctx->pc = 0x281E28u;
label_281e28:
    // 0x281e28: 0xe6400098  swc1        $f0, 0x98($s2)
    ctx->pc = 0x281e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 152), bits); }
    // 0x281e2c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x281e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x281e30: 0xae43009c  sw          $v1, 0x9C($s2)
    ctx->pc = 0x281e30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
    // 0x281e34: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x281e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x281e38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x281e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281e3c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x281E3Cu;
    {
        const bool branch_taken_0x281e3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x281E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281E3Cu;
            // 0x281e40: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e3c) {
            ctx->pc = 0x281E60u;
            goto label_281e60;
        }
    }
    ctx->pc = 0x281E44u;
    // 0x281e44: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x281e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x281e48: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x281e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x281e4c: 0xae4400a0  sw          $a0, 0xA0($s2)
    ctx->pc = 0x281e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 4));
    // 0x281e50: 0xae4400a4  sw          $a0, 0xA4($s2)
    ctx->pc = 0x281e50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 4));
    // 0x281e54: 0xae4400a8  sw          $a0, 0xA8($s2)
    ctx->pc = 0x281e54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 4));
    // 0x281e58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x281E58u;
    {
        const bool branch_taken_0x281e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281E58u;
            // 0x281e5c: 0xae4300ac  sw          $v1, 0xAC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281e58) {
            ctx->pc = 0x281E74u;
            goto label_281e74;
        }
    }
    ctx->pc = 0x281E60u;
label_281e60:
    // 0x281e60: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x281e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x281e64: 0xae4400a0  sw          $a0, 0xA0($s2)
    ctx->pc = 0x281e64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 4));
    // 0x281e68: 0xae4400a4  sw          $a0, 0xA4($s2)
    ctx->pc = 0x281e68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 4));
    // 0x281e6c: 0xae4400a8  sw          $a0, 0xA8($s2)
    ctx->pc = 0x281e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 4));
    // 0x281e70: 0xae4300ac  sw          $v1, 0xAC($s2)
    ctx->pc = 0x281e70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
label_281e74:
    // 0x281e74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x281e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281e78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x281e78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281e7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281e7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281e80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281e84: 0x3e00008  jr          $ra
    ctx->pc = 0x281E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281E84u;
            // 0x281e88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281E8Cu;
}

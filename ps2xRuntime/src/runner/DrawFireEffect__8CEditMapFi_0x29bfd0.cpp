#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawFireEffect__8CEditMapFi
// Address: 0x29bfd0 - 0x29c108
void DrawFireEffect__8CEditMapFi_0x29bfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFireEffect__8CEditMapFi_0x29bfd0");
#endif

    switch (ctx->pc) {
        case 0x29bff8u: goto label_29bff8;
        case 0x29c008u: goto label_29c008;
        case 0x29c01cu: goto label_29c01c;
        case 0x29c034u: goto label_29c034;
        case 0x29c050u: goto label_29c050;
        case 0x29c05cu: goto label_29c05c;
        case 0x29c064u: goto label_29c064;
        case 0x29c06cu: goto label_29c06c;
        case 0x29c0a4u: goto label_29c0a4;
        case 0x29c0c4u: goto label_29c0c4;
        case 0x29c0e8u: goto label_29c0e8;
        default: break;
    }

    ctx->pc = 0x29bfd0u;

    // 0x29bfd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x29bfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x29bfd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29bfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x29bfd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29bfd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29bfdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29bfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29bfe0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29bfe0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bfe4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29bfe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29bfe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29bfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29bfec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29bfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29bff0: 0xc057974  jal         func_15E5D0
    ctx->pc = 0x29BFF0u;
    SET_GPR_U32(ctx, 31, 0x29BFF8u);
    ctx->pc = 0x29BFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BFF0u;
            // 0x29bff4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E5D0u;
    if (runtime->hasFunction(0x15E5D0u)) {
        auto targetFn = runtime->lookupFunction(0x15E5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BFF8u; }
        if (ctx->pc != 0x29BFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFireEffect__4CMapFi_0x15e5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29BFF8u; }
        if (ctx->pc != 0x29BFF8u) { return; }
    }
    ctx->pc = 0x29BFF8u;
label_29bff8:
    // 0x29bff8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29bff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29bffc: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x29bffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x29c000: 0xc0575cc  jal         func_15D730
    ctx->pc = 0x29C000u;
    SET_GPR_U32(ctx, 31, 0x29C008u);
    ctx->pc = 0x29C004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C000u;
            // 0x29c004: 0xafa000a8  sw          $zero, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C008u; }
        if (ctx->pc != 0x29C008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateFuncCheck__4CMapFP15CFuncPointCheck_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C008u; }
        if (ctx->pc != 0x29C008u) { return; }
    }
    ctx->pc = 0x29C008u;
label_29c008:
    // 0x29c008: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x29c008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x29c00c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29c00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c010: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x29c010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x29c014: 0xc04ba14  jal         func_12E850
    ctx->pc = 0x29C014u;
    SET_GPR_U32(ctx, 31, 0x29C01Cu);
    ctx->pc = 0x29C018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C014u;
            // 0x29c018: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C01Cu; }
        if (ctx->pc != 0x29C01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C01Cu; }
        if (ctx->pc != 0x29C01Cu) { return; }
    }
    ctx->pc = 0x29C01Cu;
label_29c01c:
    // 0x29c01c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x29c01cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x29c020: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29c020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x29c024: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x29c024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x29c028: 0x24a5df78  addiu       $a1, $a1, -0x2088
    ctx->pc = 0x29c028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958968));
    // 0x29c02c: 0xc04b414  jal         func_12D050
    ctx->pc = 0x29C02Cu;
    SET_GPR_U32(ctx, 31, 0x29C034u);
    ctx->pc = 0x29C030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C02Cu;
            // 0x29c030: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C034u; }
        if (ctx->pc != 0x29C034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C034u; }
        if (ctx->pc != 0x29C034u) { return; }
    }
    ctx->pc = 0x29C034u;
label_29c034:
    // 0x29c034: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29c034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c038: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x29c038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x29c03c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29c03cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x29c040: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29c040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c044: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x29c044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x29c048: 0xc04b414  jal         func_12D050
    ctx->pc = 0x29C048u;
    SET_GPR_U32(ctx, 31, 0x29C050u);
    ctx->pc = 0x29C04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C048u;
            // 0x29c04c: 0x24a5df88  addiu       $a1, $a1, -0x2078 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C050u; }
        if (ctx->pc != 0x29C050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C050u; }
        if (ctx->pc != 0x29C050u) { return; }
    }
    ctx->pc = 0x29C050u;
label_29c050:
    // 0x29c050: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29c050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c054: 0xc04c050  jal         func_130140
    ctx->pc = 0x29C054u;
    SET_GPR_U32(ctx, 31, 0x29C05Cu);
    ctx->pc = 0x29C058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C054u;
            // 0x29c058: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C05Cu; }
        if (ctx->pc != 0x29C05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C05Cu; }
        if (ctx->pc != 0x29C05Cu) { return; }
    }
    ctx->pc = 0x29C05Cu;
label_29c05c:
    // 0x29c05c: 0xc050c30  jal         func_1430C0
    ctx->pc = 0x29C05Cu;
    SET_GPR_U32(ctx, 31, 0x29C064u);
    ctx->pc = 0x29C060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C05Cu;
            // 0x29c060: 0x8e920d44  lw          $s2, 0xD44($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1430C0u;
    if (runtime->hasFunction(0x1430C0u)) {
        auto targetFn = runtime->lookupFunction(0x1430C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C064u; }
        if (ctx->pc != 0x29C064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirectStart__Fv_0x1430c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C064u; }
        if (ctx->pc != 0x29C064u) { return; }
    }
    ctx->pc = 0x29C064u;
label_29c064:
    // 0x29c064: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x29C064u;
    {
        const bool branch_taken_0x29c064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C064u;
            // 0x29c068: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c064) {
            ctx->pc = 0x29C0D0u;
            goto label_29c0d0;
        }
    }
    ctx->pc = 0x29C06Cu;
label_29c06c:
    // 0x29c06c: 0x8e4202b0  lw          $v0, 0x2B0($s2)
    ctx->pc = 0x29c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 688)));
    // 0x29c070: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x29c070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x29c074: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x29C074u;
    {
        const bool branch_taken_0x29c074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c074) {
            ctx->pc = 0x29C0C4u;
            goto label_29c0c4;
        }
    }
    ctx->pc = 0x29C07Cu;
    // 0x29c07c: 0x82420070  lb          $v0, 0x70($s2)
    ctx->pc = 0x29c07cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x29c080: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x29c080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x29c084: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x29c084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x29c088: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29C088u;
    {
        const bool branch_taken_0x29c088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c088) {
            ctx->pc = 0x29C0C4u;
            goto label_29c0c4;
        }
    }
    ctx->pc = 0x29C090u;
    // 0x29c090: 0x8e420310  lw          $v0, 0x310($s2)
    ctx->pc = 0x29c090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 784)));
    // 0x29c094: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29C094u;
    {
        const bool branch_taken_0x29c094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29C098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C094u;
            // 0x29c098: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c094) {
            ctx->pc = 0x29C0C4u;
            goto label_29c0c4;
        }
    }
    ctx->pc = 0x29C09Cu;
    // 0x29c09c: 0xc059cc0  jal         func_167300
    ctx->pc = 0x29C09Cu;
    SET_GPR_U32(ctx, 31, 0x29C0A4u);
    ctx->pc = 0x29C0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C09Cu;
            // 0x29c0a0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C0A4u; }
        if (ctx->pc != 0x29C0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C0A4u; }
        if (ctx->pc != 0x29C0A4u) { return; }
    }
    ctx->pc = 0x29C0A4u;
label_29c0a4:
    // 0x29c0a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29c0a8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x29c0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29c0ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29c0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29c0b0: 0x264502b0  addiu       $a1, $s2, 0x2B0
    ctx->pc = 0x29c0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 688));
    // 0x29c0b4: 0x27a600a8  addiu       $a2, $sp, 0xA8
    ctx->pc = 0x29c0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x29c0b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x29c0b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c0bc: 0xc0a78f0  jal         func_29E3C0
    ctx->pc = 0x29C0BCu;
    SET_GPR_U32(ctx, 31, 0x29C0C4u);
    ctx->pc = 0x29C0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C0BCu;
            // 0x29c0c0: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E3C0u;
    if (runtime->hasFunction(0x29E3C0u)) {
        auto targetFn = runtime->lookupFunction(0x29E3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C0C4u; }
        if (ctx->pc != 0x29C0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawFireEffect__FPA4_fP14CFuncPointMngrP15CFuncPointCheckfP10mgCTextureP10mgCTexture_0x29e3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C0C4u; }
        if (ctx->pc != 0x29C0C4u) { return; }
    }
    ctx->pc = 0x29C0C4u;
label_29c0c4:
    // 0x29c0c4: 0x0  nop
    ctx->pc = 0x29c0c4u;
    // NOP
    // 0x29c0c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29c0c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29c0cc: 0x26520330  addiu       $s2, $s2, 0x330
    ctx->pc = 0x29c0ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
label_29c0d0:
    // 0x29c0d0: 0x8e820d40  lw          $v0, 0xD40($s4)
    ctx->pc = 0x29c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3392)));
    // 0x29c0d4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x29c0d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29c0d8: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x29C0D8u;
    {
        const bool branch_taken_0x29c0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c0d8) {
            ctx->pc = 0x29C06Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29c06c;
        }
    }
    ctx->pc = 0x29C0E0u;
    // 0x29c0e0: 0xc050c4c  jal         func_143130
    ctx->pc = 0x29C0E0u;
    SET_GPR_U32(ctx, 31, 0x29C0E8u);
    ctx->pc = 0x143130u;
    if (runtime->hasFunction(0x143130u)) {
        auto targetFn = runtime->lookupFunction(0x143130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C0E8u; }
        if (ctx->pc != 0x29C0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirectEnd__Fv_0x143130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C0E8u; }
        if (ctx->pc != 0x29C0E8u) { return; }
    }
    ctx->pc = 0x29C0E8u;
label_29c0e8:
    // 0x29c0e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29c0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29c0ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29c0ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29c0f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29c0f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29c0f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29c0f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29c0f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c0f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29c0fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c100: 0x3e00008  jr          $ra
    ctx->pc = 0x29C100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C100u;
            // 0x29c104: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C108u;
}

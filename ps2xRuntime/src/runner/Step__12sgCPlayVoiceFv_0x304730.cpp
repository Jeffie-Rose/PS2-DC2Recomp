#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__12sgCPlayVoiceFv
// Address: 0x304730 - 0x304864
void Step__12sgCPlayVoiceFv_0x304730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__12sgCPlayVoiceFv_0x304730");
#endif

    switch (ctx->pc) {
        case 0x304798u: goto label_304798;
        case 0x3047a0u: goto label_3047a0;
        case 0x3047b8u: goto label_3047b8;
        case 0x3047c8u: goto label_3047c8;
        case 0x3047e0u: goto label_3047e0;
        case 0x304810u: goto label_304810;
        case 0x304818u: goto label_304818;
        case 0x304830u: goto label_304830;
        case 0x304844u: goto label_304844;
        default: break;
    }

    ctx->pc = 0x304730u;

    // 0x304730: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x304730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x304734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x304734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x304738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x304738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30473c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x30473cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x304740: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x304740u;
    {
        const bool branch_taken_0x304740 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x304744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304740u;
            // 0x304744: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304740) {
            ctx->pc = 0x304750u;
            goto label_304750;
        }
    }
    ctx->pc = 0x304748u;
    // 0x304748: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x304748u;
    {
        const bool branch_taken_0x304748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30474Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304748u;
            // 0x30474c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304748) {
            ctx->pc = 0x304854u;
            goto label_304854;
        }
    }
    ctx->pc = 0x304750u;
label_304750:
    // 0x304750: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x304750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x304754: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x304754u;
    {
        const bool branch_taken_0x304754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304754u;
            // 0x304758: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304754) {
            ctx->pc = 0x304828u;
            goto label_304828;
        }
    }
    ctx->pc = 0x30475Cu;
    // 0x30475c: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x30475Cu;
    {
        const bool branch_taken_0x30475c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30475Cu;
            // 0x304760: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30475c) {
            ctx->pc = 0x3047F8u;
            goto label_3047f8;
        }
    }
    ctx->pc = 0x304764u;
    // 0x304764: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x304764u;
    {
        const bool branch_taken_0x304764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304764u;
            // 0x304768: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304764) {
            ctx->pc = 0x3047D8u;
            goto label_3047d8;
        }
    }
    ctx->pc = 0x30476Cu;
    // 0x30476c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30476Cu;
    {
        const bool branch_taken_0x30476c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x304770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30476Cu;
            // 0x304770: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30476c) {
            ctx->pc = 0x3047B0u;
            goto label_3047b0;
        }
    }
    ctx->pc = 0x304774u;
    // 0x304774: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x304774u;
    {
        const bool branch_taken_0x304774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x304774) {
            ctx->pc = 0x304784u;
            goto label_304784;
        }
    }
    ctx->pc = 0x30477Cu;
    // 0x30477c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x30477Cu;
    {
        const bool branch_taken_0x30477c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30477Cu;
            // 0x304780: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30477c) {
            ctx->pc = 0x304854u;
            goto label_304854;
        }
    }
    ctx->pc = 0x304784u;
label_304784:
    // 0x304784: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x304784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x304788: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x304788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x30478c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x30478cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x304790: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x304790u;
    SET_GPR_U32(ctx, 31, 0x304798u);
    ctx->pc = 0x304794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304790u;
            // 0x304794: 0x24a52158  addiu       $a1, $a1, 0x2158 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304798u; }
        if (ctx->pc != 0x304798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304798u; }
        if (ctx->pc != 0x304798u) { return; }
    }
    ctx->pc = 0x304798u;
label_304798:
    // 0x304798: 0xc0640d8  jal         func_190360
    ctx->pc = 0x304798u;
    SET_GPR_U32(ctx, 31, 0x3047A0u);
    ctx->pc = 0x30479Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304798u;
            // 0x30479c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190360u;
    if (runtime->hasFunction(0x190360u)) {
        auto targetFn = runtime->lookupFunction(0x190360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3047A0u; }
        if (ctx->pc != 0x3047A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStreamOpenFast__FPc_0x190360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3047A0u; }
        if (ctx->pc != 0x3047A0u) { return; }
    }
    ctx->pc = 0x3047A0u;
label_3047a0:
    // 0x3047a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3047a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3047a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3047a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3047a8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3047A8u;
    {
        const bool branch_taken_0x3047a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3047ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3047A8u;
            // 0x3047ac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3047a8) {
            ctx->pc = 0x304850u;
            goto label_304850;
        }
    }
    ctx->pc = 0x3047B0u;
label_3047b0:
    // 0x3047b0: 0xc0640e8  jal         func_1903A0
    ctx->pc = 0x3047B0u;
    SET_GPR_U32(ctx, 31, 0x3047B8u);
    ctx->pc = 0x1903A0u;
    if (runtime->hasFunction(0x1903A0u)) {
        auto targetFn = runtime->lookupFunction(0x1903A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3047B8u; }
        if (ctx->pc != 0x3047B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStreamOpenState__Fv_0x1903a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3047B8u; }
        if (ctx->pc != 0x3047B8u) { return; }
    }
    ctx->pc = 0x3047B8u;
label_3047b8:
    // 0x3047b8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3047B8u;
    {
        const bool branch_taken_0x3047b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3047b8) {
            ctx->pc = 0x304850u;
            goto label_304850;
        }
    }
    ctx->pc = 0x3047C0u;
    // 0x3047c0: 0xc0640f8  jal         func_1903E0
    ctx->pc = 0x3047C0u;
    SET_GPR_U32(ctx, 31, 0x3047C8u);
    ctx->pc = 0x1903E0u;
    if (runtime->hasFunction(0x1903E0u)) {
        auto targetFn = runtime->lookupFunction(0x1903E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3047C8u; }
        if (ctx->pc != 0x3047C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStreamStandBy__Fv_0x1903e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3047C8u; }
        if (ctx->pc != 0x3047C8u) { return; }
    }
    ctx->pc = 0x3047C8u;
label_3047c8:
    // 0x3047c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3047c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3047cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3047ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3047d0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3047D0u;
    {
        const bool branch_taken_0x3047d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3047D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3047D0u;
            // 0x3047d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3047d0) {
            ctx->pc = 0x304850u;
            goto label_304850;
        }
    }
    ctx->pc = 0x3047D8u;
label_3047d8:
    // 0x3047d8: 0xc0640e8  jal         func_1903A0
    ctx->pc = 0x3047D8u;
    SET_GPR_U32(ctx, 31, 0x3047E0u);
    ctx->pc = 0x1903A0u;
    if (runtime->hasFunction(0x1903A0u)) {
        auto targetFn = runtime->lookupFunction(0x1903A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3047E0u; }
        if (ctx->pc != 0x3047E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStreamOpenState__Fv_0x1903a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3047E0u; }
        if (ctx->pc != 0x3047E0u) { return; }
    }
    ctx->pc = 0x3047E0u;
label_3047e0:
    // 0x3047e0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3047E0u;
    {
        const bool branch_taken_0x3047e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3047e0) {
            ctx->pc = 0x304850u;
            goto label_304850;
        }
    }
    ctx->pc = 0x3047E8u;
    // 0x3047e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3047e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3047ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3047ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3047f0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3047F0u;
    {
        const bool branch_taken_0x3047f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3047F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3047F0u;
            // 0x3047f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3047f0) {
            ctx->pc = 0x304850u;
            goto label_304850;
        }
    }
    ctx->pc = 0x3047F8u;
label_3047f8:
    // 0x3047f8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3047f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3047fc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3047FCu;
    {
        const bool branch_taken_0x3047fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3047fc) {
            ctx->pc = 0x304850u;
            goto label_304850;
        }
    }
    ctx->pc = 0x304804u;
    // 0x304804: 0xc60d000c  lwc1        $f13, 0xC($s0)
    ctx->pc = 0x304804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x304808: 0xc064104  jal         func_190410
    ctx->pc = 0x304808u;
    SET_GPR_U32(ctx, 31, 0x304810u);
    ctx->pc = 0x30480Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304808u;
            // 0x30480c: 0xc60c0010  lwc1        $f12, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x190410u;
    if (runtime->hasFunction(0x190410u)) {
        auto targetFn = runtime->lookupFunction(0x190410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304810u; }
        if (ctx->pc != 0x304810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStreamSetVol__Fff_0x190410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304810u; }
        if (ctx->pc != 0x304810u) { return; }
    }
    ctx->pc = 0x304810u;
label_304810:
    // 0x304810: 0xc064140  jal         func_190500
    ctx->pc = 0x304810u;
    SET_GPR_U32(ctx, 31, 0x304818u);
    ctx->pc = 0x190500u;
    if (runtime->hasFunction(0x190500u)) {
        auto targetFn = runtime->lookupFunction(0x190500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304818u; }
        if (ctx->pc != 0x304818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStreamPlay__Fv_0x190500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304818u; }
        if (ctx->pc != 0x304818u) { return; }
    }
    ctx->pc = 0x304818u;
label_304818:
    // 0x304818: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x304818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30481c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x304820: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x304820u;
    {
        const bool branch_taken_0x304820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304820u;
            // 0x304824: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304820) {
            ctx->pc = 0x304850u;
            goto label_304850;
        }
    }
    ctx->pc = 0x304828u;
label_304828:
    // 0x304828: 0xc064164  jal         func_190590
    ctx->pc = 0x304828u;
    SET_GPR_U32(ctx, 31, 0x304830u);
    ctx->pc = 0x190590u;
    if (runtime->hasFunction(0x190590u)) {
        auto targetFn = runtime->lookupFunction(0x190590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304830u; }
        if (ctx->pc != 0x304830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStreamGetState__Fv_0x190590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304830u; }
        if (ctx->pc != 0x304830u) { return; }
    }
    ctx->pc = 0x304830u;
label_304830:
    // 0x304830: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x304830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x304834: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x304834u;
    {
        const bool branch_taken_0x304834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x304834) {
            ctx->pc = 0x304850u;
            goto label_304850;
        }
    }
    ctx->pc = 0x30483Cu;
    // 0x30483c: 0xc064174  jal         func_1905D0
    ctx->pc = 0x30483Cu;
    SET_GPR_U32(ctx, 31, 0x304844u);
    ctx->pc = 0x1905D0u;
    if (runtime->hasFunction(0x1905D0u)) {
        auto targetFn = runtime->lookupFunction(0x1905D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304844u; }
        if (ctx->pc != 0x304844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStreamClose__Fv_0x1905d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304844u; }
        if (ctx->pc != 0x304844u) { return; }
    }
    ctx->pc = 0x304844u;
label_304844:
    // 0x304844: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x304844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x304848: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x304848u;
    {
        const bool branch_taken_0x304848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30484Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304848u;
            // 0x30484c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304848) {
            ctx->pc = 0x304854u;
            goto label_304854;
        }
    }
    ctx->pc = 0x304850u;
label_304850:
    // 0x304850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304854:
    // 0x304854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x304854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x304858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30485c: 0x3e00008  jr          $ra
    ctx->pc = 0x30485Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30485Cu;
            // 0x304860: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x304864u;
}

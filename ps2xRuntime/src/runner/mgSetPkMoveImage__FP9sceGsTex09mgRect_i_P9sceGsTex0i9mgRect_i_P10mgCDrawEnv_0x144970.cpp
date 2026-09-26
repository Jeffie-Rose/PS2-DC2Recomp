#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetPkMoveImage__FP9sceGsTex09mgRect<i>P9sceGsTex0i9mgRect<i>P10mgCDrawEnv
// Address: 0x144970 - 0x144d6c
void mgSetPkMoveImage__FP9sceGsTex09mgRect_i_P9sceGsTex0i9mgRect_i_P10mgCDrawEnv_0x144970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetPkMoveImage__FP9sceGsTex09mgRect_i_P9sceGsTex0i9mgRect_i_P10mgCDrawEnv_0x144970");
#endif

    switch (ctx->pc) {
        case 0x144a30u: goto label_144a30;
        case 0x144a40u: goto label_144a40;
        case 0x144a4cu: goto label_144a4c;
        case 0x144a60u: goto label_144a60;
        case 0x144a70u: goto label_144a70;
        case 0x144a88u: goto label_144a88;
        case 0x144ac0u: goto label_144ac0;
        case 0x144ad0u: goto label_144ad0;
        case 0x144b54u: goto label_144b54;
        case 0x144b88u: goto label_144b88;
        case 0x144c08u: goto label_144c08;
        case 0x144c18u: goto label_144c18;
        case 0x144c28u: goto label_144c28;
        case 0x144c38u: goto label_144c38;
        case 0x144c48u: goto label_144c48;
        case 0x144c60u: goto label_144c60;
        case 0x144c7cu: goto label_144c7c;
        case 0x144cc0u: goto label_144cc0;
        case 0x144cdcu: goto label_144cdc;
        case 0x144d20u: goto label_144d20;
        case 0x144d30u: goto label_144d30;
        case 0x144d38u: goto label_144d38;
        case 0x144d40u: goto label_144d40;
        case 0x144d54u: goto label_144d54;
        default: break;
    }

    ctx->pc = 0x144970u;

    // 0x144970: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x144970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x144974: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x144974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x144978: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x144978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14497c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14497cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x144980: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144984: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x144984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14498c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x14498cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x144990: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x144990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144994: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x144994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x144998: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x144998u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x14499c: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x14499cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1449a0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1449a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1449a4: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x1449a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1449a8: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x1449a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x1449ac: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x1449acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x1449b0: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x1449b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x1449b4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1449b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1449b8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1449b8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1449bc: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1449BCu;
    {
        const bool branch_taken_0x1449bc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1449C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1449BCu;
            // 0x1449c0: 0x30a3003f  andi        $v1, $a1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449bc) {
            ctx->pc = 0x1449D0u;
            goto label_1449d0;
        }
    }
    ctx->pc = 0x1449C4u;
    // 0x1449c4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1449C4u;
    {
        const bool branch_taken_0x1449c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1449c4) {
            ctx->pc = 0x1449D0u;
            goto label_1449d0;
        }
    }
    ctx->pc = 0x1449CCu;
    // 0x1449cc: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1449ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1449d0:
    // 0x1449d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1449D0u;
    {
        const bool branch_taken_0x1449d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1449D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1449D0u;
            // 0x1449d4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449d0) {
            ctx->pc = 0x1449E0u;
            goto label_1449e0;
        }
    }
    ctx->pc = 0x1449D8u;
    // 0x1449d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1449d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1449dc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1449dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1449e0:
    // 0x1449e0: 0x4e10004  bgez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1449E0u;
    {
        const bool branch_taken_0x1449e0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1449E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1449E0u;
            // 0x1449e4: 0x30e3003f  andi        $v1, $a3, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449e0) {
            ctx->pc = 0x1449F4u;
            goto label_1449f4;
        }
    }
    ctx->pc = 0x1449E8u;
    // 0x1449e8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1449E8u;
    {
        const bool branch_taken_0x1449e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1449e8) {
            ctx->pc = 0x1449F4u;
            goto label_1449f4;
        }
    }
    ctx->pc = 0x1449F0u;
    // 0x1449f0: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1449f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1449f4:
    // 0x1449f4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1449F4u;
    {
        const bool branch_taken_0x1449f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1449F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1449F4u;
            // 0x1449f8: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449f4) {
            ctx->pc = 0x144A04u;
            goto label_144a04;
        }
    }
    ctx->pc = 0x1449FCu;
    // 0x1449fc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1449fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144a00: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x144a00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_144a04:
    // 0x144a04: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x144a04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x144a08: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x144a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x144a0c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x144A0Cu;
    {
        const bool branch_taken_0x144a0c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x144A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144A0Cu;
            // 0x144a10: 0x22143  sra         $a0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144a0c) {
            ctx->pc = 0x144A1Cu;
            goto label_144a1c;
        }
    }
    ctx->pc = 0x144A14u;
    // 0x144a14: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x144a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x144a18: 0x22143  sra         $a0, $v0, 5
    ctx->pc = 0x144a18u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
label_144a1c:
    // 0x144a1c: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x144a1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x144a20: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x144a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x144a24: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x144a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a28: 0xc050f18  jal         func_143C60
    ctx->pc = 0x144A28u;
    SET_GPR_U32(ctx, 31, 0x144A30u);
    ctx->pc = 0x144A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144A28u;
            // 0x144a2c: 0x23ebe  dsrl32      $a3, $v0, 26 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C60u;
    if (runtime->hasFunction(0x143C60u)) {
        auto targetFn = runtime->lookupFunction(0x143C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144A30u; }
        if (ctx->pc != 0x144A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__Fiiii_0x143c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144A30u; }
        if (ctx->pc != 0x144A30u) { return; }
    }
    ctx->pc = 0x144A30u;
label_144a30:
    // 0x144a30: 0x8f848774  lw          $a0, -0x788C($gp)
    ctx->pc = 0x144a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x144a34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x144a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a38: 0xc041ae4  jal         func_106B90
    ctx->pc = 0x144A38u;
    SET_GPR_U32(ctx, 31, 0x144A40u);
    ctx->pc = 0x144A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144A38u;
            // 0x144a3c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B90u;
    if (runtime->hasFunction(0x106B90u)) {
        auto targetFn = runtime->lookupFunction(0x106B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144A40u; }
        if (ctx->pc != 0x144A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCnt_0x106b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144A40u; }
        if (ctx->pc != 0x144A40u) { return; }
    }
    ctx->pc = 0x144A40u;
label_144a40:
    // 0x144a40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a44: 0xc041b2c  jal         func_106CB0
    ctx->pc = 0x144A44u;
    SET_GPR_U32(ctx, 31, 0x144A4Cu);
    ctx->pc = 0x144A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144A44u;
            // 0x144a48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106CB0u;
    if (runtime->hasFunction(0x106CB0u)) {
        auto targetFn = runtime->lookupFunction(0x106CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144A4Cu; }
        if (ctx->pc != 0x144A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkOpenDirectCode_0x106cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144A4Cu; }
        if (ctx->pc != 0x144A4Cu) { return; }
    }
    ctx->pc = 0x144A4Cu;
label_144a4c:
    // 0x144a4c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x144a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x144a50: 0x24420eb0  addiu       $v0, $v0, 0xEB0
    ctx->pc = 0x144a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
    // 0x144a54: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x144a54u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144a58: 0xc041b4e  jal         func_106D38
    ctx->pc = 0x144A58u;
    SET_GPR_U32(ctx, 31, 0x144A60u);
    ctx->pc = 0x144A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144A58u;
            // 0x144a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D38u;
    if (runtime->hasFunction(0x106D38u)) {
        auto targetFn = runtime->lookupFunction(0x106D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144A60u; }
        if (ctx->pc != 0x144A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkOpenGifTag_0x106d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144A60u; }
        if (ctx->pc != 0x144A60u) { return; }
    }
    ctx->pc = 0x144A60u;
label_144a60:
    // 0x144a60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a64: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x144a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x144a68: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144A68u;
    SET_GPR_U32(ctx, 31, 0x144A70u);
    ctx->pc = 0x144A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144A68u;
            // 0x144a6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144A70u; }
        if (ctx->pc != 0x144A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144A70u; }
        if (ctx->pc != 0x144A70u) { return; }
    }
    ctx->pc = 0x144A70u;
label_144a70:
    // 0x144a70: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x144A70u;
    {
        const bool branch_taken_0x144a70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x144a70) {
            ctx->pc = 0x144AD8u;
            goto label_144ad8;
        }
    }
    ctx->pc = 0x144A78u;
    // 0x144a78: 0xde460010  ld          $a2, 0x10($s2)
    ctx->pc = 0x144a78u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x144a7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a80: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144A80u;
    SET_GPR_U32(ctx, 31, 0x144A88u);
    ctx->pc = 0x144A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144A80u;
            // 0x144a84: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144A88u; }
        if (ctx->pc != 0x144A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144A88u; }
        if (ctx->pc != 0x144A88u) { return; }
    }
    ctx->pc = 0x144A88u;
label_144a88:
    // 0x144a88: 0xdf8387e0  ld          $v1, -0x7820($gp)
    ctx->pc = 0x144a88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936544)));
    // 0x144a8c: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x144a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x144a90: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x144a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x144a94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a98: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x144a98u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x144a9c: 0x92460024  lbu         $a2, 0x24($s2)
    ctx->pc = 0x144a9cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x144aa0: 0x93a30064  lbu         $v1, 0x64($sp)
    ctx->pc = 0x144aa0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x144aa4: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x144aa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x144aa8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x144aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x144aac: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x144aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x144ab0: 0xa3a20064  sb          $v0, 0x64($sp)
    ctx->pc = 0x144ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 100), (uint8_t)GPR_U32(ctx, 2));
    // 0x144ab4: 0xdce60000  ld          $a2, 0x0($a3)
    ctx->pc = 0x144ab4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x144ab8: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144AB8u;
    SET_GPR_U32(ctx, 31, 0x144AC0u);
    ctx->pc = 0x144ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144AB8u;
            // 0x144abc: 0x2405004e  addiu       $a1, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144AC0u; }
        if (ctx->pc != 0x144AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144AC0u; }
        if (ctx->pc != 0x144AC0u) { return; }
    }
    ctx->pc = 0x144AC0u;
label_144ac0:
    // 0x144ac0: 0xde460030  ld          $a2, 0x30($s2)
    ctx->pc = 0x144ac0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x144ac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ac8: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144AC8u;
    SET_GPR_U32(ctx, 31, 0x144AD0u);
    ctx->pc = 0x144ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144AC8u;
            // 0x144acc: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144AD0u; }
        if (ctx->pc != 0x144AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144AD0u; }
        if (ctx->pc != 0x144AD0u) { return; }
    }
    ctx->pc = 0x144AD0u;
label_144ad0:
    // 0x144ad0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x144AD0u;
    {
        const bool branch_taken_0x144ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144AD0u;
            // 0x144ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144ad0) {
            ctx->pc = 0x144C0Cu;
            goto label_144c0c;
        }
    }
    ctx->pc = 0x144AD8u;
label_144ad8:
    // 0x144ad8: 0xdf8a87d0  ld          $t2, -0x7830($gp)
    ctx->pc = 0x144ad8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 28), 4294936528)));
    // 0x144adc: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x144adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x144ae0: 0x300d0001  andi        $t5, $zero, 0x1
    ctx->pc = 0x144ae0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x144ae4: 0x240cfffe  addiu       $t4, $zero, -0x2
    ctx->pc = 0x144ae4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x144ae8: 0x27a3006a  addiu       $v1, $sp, 0x6A
    ctx->pc = 0x144ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 106));
    // 0x144aec: 0x640b0001  daddiu      $t3, $zero, 0x1
    ctx->pc = 0x144aecu;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x144af0: 0x2408fff9  addiu       $t0, $zero, -0x7
    ctx->pc = 0x144af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x144af4: 0x64090002  daddiu      $t1, $zero, 0x2
    ctx->pc = 0x144af4u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x144af8: 0x2406ffbf  addiu       $a2, $zero, -0x41
    ctx->pc = 0x144af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x144afc: 0xd3980  sll         $a3, $t5, 6
    ctx->pc = 0x144afcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 6));
    // 0x144b00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b04: 0xfc4a0000  sd          $t2, 0x0($v0)
    ctx->pc = 0x144b04u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 10));
    // 0x144b08: 0x93aa0068  lbu         $t2, 0x68($sp)
    ctx->pc = 0x144b08u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x144b0c: 0x14c5024  and         $t2, $t2, $t4
    ctx->pc = 0x144b0cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
    // 0x144b10: 0x14d5025  or          $t2, $t2, $t5
    ctx->pc = 0x144b10u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 13));
    // 0x144b14: 0xa3aa0068  sb          $t2, 0x68($sp)
    ctx->pc = 0x144b14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 10));
    // 0x144b18: 0x906a0000  lbu         $t2, 0x0($v1)
    ctx->pc = 0x144b18u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144b1c: 0x14c5024  and         $t2, $t2, $t4
    ctx->pc = 0x144b1cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
    // 0x144b20: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x144b20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
    // 0x144b24: 0xa06a0000  sb          $t2, 0x0($v1)
    ctx->pc = 0x144b24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x144b28: 0x906a0000  lbu         $t2, 0x0($v1)
    ctx->pc = 0x144b28u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144b2c: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x144b2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
    // 0x144b30: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x144b30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x144b34: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x144b34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x144b38: 0x93a30069  lbu         $v1, 0x69($sp)
    ctx->pc = 0x144b38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 105)));
    // 0x144b3c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x144b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x144b40: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x144b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x144b44: 0xa3a30069  sb          $v1, 0x69($sp)
    ctx->pc = 0x144b44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 105), (uint8_t)GPR_U32(ctx, 3));
    // 0x144b48: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x144b48u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144b4c: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144B4Cu;
    SET_GPR_U32(ctx, 31, 0x144B54u);
    ctx->pc = 0x144B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144B4Cu;
            // 0x144b50: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144B54u; }
        if (ctx->pc != 0x144B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144B54u; }
        if (ctx->pc != 0x144B54u) { return; }
    }
    ctx->pc = 0x144B54u;
label_144b54:
    // 0x144b54: 0xdf8687e0  ld          $a2, -0x7820($gp)
    ctx->pc = 0x144b54u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294936544)));
    // 0x144b58: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x144b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x144b5c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x144b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x144b60: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x144b60u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x144b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144b68: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x144b68u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
    // 0x144b6c: 0x93a60074  lbu         $a2, 0x74($sp)
    ctx->pc = 0x144b6cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x144b70: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x144b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x144b74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x144b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x144b78: 0xa3a20074  sb          $v0, 0x74($sp)
    ctx->pc = 0x144b78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 2));
    // 0x144b7c: 0xdce60000  ld          $a2, 0x0($a3)
    ctx->pc = 0x144b7cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x144b80: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144B80u;
    SET_GPR_U32(ctx, 31, 0x144B88u);
    ctx->pc = 0x144B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144B80u;
            // 0x144b84: 0x2405004e  addiu       $a1, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144B88u; }
        if (ctx->pc != 0x144B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144B88u; }
        if (ctx->pc != 0x144B88u) { return; }
    }
    ctx->pc = 0x144B88u;
label_144b88:
    // 0x144b88: 0xdf8587f0  ld          $a1, -0x7810($gp)
    ctx->pc = 0x144b88u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936560)));
    // 0x144b8c: 0x27a20078  addiu       $v0, $sp, 0x78
    ctx->pc = 0x144b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x144b90: 0x30040003  andi        $a0, $zero, 0x3
    ctx->pc = 0x144b90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x144b94: 0x240bfffc  addiu       $t3, $zero, -0x4
    ctx->pc = 0x144b94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x144b98: 0x43180  sll         $a2, $a0, 6
    ctx->pc = 0x144b98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x144b9c: 0x640c0002  daddiu      $t4, $zero, 0x2
    ctx->pc = 0x144b9cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x144ba0: 0x2409fff3  addiu       $t1, $zero, -0xD
    ctx->pc = 0x144ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x144ba4: 0x640a0008  daddiu      $t2, $zero, 0x8
    ctx->pc = 0x144ba4u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x144ba8: 0x2407ffcf  addiu       $a3, $zero, -0x31
    ctx->pc = 0x144ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x144bac: 0x64080020  daddiu      $t0, $zero, 0x20
    ctx->pc = 0x144bacu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)32);
    // 0x144bb0: 0x2403ff3f  addiu       $v1, $zero, -0xC1
    ctx->pc = 0x144bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
    // 0x144bb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144bb8: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x144bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x144bbc: 0x93ad0078  lbu         $t5, 0x78($sp)
    ctx->pc = 0x144bbcu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144bc0: 0x1ab5824  and         $t3, $t5, $t3
    ctx->pc = 0x144bc0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 13) & GPR_U64(ctx, 11));
    // 0x144bc4: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x144bc4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x144bc8: 0xa3ab0078  sb          $t3, 0x78($sp)
    ctx->pc = 0x144bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 11));
    // 0x144bcc: 0x93ab0078  lbu         $t3, 0x78($sp)
    ctx->pc = 0x144bccu;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144bd0: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x144bd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x144bd4: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x144bd4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x144bd8: 0xa3a90078  sb          $t1, 0x78($sp)
    ctx->pc = 0x144bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 9));
    // 0x144bdc: 0x93a90078  lbu         $t1, 0x78($sp)
    ctx->pc = 0x144bdcu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144be0: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x144be0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x144be4: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x144be4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x144be8: 0xa3a70078  sb          $a3, 0x78($sp)
    ctx->pc = 0x144be8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 7));
    // 0x144bec: 0x93a70078  lbu         $a3, 0x78($sp)
    ctx->pc = 0x144becu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x144bf0: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x144bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x144bf4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x144bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x144bf8: 0xa3a30078  sb          $v1, 0x78($sp)
    ctx->pc = 0x144bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 120), (uint8_t)GPR_U32(ctx, 3));
    // 0x144bfc: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x144bfcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144c00: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144C00u;
    SET_GPR_U32(ctx, 31, 0x144C08u);
    ctx->pc = 0x144C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144C00u;
            // 0x144c04: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C08u; }
        if (ctx->pc != 0x144C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C08u; }
        if (ctx->pc != 0x144C08u) { return; }
    }
    ctx->pc = 0x144C08u;
label_144c08:
    // 0x144c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_144c0c:
    // 0x144c0c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x144c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x144c10: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144C10u;
    SET_GPR_U32(ctx, 31, 0x144C18u);
    ctx->pc = 0x144C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144C10u;
            // 0x144c14: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C18u; }
        if (ctx->pc != 0x144C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C18u; }
        if (ctx->pc != 0x144C18u) { return; }
    }
    ctx->pc = 0x144C18u;
label_144c18:
    // 0x144c18: 0xde060000  ld          $a2, 0x0($s0)
    ctx->pc = 0x144c18u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x144c1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c20: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144C20u;
    SET_GPR_U32(ctx, 31, 0x144C28u);
    ctx->pc = 0x144C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144C20u;
            // 0x144c24: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C28u; }
        if (ctx->pc != 0x144C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C28u; }
        if (ctx->pc != 0x144C28u) { return; }
    }
    ctx->pc = 0x144C28u;
label_144c28:
    // 0x144c28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c2c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x144c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x144c30: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144C30u;
    SET_GPR_U32(ctx, 31, 0x144C38u);
    ctx->pc = 0x144C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144C30u;
            // 0x144c34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C38u; }
        if (ctx->pc != 0x144C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C38u; }
        if (ctx->pc != 0x144C38u) { return; }
    }
    ctx->pc = 0x144C38u;
label_144c38:
    // 0x144c38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x144c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c40: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144C40u;
    SET_GPR_U32(ctx, 31, 0x144C48u);
    ctx->pc = 0x144C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144C40u;
            // 0x144c44: 0x24060116  addiu       $a2, $zero, 0x116 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C48u; }
        if (ctx->pc != 0x144C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C48u; }
        if (ctx->pc != 0x144C48u) { return; }
    }
    ctx->pc = 0x144C48u;
label_144c48:
    // 0x144c48: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x144c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x144c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c50: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x144c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x144c54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x144c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144c58: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144C58u;
    SET_GPR_U32(ctx, 31, 0x144C60u);
    ctx->pc = 0x144C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144C58u;
            // 0x144c5c: 0x34468080  ori         $a2, $v0, 0x8080 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C60u; }
        if (ctx->pc != 0x144C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C60u; }
        if (ctx->pc != 0x144C60u) { return; }
    }
    ctx->pc = 0x144C60u;
label_144c60:
    // 0x144c60: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x144c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x144c64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c68: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x144c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x144c6c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x144c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x144c70: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x144c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x144c74: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144C74u;
    SET_GPR_U32(ctx, 31, 0x144C7Cu);
    ctx->pc = 0x144C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144C74u;
            // 0x144c78: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C7Cu; }
        if (ctx->pc != 0x144C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144C7Cu; }
        if (ctx->pc != 0x144C7Cu) { return; }
    }
    ctx->pc = 0x144C7Cu;
label_144c7c:
    // 0x144c7c: 0x8f83879c  lw          $v1, -0x7864($gp)
    ctx->pc = 0x144c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x144c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144c84: 0x8f878798  lw          $a3, -0x7868($gp)
    ctx->pc = 0x144c84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x144c88: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x144c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x144c8c: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x144c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x144c90: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x144c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x144c94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x144c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x144c98: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x144c98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x144c9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x144c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x144ca0: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x144ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x144ca4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x144ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x144ca8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x144ca8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x144cac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x144cacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x144cb0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x144cb0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x144cb4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x144cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x144cb8: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144CB8u;
    SET_GPR_U32(ctx, 31, 0x144CC0u);
    ctx->pc = 0x144CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144CB8u;
            // 0x144cbc: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144CC0u; }
        if (ctx->pc != 0x144CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144CC0u; }
        if (ctx->pc != 0x144CC0u) { return; }
    }
    ctx->pc = 0x144CC0u;
label_144cc0:
    // 0x144cc0: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x144cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x144cc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144cc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x144cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x144ccc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x144cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x144cd0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x144cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x144cd4: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144CD4u;
    SET_GPR_U32(ctx, 31, 0x144CDCu);
    ctx->pc = 0x144CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144CD4u;
            // 0x144cd8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144CDCu; }
        if (ctx->pc != 0x144CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144CDCu; }
        if (ctx->pc != 0x144CDCu) { return; }
    }
    ctx->pc = 0x144CDCu;
label_144cdc:
    // 0x144cdc: 0x8f83879c  lw          $v1, -0x7864($gp)
    ctx->pc = 0x144cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x144ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ce4: 0x8f878798  lw          $a3, -0x7868($gp)
    ctx->pc = 0x144ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x144ce8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x144ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x144cec: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x144cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x144cf0: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x144cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x144cf4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x144cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x144cf8: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x144cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x144cfc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x144cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x144d00: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x144d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x144d04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x144d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x144d08: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x144d08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x144d0c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x144d0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x144d10: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x144d10u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x144d14: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x144d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x144d18: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144D18u;
    SET_GPR_U32(ctx, 31, 0x144D20u);
    ctx->pc = 0x144D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144D18u;
            // 0x144d1c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144D20u; }
        if (ctx->pc != 0x144D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144D20u; }
        if (ctx->pc != 0x144D20u) { return; }
    }
    ctx->pc = 0x144D20u;
label_144d20:
    // 0x144d20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d24: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x144d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x144d28: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144D28u;
    SET_GPR_U32(ctx, 31, 0x144D30u);
    ctx->pc = 0x144D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144D28u;
            // 0x144d2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144D30u; }
        if (ctx->pc != 0x144D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144D30u; }
        if (ctx->pc != 0x144D30u) { return; }
    }
    ctx->pc = 0x144D30u;
label_144d30:
    // 0x144d30: 0xc041b54  jal         func_106D50
    ctx->pc = 0x144D30u;
    SET_GPR_U32(ctx, 31, 0x144D38u);
    ctx->pc = 0x144D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144D30u;
            // 0x144d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D50u;
    if (runtime->hasFunction(0x106D50u)) {
        auto targetFn = runtime->lookupFunction(0x106D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144D38u; }
        if (ctx->pc != 0x144D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCloseGifTag_0x106d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144D38u; }
        if (ctx->pc != 0x144D38u) { return; }
    }
    ctx->pc = 0x144D38u;
label_144d38:
    // 0x144d38: 0xc041b42  jal         func_106D08
    ctx->pc = 0x144D38u;
    SET_GPR_U32(ctx, 31, 0x144D40u);
    ctx->pc = 0x144D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144D38u;
            // 0x144d3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D08u;
    if (runtime->hasFunction(0x106D08u)) {
        auto targetFn = runtime->lookupFunction(0x106D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144D40u; }
        if (ctx->pc != 0x144D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCloseDirectCode_0x106d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144D40u; }
        if (ctx->pc != 0x144D40u) { return; }
    }
    ctx->pc = 0x144D40u;
label_144d40:
    // 0x144d40: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x144d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x144d44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x144d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d48: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x144d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d4c: 0xc050f18  jal         func_143C60
    ctx->pc = 0x144D4Cu;
    SET_GPR_U32(ctx, 31, 0x144D54u);
    ctx->pc = 0x144D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144D4Cu;
            // 0x144d50: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C60u;
    if (runtime->hasFunction(0x143C60u)) {
        auto targetFn = runtime->lookupFunction(0x143C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144D54u; }
        if (ctx->pc != 0x144D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__Fiiii_0x143c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144D54u; }
        if (ctx->pc != 0x144D54u) { return; }
    }
    ctx->pc = 0x144D54u;
label_144d54:
    // 0x144d54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x144d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x144d58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x144d58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144d5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144d60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144d64: 0x3e00008  jr          $ra
    ctx->pc = 0x144D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144D64u;
            // 0x144d68: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144D6Cu;
}

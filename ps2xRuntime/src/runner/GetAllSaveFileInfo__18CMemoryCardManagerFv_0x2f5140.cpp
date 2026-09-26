#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetAllSaveFileInfo__18CMemoryCardManagerFv
// Address: 0x2f5140 - 0x2f5384
void GetAllSaveFileInfo__18CMemoryCardManagerFv_0x2f5140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetAllSaveFileInfo__18CMemoryCardManagerFv_0x2f5140");
#endif

    switch (ctx->pc) {
        case 0x2f519cu: goto label_2f519c;
        case 0x2f51acu: goto label_2f51ac;
        case 0x2f51c0u: goto label_2f51c0;
        case 0x2f51fcu: goto label_2f51fc;
        case 0x2f5220u: goto label_2f5220;
        case 0x2f5244u: goto label_2f5244;
        case 0x2f526cu: goto label_2f526c;
        case 0x2f5278u: goto label_2f5278;
        case 0x2f52b8u: goto label_2f52b8;
        case 0x2f52e4u: goto label_2f52e4;
        case 0x2f5314u: goto label_2f5314;
        case 0x2f5340u: goto label_2f5340;
        default: break;
    }

    ctx->pc = 0x2f5140u;

    // 0x2f5140: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2f5140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2f5144: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f5144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f5148: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f5148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f514c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f514cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f5150: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f5150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f5154: 0x83829f00  lb          $v0, -0x6100($gp)
    ctx->pc = 0x2f5154u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294942464)));
    // 0x2f5158: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f5158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f515c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F515Cu;
    {
        const bool branch_taken_0x2f515c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F515Cu;
            // 0x2f5160: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f515c) {
            ctx->pc = 0x2F5170u;
            goto label_2f5170;
        }
    }
    ctx->pc = 0x2F5164u;
    // 0x2f5164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f5164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5168: 0xaf809efc  sw          $zero, -0x6104($gp)
    ctx->pc = 0x2f5168u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942460), GPR_U32(ctx, 0));
    // 0x2f516c: 0xa3829f00  sb          $v0, -0x6100($gp)
    ctx->pc = 0x2f516cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294942464), (uint8_t)GPR_U32(ctx, 2));
label_2f5170:
    // 0x2f5170: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2f5170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f5174: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f5174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5178: 0x10440027  beq         $v0, $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2F5178u;
    {
        const bool branch_taken_0x2f5178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F517Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5178u;
            // 0x2f517c: 0x27a500c8  addiu       $a1, $sp, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5178) {
            ctx->pc = 0x2F5218u;
            goto label_2f5218;
        }
    }
    ctx->pc = 0x2F5180u;
    // 0x2f5180: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5180u;
    {
        const bool branch_taken_0x2f5180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5180u;
            // 0x2f5184: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5180) {
            ctx->pc = 0x2F5194u;
            goto label_2f5194;
        }
    }
    ctx->pc = 0x2F5188u;
    // 0x2f5188: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2F5188u;
    {
        const bool branch_taken_0x2f5188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F518Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5188u;
            // 0x2f518c: 0x8f859efc  lw          $a1, -0x6104($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5188) {
            ctx->pc = 0x2F52D0u;
            goto label_2f52d0;
        }
    }
    ctx->pc = 0x2F5190u;
    // 0x2f5190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f5190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5194:
    // 0x2f5194: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F5194u;
    SET_GPR_U32(ctx, 31, 0x2F519Cu);
    ctx->pc = 0x2F5198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5194u;
            // 0x2f5198: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F519Cu; }
        if (ctx->pc != 0x2F519Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F519Cu; }
        if (ctx->pc != 0x2F519Cu) { return; }
    }
    ctx->pc = 0x2F519Cu;
label_2f519c:
    // 0x2f519c: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2F519Cu;
    {
        const bool branch_taken_0x2f519c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F51A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F519Cu;
            // 0x2f51a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f519c) {
            ctx->pc = 0x2F536Cu;
            goto label_2f536c;
        }
    }
    ctx->pc = 0x2F51A4u;
    // 0x2f51a4: 0xc0bc610  jal         func_2F1840
    ctx->pc = 0x2F51A4u;
    SET_GPR_U32(ctx, 31, 0x2F51ACu);
    ctx->pc = 0x2F51A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F51A4u;
            // 0x2f51a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1840u;
    if (runtime->hasFunction(0x2F1840u)) {
        auto targetFn = runtime->lookupFunction(0x2F1840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F51ACu; }
        if (ctx->pc != 0x2F51ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSaveFileInfoTable__18CMemoryCardManagerFv_0x2f1840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F51ACu; }
        if (ctx->pc != 0x2F51ACu) { return; }
    }
    ctx->pc = 0x2F51ACu;
label_2f51ac:
    // 0x2f51ac: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x2f51acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x2f51b0: 0xae000914  sw          $zero, 0x914($s0)
    ctx->pc = 0x2f51b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2324), GPR_U32(ctx, 0));
    // 0x2f51b4: 0x24c6ce50  addiu       $a2, $a2, -0x31B0
    ctx->pc = 0x2f51b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954576));
    // 0x2f51b8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2f51b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f51bc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2f51bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f51c0:
    // 0x2f51c0: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2f51c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f51c4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2f51c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2f51c8: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x2f51c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2f51cc: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x2f51ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x2f51d0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2f51d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2f51d4: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x2f51d4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x2f51d8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F51D8u;
    {
        const bool branch_taken_0x2f51d8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2F51DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F51D8u;
            // 0x2f51dc: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f51d8) {
            ctx->pc = 0x2F51C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f51c0;
        }
    }
    ctx->pc = 0x2F51E0u;
    // 0x2f51e0: 0x8e0404c8  lw          $a0, 0x4C8($s0)
    ctx->pc = 0x2f51e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1224)));
    // 0x2f51e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f51e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f51e8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2f51e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f51ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f51ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f51f0: 0x24080011  addiu       $t0, $zero, 0x11
    ctx->pc = 0x2f51f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2f51f4: 0xc048c46  jal         func_123118
    ctx->pc = 0x2F51F4u;
    SET_GPR_U32(ctx, 31, 0x2F51FCu);
    ctx->pc = 0x2F51F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F51F4u;
            // 0x2f51f8: 0x26090080  addiu       $t1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123118u;
    if (runtime->hasFunction(0x123118u)) {
        auto targetFn = runtime->lookupFunction(0x123118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F51FCu; }
        if (ctx->pc != 0x2F51FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcGetDir_0x123118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F51FCu; }
        if (ctx->pc != 0x2F51FCu) { return; }
    }
    ctx->pc = 0x2F51FCu;
label_2f51fc:
    // 0x2f51fc: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x2F51FCu;
    {
        const bool branch_taken_0x2f51fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f51fc) {
            ctx->pc = 0x2F5368u;
            goto label_2f5368;
        }
    }
    ctx->pc = 0x2F5204u;
    // 0x2f5204: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2f5204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f5208: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f5208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f520c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2F520Cu;
    {
        const bool branch_taken_0x2f520c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F520Cu;
            // 0x2f5210: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f520c) {
            ctx->pc = 0x2F5368u;
            goto label_2f5368;
        }
    }
    ctx->pc = 0x2F5214u;
    // 0x2f5214: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x2f5214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_2f5218:
    // 0x2f5218: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F5218u;
    SET_GPR_U32(ctx, 31, 0x2F5220u);
    ctx->pc = 0x2F521Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5218u;
            // 0x2f521c: 0x27a600c4  addiu       $a2, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5220u; }
        if (ctx->pc != 0x2F5220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5220u; }
        if (ctx->pc != 0x2F5220u) { return; }
    }
    ctx->pc = 0x2F5220u;
label_2f5220:
    // 0x2f5220: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x2F5220u;
    {
        const bool branch_taken_0x2f5220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5220) {
            ctx->pc = 0x2F5368u;
            goto label_2f5368;
        }
    }
    ctx->pc = 0x2F5228u;
    // 0x2f5228: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x2f5228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2f522c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2f522cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f5230: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5230u;
    {
        const bool branch_taken_0x2f5230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f5230) {
            ctx->pc = 0x2F524Cu;
            goto label_2f524c;
        }
    }
    ctx->pc = 0x2F5238u;
    // 0x2f5238: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x2f5238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2f523c: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F523Cu;
    SET_GPR_U32(ctx, 31, 0x2F5244u);
    ctx->pc = 0x2F5240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F523Cu;
            // 0x2f5240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5244u; }
        if (ctx->pc != 0x2F5244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5244u; }
        if (ctx->pc != 0x2F5244u) { return; }
    }
    ctx->pc = 0x2F5244u;
label_2f5244:
    // 0x2f5244: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2F5244u;
    {
        const bool branch_taken_0x2f5244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5244u;
            // 0x2f5248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5244) {
            ctx->pc = 0x2F536Cu;
            goto label_2f536c;
        }
    }
    ctx->pc = 0x2F524Cu;
label_2f524c:
    // 0x2f524c: 0xaf809efc  sw          $zero, -0x6104($gp)
    ctx->pc = 0x2f524cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942460), GPR_U32(ctx, 0));
    // 0x2f5250: 0xae0004c0  sw          $zero, 0x4C0($s0)
    ctx->pc = 0x2f5250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1216), GPR_U32(ctx, 0));
    // 0x2f5254: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x2f5254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2f5258: 0x4600011  bltz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F5258u;
    {
        const bool branch_taken_0x2f5258 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2F525Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5258u;
            // 0x2f525c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5258) {
            ctx->pc = 0x2F52A0u;
            goto label_2f52a0;
        }
    }
    ctx->pc = 0x2F5260u;
    // 0x2f5260: 0xae0304c0  sw          $v1, 0x4C0($s0)
    ctx->pc = 0x2f5260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1216), GPR_U32(ctx, 3));
    // 0x2f5264: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f5264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5268: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f5268u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f526c:
    // 0x2f526c: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x2f526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2f5270: 0xc04a422  jal         func_129088
    ctx->pc = 0x2F5270u;
    SET_GPR_U32(ctx, 31, 0x2F5278u);
    ctx->pc = 0x2F5274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5270u;
            // 0x2f5274: 0x244400a0  addiu       $a0, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5278u; }
        if (ctx->pc != 0x2F5278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5278u; }
        if (ctx->pc != 0x2F5278u) { return; }
    }
    ctx->pc = 0x2F5278u;
label_2f5278:
    // 0x2f5278: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f5278u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f527c: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x2f527cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2f5280: 0x2a22000d  slti        $v0, $s1, 0xD
    ctx->pc = 0x2f5280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2f5284: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F5284u;
    {
        const bool branch_taken_0x2f5284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5284) {
            ctx->pc = 0x2F526Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f526c;
        }
    }
    ctx->pc = 0x2F528Cu;
    // 0x2f528c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2f528cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f5290: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f5290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f5294: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2F5294u;
    {
        const bool branch_taken_0x2f5294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5294u;
            // 0x2f5298: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5294) {
            ctx->pc = 0x2F5368u;
            goto label_2f5368;
        }
    }
    ctx->pc = 0x2F529Cu;
    // 0x2f529c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2f529cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2f52a0:
    // 0x2f52a0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F52A0u;
    {
        const bool branch_taken_0x2f52a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F52A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F52A0u;
            // 0x2f52a4: 0x261104d0  addiu       $s1, $s0, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f52a0) {
            ctx->pc = 0x2F52B0u;
            goto label_2f52b0;
        }
    }
    ctx->pc = 0x2F52A8u;
    // 0x2f52a8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2f52a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f52ac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2f52acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2f52b0:
    // 0x2f52b0: 0xc0bc748  jal         func_2F1D20
    ctx->pc = 0x2F52B0u;
    SET_GPR_U32(ctx, 31, 0x2F52B8u);
    ctx->pc = 0x2F52B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F52B0u;
            // 0x2f52b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D20u;
    if (runtime->hasFunction(0x2F1D20u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F52B8u; }
        if (ctx->pc != 0x2F52B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFuncNo__18CMemoryCardManagerFv_0x2f1d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F52B8u; }
        if (ctx->pc != 0x2F52B8u) { return; }
    }
    ctx->pc = 0x2F52B8u;
label_2f52b8:
    // 0x2f52b8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2f52b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2f52bc: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x2f52bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f52c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f52c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f52c4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2F52C4u;
    {
        const bool branch_taken_0x2f52c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F52C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F52C4u;
            // 0x2f52c8: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f52c4) {
            ctx->pc = 0x2F536Cu;
            goto label_2f536c;
        }
    }
    ctx->pc = 0x2F52CCu;
    // 0x2f52cc: 0x8f859efc  lw          $a1, -0x6104($gp)
    ctx->pc = 0x2f52ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942460)));
label_2f52d0:
    // 0x2f52d0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x2f52d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x2f52d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f52d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f52d8: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x2f52d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x2f52dc: 0xc0bd35c  jal         func_2F4D70
    ctx->pc = 0x2F52DCu;
    SET_GPR_U32(ctx, 31, 0x2F52E4u);
    ctx->pc = 0x2F52E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F52DCu;
            // 0x2f52e0: 0x27a600cc  addiu       $a2, $sp, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F4D70u;
    if (runtime->hasFunction(0x2F4D70u)) {
        auto targetFn = runtime->lookupFunction(0x2F4D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F52E4u; }
        if (ctx->pc != 0x2F52E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveFileInfoFromMc__18CMemoryCardManagerFiPi_0x2f4d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F52E4u; }
        if (ctx->pc != 0x2F52E4u) { return; }
    }
    ctx->pc = 0x2F52E4u;
label_2f52e4:
    // 0x2f52e4: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x2f52e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2f52e8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2f52e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x2f52ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F52ECu;
    {
        const bool branch_taken_0x2f52ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F52F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F52ECu;
            // 0x2f52f0: 0xae030058  sw          $v1, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f52ec) {
            ctx->pc = 0x2F5300u;
            goto label_2f5300;
        }
    }
    ctx->pc = 0x2F52F4u;
    // 0x2f52f4: 0x8f829efc  lw          $v0, -0x6104($gp)
    ctx->pc = 0x2f52f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942460)));
    // 0x2f52f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f52f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f52fc: 0xaf829efc  sw          $v0, -0x6104($gp)
    ctx->pc = 0x2f52fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942460), GPR_U32(ctx, 2));
label_2f5300:
    // 0x2f5300: 0x8f829efc  lw          $v0, -0x6104($gp)
    ctx->pc = 0x2f5300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942460)));
    // 0x2f5304: 0x2842000d  slti        $v0, $v0, 0xD
    ctx->pc = 0x2f5304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2f5308: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F5308u;
    {
        const bool branch_taken_0x2f5308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5308) {
            ctx->pc = 0x2F5368u;
            goto label_2f5368;
        }
    }
    ctx->pc = 0x2F5310u;
    // 0x2f5310: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f5310u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5314:
    // 0x2f5314: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2f5314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2f5318: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x2f5318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2f531c: 0x0  nop
    ctx->pc = 0x2f531cu;
    // NOP
    // 0x2f5320: 0x0  nop
    ctx->pc = 0x2f5320u;
    // NOP
    // 0x2f5324: 0x0  nop
    ctx->pc = 0x2f5324u;
    // NOP
    // 0x2f5328: 0x0  nop
    ctx->pc = 0x2f5328u;
    // NOP
    // 0x2f532c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F532Cu;
    {
        const bool branch_taken_0x2f532c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f532c) {
            ctx->pc = 0x2F5314u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5314;
        }
    }
    ctx->pc = 0x2F5334u;
    // 0x2f5334: 0x2861000d  slti        $at, $v1, 0xD
    ctx->pc = 0x2f5334u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2f5338: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F5338u;
    {
        const bool branch_taken_0x2f5338 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5338) {
            ctx->pc = 0x2F5360u;
            goto label_2f5360;
        }
    }
    ctx->pc = 0x2F5340u;
label_2f5340:
    // 0x2f5340: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f5340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f5344: 0x2862000d  slti        $v0, $v1, 0xD
    ctx->pc = 0x2f5344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2f5348: 0x0  nop
    ctx->pc = 0x2f5348u;
    // NOP
    // 0x2f534c: 0x0  nop
    ctx->pc = 0x2f534cu;
    // NOP
    // 0x2f5350: 0x0  nop
    ctx->pc = 0x2f5350u;
    // NOP
    // 0x2f5354: 0x0  nop
    ctx->pc = 0x2f5354u;
    // NOP
    // 0x2f5358: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F5358u;
    {
        const bool branch_taken_0x2f5358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f5358) {
            ctx->pc = 0x2F5340u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f5340;
        }
    }
    ctx->pc = 0x2F5360u;
label_2f5360:
    // 0x2f5360: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5360u;
    {
        const bool branch_taken_0x2f5360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5360u;
            // 0x2f5364: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5360) {
            ctx->pc = 0x2F536Cu;
            goto label_2f536c;
        }
    }
    ctx->pc = 0x2F5368u;
label_2f5368:
    // 0x2f5368: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f5368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f536c:
    // 0x2f536c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f536cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f5370: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f5370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5374: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f5374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5378: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f5378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f537c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F537Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F537Cu;
            // 0x2f5380: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5384u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ClearBaseFromLevel__16CEffectScriptManFiPii
// Address: 0x2e0150 - 0x2e02b0
void ClearBaseFromLevel__16CEffectScriptManFiPii_0x2e0150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearBaseFromLevel__16CEffectScriptManFiPii_0x2e0150");
#endif

    switch (ctx->pc) {
        case 0x2e0180u: goto label_2e0180;
        case 0x2e0190u: goto label_2e0190;
        case 0x2e0280u: goto label_2e0280;
        default: break;
    }

    ctx->pc = 0x2e0150u;

    // 0x2e0150: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e0150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e0154: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e0154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e0158: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e0158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e015c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e015cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e0160: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e0160u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0164: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e0164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e0168: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e0168u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e016c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e016cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0170: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e0170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0174: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2e0174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0178: 0xc0b84d0  jal         func_2E1340
    ctx->pc = 0x2E0178u;
    SET_GPR_U32(ctx, 31, 0x2E0180u);
    ctx->pc = 0x2E017Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0178u;
            // 0x2e017c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1340u;
    if (runtime->hasFunction(0x2E1340u)) {
        auto targetFn = runtime->lookupFunction(0x2E1340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0180u; }
        if (ctx->pc != 0x2E0180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ClearEffectFromLevel__16CEffectScriptManFi_0x2e1340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0180u; }
        if (ctx->pc != 0x2E0180u) { return; }
    }
    ctx->pc = 0x2E0180u;
label_2e0180:
    // 0x2e0180: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e0180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0184: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0188: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e0188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e018c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e018cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e0190:
    // 0x2e0190: 0x2861821  addu        $v1, $s4, $a2
    ctx->pc = 0x2e0190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x2e0194: 0x8c640080  lw          $a0, 0x80($v1)
    ctx->pc = 0x2e0194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2e0198: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E0198u;
    {
        const bool branch_taken_0x2e0198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E019Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0198u;
            // 0x2e019c: 0x24680080  addiu       $t0, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0198) {
            ctx->pc = 0x2E0204u;
            goto label_2e0204;
        }
    }
    ctx->pc = 0x2E01A0u;
    // 0x2e01a0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2e01a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2e01a4: 0x14730017  bne         $v1, $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E01A4u;
    {
        const bool branch_taken_0x2e01a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x2e01a4) {
            ctx->pc = 0x2E0204u;
            goto label_2e0204;
        }
    }
    ctx->pc = 0x2E01ACu;
    // 0x2e01ac: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2E01ACu;
    {
        const bool branch_taken_0x2e01ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e01ac) {
            ctx->pc = 0x2E01DCu;
            goto label_2e01dc;
        }
    }
    ctx->pc = 0x2E01B4u;
    // 0x2e01b4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2e01b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e01b8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E01B8u;
    {
        const bool branch_taken_0x2e01b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E01BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E01B8u;
            // 0x2e01bc: 0x211082a  slt         $at, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e01b8) {
            ctx->pc = 0x2E01DCu;
            goto label_2e01dc;
        }
    }
    ctx->pc = 0x2E01C0u;
    // 0x2e01c0: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E01C0u;
    {
        const bool branch_taken_0x2e01c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e01c0) {
            ctx->pc = 0x2E01DCu;
            goto label_2e01dc;
        }
    }
    ctx->pc = 0x2E01C8u;
    // 0x2e01c8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2e01c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e01cc: 0x2471821  addu        $v1, $s2, $a3
    ctx->pc = 0x2e01ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x2e01d0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2e01d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2e01d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e01d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e01d8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2e01d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2e01dc:
    // 0x2e01dc: 0x0  nop
    ctx->pc = 0x2e01dcu;
    // NOP
    // 0x2e01e0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2e01e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e01e4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x2e01e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e01e8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E01E8u;
    {
        const bool branch_taken_0x2e01e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e01e8) {
            ctx->pc = 0x2E01FCu;
            goto label_2e01fc;
        }
    }
    ctx->pc = 0x2E01F0u;
    // 0x2e01f0: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x2e01f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2e01f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e01f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e01f8: 0xae830018  sw          $v1, 0x18($s4)
    ctx->pc = 0x2e01f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
label_2e01fc:
    // 0x2e01fc: 0x0  nop
    ctx->pc = 0x2e01fcu;
    // NOP
    // 0x2e0200: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x2e0200u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_2e0204:
    // 0x2e0204: 0x0  nop
    ctx->pc = 0x2e0204u;
    // NOP
    // 0x2e0208: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e0208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e020c: 0x28a30040  slti        $v1, $a1, 0x40
    ctx->pc = 0x2e020cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2e0210: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x2E0210u;
    {
        const bool branch_taken_0x2e0210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0210u;
            // 0x2e0214: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0210) {
            ctx->pc = 0x2E0190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e0190;
        }
    }
    ctx->pc = 0x2E0218u;
    // 0x2e0218: 0x1a600009  blez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E0218u;
    {
        const bool branch_taken_0x2e0218 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2E021Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0218u;
            // 0x2e021c: 0x2a610004  slti        $at, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0218) {
            ctx->pc = 0x2E0240u;
            goto label_2e0240;
        }
    }
    ctx->pc = 0x2E0220u;
    // 0x2e0220: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0220u;
    {
        const bool branch_taken_0x2e0220 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0220u;
            // 0x2e0224: 0x132080  sll         $a0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0220) {
            ctx->pc = 0x2E0240u;
            goto label_2e0240;
        }
    }
    ctx->pc = 0x2E0228u;
    // 0x2e0228: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x2e0228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2e022c: 0x942821  addu        $a1, $a0, $s4
    ctx->pc = 0x2e022cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2e0230: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x2e0230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2e0234: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2e0234u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e0238: 0xae830018  sw          $v1, 0x18($s4)
    ctx->pc = 0x2e0238u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 3));
    // 0x2e023c: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x2e023cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
label_2e0240:
    // 0x2e0240: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x2e0240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x2e0244: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E0244u;
    {
        const bool branch_taken_0x2e0244 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2e0244) {
            ctx->pc = 0x2E0250u;
            goto label_2e0250;
        }
    }
    ctx->pc = 0x2E024Cu;
    // 0x2e024c: 0xae800018  sw          $zero, 0x18($s4)
    ctx->pc = 0x2e024cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 0));
label_2e0250:
    // 0x2e0250: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0250u;
    {
        const bool branch_taken_0x2e0250 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0250u;
            // 0x2e0254: 0x211082a  slt         $at, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0250) {
            ctx->pc = 0x2E0270u;
            goto label_2e0270;
        }
    }
    ctx->pc = 0x2E0258u;
    // 0x2e0258: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0258u;
    {
        const bool branch_taken_0x2e0258 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E025Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0258u;
            // 0x2e025c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0258) {
            ctx->pc = 0x2E0270u;
            goto label_2e0270;
        }
    }
    ctx->pc = 0x2E0260u;
    // 0x2e0260: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e0260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e0264: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2e0264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2e0268: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E0268u;
    {
        const bool branch_taken_0x2e0268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E026Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0268u;
            // 0x2e026c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0268) {
            ctx->pc = 0x2E0290u;
            goto label_2e0290;
        }
    }
    ctx->pc = 0x2E0270u;
label_2e0270:
    // 0x2e0270: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E0270u;
    {
        const bool branch_taken_0x2e0270 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0270u;
            // 0x2e0274: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0270) {
            ctx->pc = 0x2E0290u;
            goto label_2e0290;
        }
    }
    ctx->pc = 0x2E0278u;
    // 0x2e0278: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x2E0278u;
    SET_GPR_U32(ctx, 31, 0x2E0280u);
    ctx->pc = 0x2E027Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0278u;
            // 0x2e027c: 0x24840f90  addiu       $a0, $a0, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0280u; }
        if (ctx->pc != 0x2E0280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0280u; }
        if (ctx->pc != 0x2E0280u) { return; }
    }
    ctx->pc = 0x2E0280u;
label_2e0280:
    // 0x2e0280: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2e0280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2e0284: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e0284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e0288: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2e0288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2e028c: 0xac64fffc  sw          $a0, -0x4($v1)
    ctx->pc = 0x2e028cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 4));
label_2e0290:
    // 0x2e0290: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e0290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e0294: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e0294u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0298: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e0298u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e029c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e029cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e02a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e02a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e02a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e02a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e02a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E02A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E02ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E02A8u;
            // 0x2e02ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E02B0u;
}

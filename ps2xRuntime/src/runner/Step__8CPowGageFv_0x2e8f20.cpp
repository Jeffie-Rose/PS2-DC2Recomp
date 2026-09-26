#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__8CPowGageFv
// Address: 0x2e8f20 - 0x2e917c
void Step__8CPowGageFv_0x2e8f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__8CPowGageFv_0x2e8f20");
#endif

    ctx->pc = 0x2e8f20u;

    // 0x2e8f20: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2e8f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2e8f24: 0x20630001  addi        $v1, $v1, 0x1
    ctx->pc = 0x2e8f24u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x2e8f28: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x2e8f28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e8f2c: 0x10200091  beqz        $at, . + 4 + (0x91 << 2)
    ctx->pc = 0x2E8F2Cu;
    {
        const bool branch_taken_0x2e8f2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8F2Cu;
            // 0x2e8f30: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f2c) {
            ctx->pc = 0x2E9174u;
            goto label_2e9174;
        }
    }
    ctx->pc = 0x2E8F34u;
    // 0x2e8f34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e8f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2e8f38: 0x24a51450  addiu       $a1, $a1, 0x1450
    ctx->pc = 0x2e8f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5200));
    // 0x2e8f3c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2e8f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e8f40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2e8f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e8f44: 0x600008  jr          $v1
    ctx->pc = 0x2E8F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E8F4Cu: goto label_2e8f4c;
            case 0x2E8F70u: goto label_2e8f70;
            case 0x2E8FF4u: goto label_2e8ff4;
            case 0x2E9030u: goto label_2e9030;
            case 0x2E905Cu: goto label_2e905c;
            case 0x2E9174u: goto label_2e9174;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2E8F4Cu;
label_2e8f4c:
    // 0x2e8f4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e8f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e8f50: 0x2405fff6  addiu       $a1, $zero, -0xA
    ctx->pc = 0x2e8f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x2e8f54: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x2e8f54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x2e8f58: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x2e8f58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x2e8f5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e8f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8f60: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2e8f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2e8f64: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2e8f64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2e8f68: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x2e8f68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x2e8f6c: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x2e8f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_2e8f70:
    // 0x2e8f70: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2e8f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2e8f74: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E8F74u;
    {
        const bool branch_taken_0x2e8f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8f74) {
            ctx->pc = 0x2E8F8Cu;
            goto label_2e8f8c;
        }
    }
    ctx->pc = 0x2E8F7Cu;
    // 0x2e8f7c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2e8f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e8f80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e8f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e8f84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E8F84u;
    {
        const bool branch_taken_0x2e8f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8F84u;
            // 0x2e8f88: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8f84) {
            ctx->pc = 0x2E8F98u;
            goto label_2e8f98;
        }
    }
    ctx->pc = 0x2E8F8Cu;
label_2e8f8c:
    // 0x2e8f8c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2e8f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e8f90: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e8f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e8f94: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x2e8f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_2e8f98:
    // 0x2e8f98: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2e8f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e8f9c: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2e8f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x2e8fa0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e8fa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8fa4: 0x0  nop
    ctx->pc = 0x2e8fa4u;
    // NOP
    // 0x2e8fa8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e8fa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e8fac: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2e8facu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2e8fb0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2e8fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2e8fb4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2e8fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e8fb8: 0x28630028  slti        $v1, $v1, 0x28
    ctx->pc = 0x2e8fb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x2e8fbc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E8FBCu;
    {
        const bool branch_taken_0x2e8fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E8FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8FBCu;
            // 0x2e8fc0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8fbc) {
            ctx->pc = 0x2E8FC8u;
            goto label_2e8fc8;
        }
    }
    ctx->pc = 0x2E8FC4u;
    // 0x2e8fc4: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x2e8fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_2e8fc8:
    // 0x2e8fc8: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x2e8fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2e8fcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e8fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8fd0: 0x14a30068  bne         $a1, $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x2E8FD0u;
    {
        const bool branch_taken_0x2e8fd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e8fd0) {
            ctx->pc = 0x2E9174u;
            goto label_2e9174;
        }
    }
    ctx->pc = 0x2E8FD8u;
    // 0x2e8fd8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2e8fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e8fdc: 0x1c600065  bgtz        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x2E8FDCu;
    {
        const bool branch_taken_0x2e8fdc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2E8FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8FDCu;
            // 0x2e8fe0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8fdc) {
            ctx->pc = 0x2E9174u;
            goto label_2e9174;
        }
    }
    ctx->pc = 0x2E8FE4u;
    // 0x2e8fe4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e8fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e8fe8: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x2e8fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x2e8fec: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2E8FECu;
    {
        const bool branch_taken_0x2e8fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8FECu;
            // 0x2e8ff0: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8fec) {
            ctx->pc = 0x2E9174u;
            goto label_2e9174;
        }
    }
    ctx->pc = 0x2E8FF4u;
label_2e8ff4:
    // 0x2e8ff4: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2e8ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2e8ff8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e8ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e8ffc: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E8FFCu;
    {
        const bool branch_taken_0x2e8ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2E9000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8FFCu;
            // 0x2e9000: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8ffc) {
            ctx->pc = 0x2E900Cu;
            goto label_2e900c;
        }
    }
    ctx->pc = 0x2E9004u;
    // 0x2e9004: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E9004u;
    {
        const bool branch_taken_0x2e9004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9004u;
            // 0x2e9008: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9004) {
            ctx->pc = 0x2E9030u;
            goto label_2e9030;
        }
    }
    ctx->pc = 0x2E900Cu;
label_2e900c:
    // 0x2e900c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2e900cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e9010: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e9010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e9014: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x2e9014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x2e9018: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2e9018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e901c: 0x28630028  slti        $v1, $v1, 0x28
    ctx->pc = 0x2e901cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x2e9020: 0x14600054  bnez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x2E9020u;
    {
        const bool branch_taken_0x2e9020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e9020) {
            ctx->pc = 0x2E9174u;
            goto label_2e9174;
        }
    }
    ctx->pc = 0x2E9028u;
    // 0x2e9028: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2E9028u;
    {
        const bool branch_taken_0x2e9028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E902Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9028u;
            // 0x2e902c: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9028) {
            ctx->pc = 0x2E9174u;
            goto label_2e9174;
        }
    }
    ctx->pc = 0x2E9030u;
label_2e9030:
    // 0x2e9030: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2e9030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e9034: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e9034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e9038: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x2e9038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x2e903c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2e903cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e9040: 0x2861fff9  slti        $at, $v1, -0x7
    ctx->pc = 0x2e9040u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967289) ? 1 : 0);
    // 0x2e9044: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
    ctx->pc = 0x2E9044u;
    {
        const bool branch_taken_0x2e9044 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9044u;
            // 0x2e9048: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9044) {
            ctx->pc = 0x2E9174u;
            goto label_2e9174;
        }
    }
    ctx->pc = 0x2E904Cu;
    // 0x2e904c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e904cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e9050: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x2e9050u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x2e9054: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2E9054u;
    {
        const bool branch_taken_0x2e9054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9054u;
            // 0x2e9058: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9054) {
            ctx->pc = 0x2E9174u;
            goto label_2e9174;
        }
    }
    ctx->pc = 0x2E905Cu;
label_2e905c:
    // 0x2e905c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x2e905cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9060: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x2e9060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x2e9064: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x2e9064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e9068: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e9068u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e906c: 0x0  nop
    ctx->pc = 0x2e906cu;
    // NOP
    // 0x2e9070: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e9070u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e9074: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x2e9074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2e9078: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2e9078u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e907c: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x2e907cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9080: 0x0  nop
    ctx->pc = 0x2e9080u;
    // NOP
    // 0x2e9084: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9084u;
    {
        const bool branch_taken_0x2e9084 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E9088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9084u;
            // 0x2e9088: 0x2403fffd  addiu       $v1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9084) {
            ctx->pc = 0x2E9090u;
            goto label_2e9090;
        }
    }
    ctx->pc = 0x2E908Cu;
    // 0x2e908c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2e908cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_2e9090:
    // 0x2e9090: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2e9090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9094: 0x0  nop
    ctx->pc = 0x2e9094u;
    // NOP
    // 0x2e9098: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9098u;
    {
        const bool branch_taken_0x2e9098 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E909Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9098u;
            // 0x2e909c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9098) {
            ctx->pc = 0x2E90A4u;
            goto label_2e90a4;
        }
    }
    ctx->pc = 0x2E90A0u;
    // 0x2e90a0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2e90a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_2e90a4:
    // 0x2e90a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e90a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e90a8: 0x0  nop
    ctx->pc = 0x2e90a8u;
    // NOP
    // 0x2e90ac: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2e90acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e90b0: 0x0  nop
    ctx->pc = 0x2e90b0u;
    // NOP
    // 0x2e90b4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E90B4u;
    {
        const bool branch_taken_0x2e90b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e90b4) {
            ctx->pc = 0x2E90D0u;
            goto label_2e90d0;
        }
    }
    ctx->pc = 0x2E90BCu;
    // 0x2e90bc: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x2e90bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e90c0: 0x0  nop
    ctx->pc = 0x2e90c0u;
    // NOP
    // 0x2e90c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E90C4u;
    {
        const bool branch_taken_0x2e90c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E90C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E90C4u;
            // 0x2e90c8: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e90c4) {
            ctx->pc = 0x2E90D0u;
            goto label_2e90d0;
        }
    }
    ctx->pc = 0x2E90CCu;
    // 0x2e90cc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2e90ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_2e90d0:
    // 0x2e90d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e90d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e90d4: 0x0  nop
    ctx->pc = 0x2e90d4u;
    // NOP
    // 0x2e90d8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2e90d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e90dc: 0x0  nop
    ctx->pc = 0x2e90dcu;
    // NOP
    // 0x2e90e0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E90E0u;
    {
        const bool branch_taken_0x2e90e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E90E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E90E0u;
            // 0x2e90e4: 0x46000807  neg.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e90e0) {
            ctx->pc = 0x2E90FCu;
            goto label_2e90fc;
        }
    }
    ctx->pc = 0x2E90E8u;
    // 0x2e90e8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2e90e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e90ec: 0x0  nop
    ctx->pc = 0x2e90ecu;
    // NOP
    // 0x2e90f0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E90F0u;
    {
        const bool branch_taken_0x2e90f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E90F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E90F0u;
            // 0x2e90f4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e90f0) {
            ctx->pc = 0x2E90FCu;
            goto label_2e90fc;
        }
    }
    ctx->pc = 0x2E90F8u;
    // 0x2e90f8: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2e90f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_2e90fc:
    // 0x2e90fc: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x2e90fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e9100: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2e9100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2e9104: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e9104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9108: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e9108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e910c: 0x0  nop
    ctx->pc = 0x2e910cu;
    // NOP
    // 0x2e9110: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x2e9110u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9114: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x2e9114u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e9118: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9118u;
    {
        const bool branch_taken_0x2e9118 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E911Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9118u;
            // 0x2e911c: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9118) {
            ctx->pc = 0x2E9134u;
            goto label_2e9134;
        }
    }
    ctx->pc = 0x2E9120u;
    // 0x2e9120: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x2e9120u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9124: 0x0  nop
    ctx->pc = 0x2e9124u;
    // NOP
    // 0x2e9128: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9128u;
    {
        const bool branch_taken_0x2e9128 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E912Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9128u;
            // 0x2e912c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9128) {
            ctx->pc = 0x2E9134u;
            goto label_2e9134;
        }
    }
    ctx->pc = 0x2E9130u;
    // 0x2e9130: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2e9130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_2e9134:
    // 0x2e9134: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e9134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e9138: 0x0  nop
    ctx->pc = 0x2e9138u;
    // NOP
    // 0x2e913c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2e913cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9140: 0x0  nop
    ctx->pc = 0x2e9140u;
    // NOP
    // 0x2e9144: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9144u;
    {
        const bool branch_taken_0x2e9144 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E9148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9144u;
            // 0x2e9148: 0x46000807  neg.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9144) {
            ctx->pc = 0x2E9160u;
            goto label_2e9160;
        }
    }
    ctx->pc = 0x2E914Cu;
    // 0x2e914c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2e914cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9150: 0x0  nop
    ctx->pc = 0x2e9150u;
    // NOP
    // 0x2e9154: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9154u;
    {
        const bool branch_taken_0x2e9154 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E9158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9154u;
            // 0x2e9158: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9154) {
            ctx->pc = 0x2E9160u;
            goto label_2e9160;
        }
    }
    ctx->pc = 0x2E915Cu;
    // 0x2e915c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2e915cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_2e9160:
    // 0x2e9160: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2e9160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2e9164: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9164u;
    {
        const bool branch_taken_0x2e9164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9164u;
            // 0x2e9168: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9164) {
            ctx->pc = 0x2E9170u;
            goto label_2e9170;
        }
    }
    ctx->pc = 0x2E916Cu;
    // 0x2e916c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2e916cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_2e9170:
    // 0x2e9170: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x2e9170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_2e9174:
    // 0x2e9174: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E917Cu;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ParamStep__9CAquaFishFv
// Address: 0x20eab0 - 0x20eea0
void ParamStep__9CAquaFishFv_0x20eab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ParamStep__9CAquaFishFv_0x20eab0");
#endif

    switch (ctx->pc) {
        case 0x20eab0u: goto label_20eab0;
        case 0x20eab4u: goto label_20eab4;
        case 0x20eab8u: goto label_20eab8;
        case 0x20eabcu: goto label_20eabc;
        case 0x20eac0u: goto label_20eac0;
        case 0x20eac4u: goto label_20eac4;
        case 0x20eac8u: goto label_20eac8;
        case 0x20eaccu: goto label_20eacc;
        case 0x20ead0u: goto label_20ead0;
        case 0x20ead4u: goto label_20ead4;
        case 0x20ead8u: goto label_20ead8;
        case 0x20eadcu: goto label_20eadc;
        case 0x20eae0u: goto label_20eae0;
        case 0x20eae4u: goto label_20eae4;
        case 0x20eae8u: goto label_20eae8;
        case 0x20eaecu: goto label_20eaec;
        case 0x20eaf0u: goto label_20eaf0;
        case 0x20eaf4u: goto label_20eaf4;
        case 0x20eaf8u: goto label_20eaf8;
        case 0x20eafcu: goto label_20eafc;
        case 0x20eb00u: goto label_20eb00;
        case 0x20eb04u: goto label_20eb04;
        case 0x20eb08u: goto label_20eb08;
        case 0x20eb0cu: goto label_20eb0c;
        case 0x20eb10u: goto label_20eb10;
        case 0x20eb14u: goto label_20eb14;
        case 0x20eb18u: goto label_20eb18;
        case 0x20eb1cu: goto label_20eb1c;
        case 0x20eb20u: goto label_20eb20;
        case 0x20eb24u: goto label_20eb24;
        case 0x20eb28u: goto label_20eb28;
        case 0x20eb2cu: goto label_20eb2c;
        case 0x20eb30u: goto label_20eb30;
        case 0x20eb34u: goto label_20eb34;
        case 0x20eb38u: goto label_20eb38;
        case 0x20eb3cu: goto label_20eb3c;
        case 0x20eb40u: goto label_20eb40;
        case 0x20eb44u: goto label_20eb44;
        case 0x20eb48u: goto label_20eb48;
        case 0x20eb4cu: goto label_20eb4c;
        case 0x20eb50u: goto label_20eb50;
        case 0x20eb54u: goto label_20eb54;
        case 0x20eb58u: goto label_20eb58;
        case 0x20eb5cu: goto label_20eb5c;
        case 0x20eb60u: goto label_20eb60;
        case 0x20eb64u: goto label_20eb64;
        case 0x20eb68u: goto label_20eb68;
        case 0x20eb6cu: goto label_20eb6c;
        case 0x20eb70u: goto label_20eb70;
        case 0x20eb74u: goto label_20eb74;
        case 0x20eb78u: goto label_20eb78;
        case 0x20eb7cu: goto label_20eb7c;
        case 0x20eb80u: goto label_20eb80;
        case 0x20eb84u: goto label_20eb84;
        case 0x20eb88u: goto label_20eb88;
        case 0x20eb8cu: goto label_20eb8c;
        case 0x20eb90u: goto label_20eb90;
        case 0x20eb94u: goto label_20eb94;
        case 0x20eb98u: goto label_20eb98;
        case 0x20eb9cu: goto label_20eb9c;
        case 0x20eba0u: goto label_20eba0;
        case 0x20eba4u: goto label_20eba4;
        case 0x20eba8u: goto label_20eba8;
        case 0x20ebacu: goto label_20ebac;
        case 0x20ebb0u: goto label_20ebb0;
        case 0x20ebb4u: goto label_20ebb4;
        case 0x20ebb8u: goto label_20ebb8;
        case 0x20ebbcu: goto label_20ebbc;
        case 0x20ebc0u: goto label_20ebc0;
        case 0x20ebc4u: goto label_20ebc4;
        case 0x20ebc8u: goto label_20ebc8;
        case 0x20ebccu: goto label_20ebcc;
        case 0x20ebd0u: goto label_20ebd0;
        case 0x20ebd4u: goto label_20ebd4;
        case 0x20ebd8u: goto label_20ebd8;
        case 0x20ebdcu: goto label_20ebdc;
        case 0x20ebe0u: goto label_20ebe0;
        case 0x20ebe4u: goto label_20ebe4;
        case 0x20ebe8u: goto label_20ebe8;
        case 0x20ebecu: goto label_20ebec;
        case 0x20ebf0u: goto label_20ebf0;
        case 0x20ebf4u: goto label_20ebf4;
        case 0x20ebf8u: goto label_20ebf8;
        case 0x20ebfcu: goto label_20ebfc;
        case 0x20ec00u: goto label_20ec00;
        case 0x20ec04u: goto label_20ec04;
        case 0x20ec08u: goto label_20ec08;
        case 0x20ec0cu: goto label_20ec0c;
        case 0x20ec10u: goto label_20ec10;
        case 0x20ec14u: goto label_20ec14;
        case 0x20ec18u: goto label_20ec18;
        case 0x20ec1cu: goto label_20ec1c;
        case 0x20ec20u: goto label_20ec20;
        case 0x20ec24u: goto label_20ec24;
        case 0x20ec28u: goto label_20ec28;
        case 0x20ec2cu: goto label_20ec2c;
        case 0x20ec30u: goto label_20ec30;
        case 0x20ec34u: goto label_20ec34;
        case 0x20ec38u: goto label_20ec38;
        case 0x20ec3cu: goto label_20ec3c;
        case 0x20ec40u: goto label_20ec40;
        case 0x20ec44u: goto label_20ec44;
        case 0x20ec48u: goto label_20ec48;
        case 0x20ec4cu: goto label_20ec4c;
        case 0x20ec50u: goto label_20ec50;
        case 0x20ec54u: goto label_20ec54;
        case 0x20ec58u: goto label_20ec58;
        case 0x20ec5cu: goto label_20ec5c;
        case 0x20ec60u: goto label_20ec60;
        case 0x20ec64u: goto label_20ec64;
        case 0x20ec68u: goto label_20ec68;
        case 0x20ec6cu: goto label_20ec6c;
        case 0x20ec70u: goto label_20ec70;
        case 0x20ec74u: goto label_20ec74;
        case 0x20ec78u: goto label_20ec78;
        case 0x20ec7cu: goto label_20ec7c;
        case 0x20ec80u: goto label_20ec80;
        case 0x20ec84u: goto label_20ec84;
        case 0x20ec88u: goto label_20ec88;
        case 0x20ec8cu: goto label_20ec8c;
        case 0x20ec90u: goto label_20ec90;
        case 0x20ec94u: goto label_20ec94;
        case 0x20ec98u: goto label_20ec98;
        case 0x20ec9cu: goto label_20ec9c;
        case 0x20eca0u: goto label_20eca0;
        case 0x20eca4u: goto label_20eca4;
        case 0x20eca8u: goto label_20eca8;
        case 0x20ecacu: goto label_20ecac;
        case 0x20ecb0u: goto label_20ecb0;
        case 0x20ecb4u: goto label_20ecb4;
        case 0x20ecb8u: goto label_20ecb8;
        case 0x20ecbcu: goto label_20ecbc;
        case 0x20ecc0u: goto label_20ecc0;
        case 0x20ecc4u: goto label_20ecc4;
        case 0x20ecc8u: goto label_20ecc8;
        case 0x20ecccu: goto label_20eccc;
        case 0x20ecd0u: goto label_20ecd0;
        case 0x20ecd4u: goto label_20ecd4;
        case 0x20ecd8u: goto label_20ecd8;
        case 0x20ecdcu: goto label_20ecdc;
        case 0x20ece0u: goto label_20ece0;
        case 0x20ece4u: goto label_20ece4;
        case 0x20ece8u: goto label_20ece8;
        case 0x20ececu: goto label_20ecec;
        case 0x20ecf0u: goto label_20ecf0;
        case 0x20ecf4u: goto label_20ecf4;
        case 0x20ecf8u: goto label_20ecf8;
        case 0x20ecfcu: goto label_20ecfc;
        case 0x20ed00u: goto label_20ed00;
        case 0x20ed04u: goto label_20ed04;
        case 0x20ed08u: goto label_20ed08;
        case 0x20ed0cu: goto label_20ed0c;
        case 0x20ed10u: goto label_20ed10;
        case 0x20ed14u: goto label_20ed14;
        case 0x20ed18u: goto label_20ed18;
        case 0x20ed1cu: goto label_20ed1c;
        case 0x20ed20u: goto label_20ed20;
        case 0x20ed24u: goto label_20ed24;
        case 0x20ed28u: goto label_20ed28;
        case 0x20ed2cu: goto label_20ed2c;
        case 0x20ed30u: goto label_20ed30;
        case 0x20ed34u: goto label_20ed34;
        case 0x20ed38u: goto label_20ed38;
        case 0x20ed3cu: goto label_20ed3c;
        case 0x20ed40u: goto label_20ed40;
        case 0x20ed44u: goto label_20ed44;
        case 0x20ed48u: goto label_20ed48;
        case 0x20ed4cu: goto label_20ed4c;
        case 0x20ed50u: goto label_20ed50;
        case 0x20ed54u: goto label_20ed54;
        case 0x20ed58u: goto label_20ed58;
        case 0x20ed5cu: goto label_20ed5c;
        case 0x20ed60u: goto label_20ed60;
        case 0x20ed64u: goto label_20ed64;
        case 0x20ed68u: goto label_20ed68;
        case 0x20ed6cu: goto label_20ed6c;
        case 0x20ed70u: goto label_20ed70;
        case 0x20ed74u: goto label_20ed74;
        case 0x20ed78u: goto label_20ed78;
        case 0x20ed7cu: goto label_20ed7c;
        case 0x20ed80u: goto label_20ed80;
        case 0x20ed84u: goto label_20ed84;
        case 0x20ed88u: goto label_20ed88;
        case 0x20ed8cu: goto label_20ed8c;
        case 0x20ed90u: goto label_20ed90;
        case 0x20ed94u: goto label_20ed94;
        case 0x20ed98u: goto label_20ed98;
        case 0x20ed9cu: goto label_20ed9c;
        case 0x20eda0u: goto label_20eda0;
        case 0x20eda4u: goto label_20eda4;
        case 0x20eda8u: goto label_20eda8;
        case 0x20edacu: goto label_20edac;
        case 0x20edb0u: goto label_20edb0;
        case 0x20edb4u: goto label_20edb4;
        case 0x20edb8u: goto label_20edb8;
        case 0x20edbcu: goto label_20edbc;
        case 0x20edc0u: goto label_20edc0;
        case 0x20edc4u: goto label_20edc4;
        case 0x20edc8u: goto label_20edc8;
        case 0x20edccu: goto label_20edcc;
        case 0x20edd0u: goto label_20edd0;
        case 0x20edd4u: goto label_20edd4;
        case 0x20edd8u: goto label_20edd8;
        case 0x20eddcu: goto label_20eddc;
        case 0x20ede0u: goto label_20ede0;
        case 0x20ede4u: goto label_20ede4;
        case 0x20ede8u: goto label_20ede8;
        case 0x20edecu: goto label_20edec;
        case 0x20edf0u: goto label_20edf0;
        case 0x20edf4u: goto label_20edf4;
        case 0x20edf8u: goto label_20edf8;
        case 0x20edfcu: goto label_20edfc;
        case 0x20ee00u: goto label_20ee00;
        case 0x20ee04u: goto label_20ee04;
        case 0x20ee08u: goto label_20ee08;
        case 0x20ee0cu: goto label_20ee0c;
        case 0x20ee10u: goto label_20ee10;
        case 0x20ee14u: goto label_20ee14;
        case 0x20ee18u: goto label_20ee18;
        case 0x20ee1cu: goto label_20ee1c;
        case 0x20ee20u: goto label_20ee20;
        case 0x20ee24u: goto label_20ee24;
        case 0x20ee28u: goto label_20ee28;
        case 0x20ee2cu: goto label_20ee2c;
        case 0x20ee30u: goto label_20ee30;
        case 0x20ee34u: goto label_20ee34;
        case 0x20ee38u: goto label_20ee38;
        case 0x20ee3cu: goto label_20ee3c;
        case 0x20ee40u: goto label_20ee40;
        case 0x20ee44u: goto label_20ee44;
        case 0x20ee48u: goto label_20ee48;
        case 0x20ee4cu: goto label_20ee4c;
        case 0x20ee50u: goto label_20ee50;
        case 0x20ee54u: goto label_20ee54;
        case 0x20ee58u: goto label_20ee58;
        case 0x20ee5cu: goto label_20ee5c;
        case 0x20ee60u: goto label_20ee60;
        case 0x20ee64u: goto label_20ee64;
        case 0x20ee68u: goto label_20ee68;
        case 0x20ee6cu: goto label_20ee6c;
        case 0x20ee70u: goto label_20ee70;
        case 0x20ee74u: goto label_20ee74;
        case 0x20ee78u: goto label_20ee78;
        case 0x20ee7cu: goto label_20ee7c;
        case 0x20ee80u: goto label_20ee80;
        case 0x20ee84u: goto label_20ee84;
        case 0x20ee88u: goto label_20ee88;
        case 0x20ee8cu: goto label_20ee8c;
        case 0x20ee90u: goto label_20ee90;
        case 0x20ee94u: goto label_20ee94;
        case 0x20ee98u: goto label_20ee98;
        case 0x20ee9cu: goto label_20ee9c;
        default: break;
    }

    ctx->pc = 0x20eab0u;

label_20eab0:
    // 0x20eab0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20eab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_20eab4:
    // 0x20eab4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20eab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_20eab8:
    // 0x20eab8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20eab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20eabc:
    // 0x20eabc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20eabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20eac0:
    // 0x20eac0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x20eac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20eac4:
    // 0x20eac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20eac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20eac8:
    // 0x20eac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20eac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20eacc:
    // 0x20eacc: 0x8c820938  lw          $v0, 0x938($a0)
    ctx->pc = 0x20eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2360)));
label_20ead0:
    // 0x20ead0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20ead4:
    if (ctx->pc == 0x20EAD4u) {
        ctx->pc = 0x20EAD4u;
            // 0x20ead4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20EAD8u;
        goto label_20ead8;
    }
    ctx->pc = 0x20EAD0u;
    {
        const bool branch_taken_0x20ead0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EAD0u;
            // 0x20ead4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ead0) {
            ctx->pc = 0x20EAE0u;
            goto label_20eae0;
        }
    }
    ctx->pc = 0x20EAD8u;
label_20ead8:
    // 0x20ead8: 0x10000002  b           . + 4 + (0x2 << 2)
label_20eadc:
    if (ctx->pc == 0x20EADCu) {
        ctx->pc = 0x20EADCu;
            // 0x20eadc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20EAE0u;
        goto label_20eae0;
    }
    ctx->pc = 0x20EAD8u;
    {
        const bool branch_taken_0x20ead8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EAD8u;
            // 0x20eadc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ead8) {
            ctx->pc = 0x20EAE4u;
            goto label_20eae4;
        }
    }
    ctx->pc = 0x20EAE0u;
label_20eae0:
    // 0x20eae0: 0x24520010  addiu       $s2, $v0, 0x10
    ctx->pc = 0x20eae0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_20eae4:
    // 0x20eae4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_20eae8:
    if (ctx->pc == 0x20EAE8u) {
        ctx->pc = 0x20EAE8u;
            // 0x20eae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20EAECu;
        goto label_20eaec;
    }
    ctx->pc = 0x20EAE4u;
    {
        const bool branch_taken_0x20eae4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EAE4u;
            // 0x20eae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eae4) {
            ctx->pc = 0x20EAF4u;
            goto label_20eaf4;
        }
    }
    ctx->pc = 0x20EAECu;
label_20eaec:
    // 0x20eaec: 0x100000e6  b           . + 4 + (0xE6 << 2)
label_20eaf0:
    if (ctx->pc == 0x20EAF0u) {
        ctx->pc = 0x20EAF0u;
            // 0x20eaf0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x20EAF4u;
        goto label_20eaf4;
    }
    ctx->pc = 0x20EAECu;
    {
        const bool branch_taken_0x20eaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EAECu;
            // 0x20eaf0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eaec) {
            ctx->pc = 0x20EE88u;
            goto label_20ee88;
        }
    }
    ctx->pc = 0x20EAF4u;
label_20eaf4:
    // 0x20eaf4: 0x866306ae  lh          $v1, 0x6AE($s3)
    ctx->pc = 0x20eaf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1710)));
label_20eaf8:
    // 0x20eaf8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20eafc:
    // 0x20eafc: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_20eb00:
    if (ctx->pc == 0x20EB00u) {
        ctx->pc = 0x20EB04u;
        goto label_20eb04;
    }
    ctx->pc = 0x20EAFCu;
    {
        const bool branch_taken_0x20eafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20eafc) {
            ctx->pc = 0x20EB78u;
            goto label_20eb78;
        }
    }
    ctx->pc = 0x20EB04u;
label_20eb04:
    // 0x20eb04: 0x8e6206f4  lw          $v0, 0x6F4($s3)
    ctx->pc = 0x20eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1780)));
label_20eb08:
    // 0x20eb08: 0x284100b5  slti        $at, $v0, 0xB5
    ctx->pc = 0x20eb08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)181) ? 1 : 0);
label_20eb0c:
    // 0x20eb0c: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
label_20eb10:
    if (ctx->pc == 0x20EB10u) {
        ctx->pc = 0x20EB14u;
        goto label_20eb14;
    }
    ctx->pc = 0x20EB0Cu;
    {
        const bool branch_taken_0x20eb0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20eb0c) {
            ctx->pc = 0x20EB78u;
            goto label_20eb78;
        }
    }
    ctx->pc = 0x20EB14u;
label_20eb14:
    // 0x20eb14: 0xae6006f4  sw          $zero, 0x6F4($s3)
    ctx->pc = 0x20eb14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1780), GPR_U32(ctx, 0));
label_20eb18:
    // 0x20eb18: 0x9651002e  lhu         $s1, 0x2E($s2)
    ctx->pc = 0x20eb18u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 46)));
label_20eb1c:
    // 0x20eb1c: 0x2a210064  slti        $at, $s1, 0x64
    ctx->pc = 0x20eb1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
label_20eb20:
    // 0x20eb20: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_20eb24:
    if (ctx->pc == 0x20EB24u) {
        ctx->pc = 0x20EB24u;
            // 0x20eb24: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x20EB28u;
        goto label_20eb28;
    }
    ctx->pc = 0x20EB20u;
    {
        const bool branch_taken_0x20eb20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EB20u;
            // 0x20eb24: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb20) {
            ctx->pc = 0x20EB78u;
            goto label_20eb78;
        }
    }
    ctx->pc = 0x20EB28u;
label_20eb28:
    // 0x20eb28: 0xa642002e  sh          $v0, 0x2E($s2)
    ctx->pc = 0x20eb28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 46), (uint16_t)GPR_U32(ctx, 2));
label_20eb2c:
    // 0x20eb2c: 0x8e640938  lw          $a0, 0x938($s3)
    ctx->pc = 0x20eb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2360)));
label_20eb30:
    // 0x20eb30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_20eb34:
    if (ctx->pc == 0x20EB34u) {
        ctx->pc = 0x20EB38u;
        goto label_20eb38;
    }
    ctx->pc = 0x20EB30u;
    {
        const bool branch_taken_0x20eb30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20eb30) {
            ctx->pc = 0x20EB40u;
            goto label_20eb40;
        }
    }
    ctx->pc = 0x20EB38u;
label_20eb38:
    // 0x20eb38: 0xc066538  jal         func_1994E0
label_20eb3c:
    if (ctx->pc == 0x20EB3Cu) {
        ctx->pc = 0x20EB40u;
        goto label_20eb40;
    }
    ctx->pc = 0x20EB38u;
    SET_GPR_U32(ctx, 31, 0x20EB40u);
    ctx->pc = 0x1994E0u;
    if (runtime->hasFunction(0x1994E0u)) {
        auto targetFn = runtime->lookupFunction(0x1994E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EB40u; }
        if (ctx->pc != 0x20EB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckParamLimmit__13CGameDataUsedFv_0x1994e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EB40u; }
        if (ctx->pc != 0x20EB40u) { return; }
    }
    ctx->pc = 0x20EB40u;
label_20eb40:
    // 0x20eb40: 0x9642002e  lhu         $v0, 0x2E($s2)
    ctx->pc = 0x20eb40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 46)));
label_20eb44:
    // 0x20eb44: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x20eb44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_20eb48:
    // 0x20eb48: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_20eb4c:
    if (ctx->pc == 0x20EB4Cu) {
        ctx->pc = 0x20EB4Cu;
            // 0x20eb4c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x20EB50u;
        goto label_20eb50;
    }
    ctx->pc = 0x20EB48u;
    {
        const bool branch_taken_0x20eb48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EB48u;
            // 0x20eb4c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eb48) {
            ctx->pc = 0x20EB58u;
            goto label_20eb58;
        }
    }
    ctx->pc = 0x20EB50u;
label_20eb50:
    // 0x20eb50: 0xc094274  jal         func_2509D0
label_20eb54:
    if (ctx->pc == 0x20EB54u) {
        ctx->pc = 0x20EB58u;
        goto label_20eb58;
    }
    ctx->pc = 0x20EB50u;
    SET_GPR_U32(ctx, 31, 0x20EB58u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EB58u; }
        if (ctx->pc != 0x20EB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EB58u; }
        if (ctx->pc != 0x20EB58u) { return; }
    }
    ctx->pc = 0x20EB58u;
label_20eb58:
    // 0x20eb58: 0x866306a0  lh          $v1, 0x6A0($s3)
    ctx->pc = 0x20eb58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1696)));
label_20eb5c:
    // 0x20eb5c: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x20eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_20eb60:
    // 0x20eb60: 0x2442c480  addiu       $v0, $v0, -0x3B80
    ctx->pc = 0x20eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952064));
label_20eb64:
    // 0x20eb64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20eb68:
    // 0x20eb68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20eb6c:
    // 0x20eb6c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20eb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20eb70:
    // 0x20eb70: 0xc083bd4  jal         func_20EF50
label_20eb74:
    if (ctx->pc == 0x20EB74u) {
        ctx->pc = 0x20EB74u;
            // 0x20eb74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20EB78u;
        goto label_20eb78;
    }
    ctx->pc = 0x20EB70u;
    SET_GPR_U32(ctx, 31, 0x20EB78u);
    ctx->pc = 0x20EB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EB70u;
            // 0x20eb74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20EF50u;
    if (runtime->hasFunction(0x20EF50u)) {
        auto targetFn = runtime->lookupFunction(0x20EF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EB78u; }
        if (ctx->pc != 0x20EB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartFishEffect__12CAquaFishEffFi_0x20ef50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EB78u; }
        if (ctx->pc != 0x20EB78u) { return; }
    }
    ctx->pc = 0x20EB78u;
label_20eb78:
    // 0x20eb78: 0x8e640938  lw          $a0, 0x938($s3)
    ctx->pc = 0x20eb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2360)));
label_20eb7c:
    // 0x20eb7c: 0xc065d30  jal         func_1974C0
label_20eb80:
    if (ctx->pc == 0x20EB80u) {
        ctx->pc = 0x20EB80u;
            // 0x20eb80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20EB84u;
        goto label_20eb84;
    }
    ctx->pc = 0x20EB7Cu;
    SET_GPR_U32(ctx, 31, 0x20EB84u);
    ctx->pc = 0x20EB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EB7Cu;
            // 0x20eb80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1974C0u;
    if (runtime->hasFunction(0x1974C0u)) {
        auto targetFn = runtime->lookupFunction(0x1974C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EB84u; }
        if (ctx->pc != 0x20EB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFishHp__13CGameDataUsedFi_0x1974c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EB84u; }
        if (ctx->pc != 0x20EB84u) { return; }
    }
    ctx->pc = 0x20EB84u;
label_20eb84:
    // 0x20eb84: 0x1c400037  bgtz        $v0, . + 4 + (0x37 << 2)
label_20eb88:
    if (ctx->pc == 0x20EB88u) {
        ctx->pc = 0x20EB8Cu;
        goto label_20eb8c;
    }
    ctx->pc = 0x20EB84u;
    {
        const bool branch_taken_0x20eb84 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x20eb84) {
            ctx->pc = 0x20EC64u;
            goto label_20ec64;
        }
    }
    ctx->pc = 0x20EB8Cu;
label_20eb8c:
    // 0x20eb8c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x20eb8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20eb90:
    // 0x20eb90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20eb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20eb94:
    // 0x20eb94: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x20eb94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_20eb98:
    // 0x20eb98: 0x320f809  jalr        $t9
label_20eb9c:
    if (ctx->pc == 0x20EB9Cu) {
        ctx->pc = 0x20EB9Cu;
            // 0x20eb9c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x20EBA0u;
        goto label_20eba0;
    }
    ctx->pc = 0x20EB98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20EBA0u);
        ctx->pc = 0x20EB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EB98u;
            // 0x20eb9c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20EBA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20EBA0u; }
            if (ctx->pc != 0x20EBA0u) { return; }
        }
        }
    }
    ctx->pc = 0x20EBA0u;
label_20eba0:
    // 0x20eba0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20eba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20eba4:
    // 0x20eba4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x20eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_20eba8:
    // 0x20eba8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20eba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20ebac:
    // 0x20ebac: 0xc0941c0  jal         func_250700
label_20ebb0:
    if (ctx->pc == 0x20EBB0u) {
        ctx->pc = 0x20EBB4u;
        goto label_20ebb4;
    }
    ctx->pc = 0x20EBACu;
    SET_GPR_U32(ctx, 31, 0x20EBB4u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EBB4u; }
        if (ctx->pc != 0x20EBB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EBB4u; }
        if (ctx->pc != 0x20EBB4u) { return; }
    }
    ctx->pc = 0x20EBB4u;
label_20ebb4:
    // 0x20ebb4: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x20ebb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20ebb8:
    // 0x20ebb8: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x20ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_20ebbc:
    // 0x20ebbc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x20ebbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20ebc0:
    // 0x20ebc0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x20ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_20ebc4:
    // 0x20ebc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20ebc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20ebc8:
    // 0x20ebc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20ebc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20ebcc:
    // 0x20ebcc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x20ebccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_20ebd0:
    // 0x20ebd0: 0xc0941c0  jal         func_250700
label_20ebd4:
    if (ctx->pc == 0x20EBD4u) {
        ctx->pc = 0x20EBD4u;
            // 0x20ebd4: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->pc = 0x20EBD8u;
        goto label_20ebd8;
    }
    ctx->pc = 0x20EBD0u;
    SET_GPR_U32(ctx, 31, 0x20EBD8u);
    ctx->pc = 0x20EBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EBD0u;
            // 0x20ebd4: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EBD8u; }
        if (ctx->pc != 0x20EBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EBD8u; }
        if (ctx->pc != 0x20EBD8u) { return; }
    }
    ctx->pc = 0x20EBD8u;
label_20ebd8:
    // 0x20ebd8: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x20ebd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20ebdc:
    // 0x20ebdc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x20ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_20ebe0:
    // 0x20ebe0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20ebe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20ebe4:
    // 0x20ebe4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x20ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_20ebe8:
    // 0x20ebe8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20ebe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20ebec:
    // 0x20ebec: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x20ebecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20ebf0:
    // 0x20ebf0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20ebf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_20ebf4:
    // 0x20ebf4: 0xc0941c0  jal         func_250700
label_20ebf8:
    if (ctx->pc == 0x20EBF8u) {
        ctx->pc = 0x20EBF8u;
            // 0x20ebf8: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->pc = 0x20EBFCu;
        goto label_20ebfc;
    }
    ctx->pc = 0x20EBF4u;
    SET_GPR_U32(ctx, 31, 0x20EBFCu);
    ctx->pc = 0x20EBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EBF4u;
            // 0x20ebf8: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EBFCu; }
        if (ctx->pc != 0x20EBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EBFCu; }
        if (ctx->pc != 0x20EBFCu) { return; }
    }
    ctx->pc = 0x20EBFCu;
label_20ebfc:
    // 0x20ebfc: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x20ebfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_20ec00:
    // 0x20ec00: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x20ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_20ec04:
    // 0x20ec04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20ec04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20ec08:
    // 0x20ec08: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x20ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_20ec0c:
    // 0x20ec0c: 0x2442c450  addiu       $v0, $v0, -0x3BB0
    ctx->pc = 0x20ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952016));
label_20ec10:
    // 0x20ec10: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x20ec10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20ec14:
    // 0x20ec14: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20ec14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_20ec18:
    // 0x20ec18: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x20ec18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_20ec1c:
    // 0x20ec1c: 0x866306a0  lh          $v1, 0x6A0($s3)
    ctx->pc = 0x20ec1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1696)));
label_20ec20:
    // 0x20ec20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20ec20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20ec24:
    // 0x20ec24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20ec24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20ec28:
    // 0x20ec28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x20ec28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20ec2c:
    // 0x20ec2c: 0xc08331c  jal         func_20CC70
label_20ec30:
    if (ctx->pc == 0x20EC30u) {
        ctx->pc = 0x20EC30u;
            // 0x20ec30: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x20EC34u;
        goto label_20ec34;
    }
    ctx->pc = 0x20EC2Cu;
    SET_GPR_U32(ctx, 31, 0x20EC34u);
    ctx->pc = 0x20EC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EC2Cu;
            // 0x20ec30: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20CC70u;
    if (runtime->hasFunction(0x20CC70u)) {
        auto targetFn = runtime->lookupFunction(0x20CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EC34u; }
        if (ctx->pc != 0x20EC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Generate__7CBubbleFPf_0x20cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EC34u; }
        if (ctx->pc != 0x20EC34u) { return; }
    }
    ctx->pc = 0x20EC34u;
label_20ec34:
    // 0x20ec34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20ec34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_20ec38:
    // 0x20ec38: 0x2a220088  slti        $v0, $s1, 0x88
    ctx->pc = 0x20ec38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)136) ? 1 : 0);
label_20ec3c:
    // 0x20ec3c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_20ec40:
    if (ctx->pc == 0x20EC40u) {
        ctx->pc = 0x20EC40u;
            // 0x20ec40: 0x3c0240a0  lui         $v0, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
        ctx->pc = 0x20EC44u;
        goto label_20ec44;
    }
    ctx->pc = 0x20EC3Cu;
    {
        const bool branch_taken_0x20ec3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EC3Cu;
            // 0x20ec40: 0x3c0240a0  lui         $v0, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ec3c) {
            ctx->pc = 0x20EBA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20eba8;
        }
    }
    ctx->pc = 0x20EC44u;
label_20ec44:
    // 0x20ec44: 0x866306a0  lh          $v1, 0x6A0($s3)
    ctx->pc = 0x20ec44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1696)));
label_20ec48:
    // 0x20ec48: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x20ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_20ec4c:
    // 0x20ec4c: 0x2442c480  addiu       $v0, $v0, -0x3B80
    ctx->pc = 0x20ec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952064));
label_20ec50:
    // 0x20ec50: 0x36100002  ori         $s0, $s0, 0x2
    ctx->pc = 0x20ec50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2);
label_20ec54:
    // 0x20ec54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20ec54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20ec58:
    // 0x20ec58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20ec5c:
    // 0x20ec5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20ec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20ec60:
    // 0x20ec60: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20ec60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20ec64:
    // 0x20ec64: 0x86640920  lh          $a0, 0x920($s3)
    ctx->pc = 0x20ec64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2336)));
label_20ec68:
    // 0x20ec68: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x20ec68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_20ec6c:
    // 0x20ec6c: 0x1020007d  beqz        $at, . + 4 + (0x7D << 2)
label_20ec70:
    if (ctx->pc == 0x20EC70u) {
        ctx->pc = 0x20EC74u;
        goto label_20ec74;
    }
    ctx->pc = 0x20EC6Cu;
    {
        const bool branch_taken_0x20ec6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ec6c) {
            ctx->pc = 0x20EE64u;
            goto label_20ee64;
        }
    }
    ctx->pc = 0x20EC74u;
label_20ec74:
    // 0x20ec74: 0x8e620924  lw          $v0, 0x924($s3)
    ctx->pc = 0x20ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2340)));
label_20ec78:
    // 0x20ec78: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x20ec78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_20ec7c:
    // 0x20ec7c: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
label_20ec80:
    if (ctx->pc == 0x20EC80u) {
        ctx->pc = 0x20EC84u;
        goto label_20ec84;
    }
    ctx->pc = 0x20EC7Cu;
    {
        const bool branch_taken_0x20ec7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ec7c) {
            ctx->pc = 0x20EE64u;
            goto label_20ee64;
        }
    }
    ctx->pc = 0x20EC84u;
label_20ec84:
    // 0x20ec84: 0xc0832c0  jal         func_20CB00
label_20ec88:
    if (ctx->pc == 0x20EC88u) {
        ctx->pc = 0x20EC8Cu;
        goto label_20ec8c;
    }
    ctx->pc = 0x20EC84u;
    SET_GPR_U32(ctx, 31, 0x20EC8Cu);
    ctx->pc = 0x20CB00u;
    if (runtime->hasFunction(0x20CB00u)) {
        auto targetFn = runtime->lookupFunction(0x20CB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EC8Cu; }
        if (ctx->pc != 0x20EC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEsaInfo__Fi_0x20cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EC8Cu; }
        if (ctx->pc != 0x20EC8Cu) { return; }
    }
    ctx->pc = 0x20EC8Cu;
label_20ec8c:
    // 0x20ec8c: 0x96430038  lhu         $v1, 0x38($s2)
    ctx->pc = 0x20ec8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
label_20ec90:
    // 0x20ec90: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x20ec90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_20ec94:
    // 0x20ec94: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_20ec98:
    if (ctx->pc == 0x20EC98u) {
        ctx->pc = 0x20EC9Cu;
        goto label_20ec9c;
    }
    ctx->pc = 0x20EC94u;
    {
        const bool branch_taken_0x20ec94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ec94) {
            ctx->pc = 0x20ECA0u;
            goto label_20eca0;
        }
    }
    ctx->pc = 0x20EC9Cu;
label_20ec9c:
    // 0x20ec9c: 0x36100008  ori         $s0, $s0, 0x8
    ctx->pc = 0x20ec9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8);
label_20eca0:
    // 0x20eca0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_20eca4:
    if (ctx->pc == 0x20ECA4u) {
        ctx->pc = 0x20ECA8u;
        goto label_20eca8;
    }
    ctx->pc = 0x20ECA0u;
    {
        const bool branch_taken_0x20eca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20eca0) {
            ctx->pc = 0x20ED10u;
            goto label_20ed10;
        }
    }
    ctx->pc = 0x20ECA8u;
label_20eca8:
    // 0x20eca8: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
label_20ecac:
    if (ctx->pc == 0x20ECACu) {
        ctx->pc = 0x20ECB0u;
        goto label_20ecb0;
    }
    ctx->pc = 0x20ECA8u;
    {
        const bool branch_taken_0x20eca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20eca8) {
            ctx->pc = 0x20ED10u;
            goto label_20ed10;
        }
    }
    ctx->pc = 0x20ECB0u;
label_20ecb0:
    // 0x20ecb0: 0x80440003  lb          $a0, 0x3($v0)
    ctx->pc = 0x20ecb0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_20ecb4:
    // 0x20ecb4: 0x9643002c  lhu         $v1, 0x2C($s2)
    ctx->pc = 0x20ecb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
label_20ecb8:
    // 0x20ecb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20ecbc:
    // 0x20ecbc: 0xa643002c  sh          $v1, 0x2C($s2)
    ctx->pc = 0x20ecbcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 44), (uint16_t)GPR_U32(ctx, 3));
label_20ecc0:
    // 0x20ecc0: 0x80440004  lb          $a0, 0x4($v0)
    ctx->pc = 0x20ecc0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_20ecc4:
    // 0x20ecc4: 0x96430026  lhu         $v1, 0x26($s2)
    ctx->pc = 0x20ecc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
label_20ecc8:
    // 0x20ecc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20ecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20eccc:
    // 0x20eccc: 0xa6430026  sh          $v1, 0x26($s2)
    ctx->pc = 0x20ecccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 3));
label_20ecd0:
    // 0x20ecd0: 0x80440005  lb          $a0, 0x5($v0)
    ctx->pc = 0x20ecd0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_20ecd4:
    // 0x20ecd4: 0x96430028  lhu         $v1, 0x28($s2)
    ctx->pc = 0x20ecd4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 40)));
label_20ecd8:
    // 0x20ecd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20ecdc:
    // 0x20ecdc: 0xa6430028  sh          $v1, 0x28($s2)
    ctx->pc = 0x20ecdcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 40), (uint16_t)GPR_U32(ctx, 3));
label_20ece0:
    // 0x20ece0: 0x80440006  lb          $a0, 0x6($v0)
    ctx->pc = 0x20ece0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
label_20ece4:
    // 0x20ece4: 0x9643002a  lhu         $v1, 0x2A($s2)
    ctx->pc = 0x20ece4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 42)));
label_20ece8:
    // 0x20ece8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20ecec:
    // 0x20ecec: 0xa643002a  sh          $v1, 0x2A($s2)
    ctx->pc = 0x20ececu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 42), (uint16_t)GPR_U32(ctx, 3));
label_20ecf0:
    // 0x20ecf0: 0x8244003b  lb          $a0, 0x3B($s2)
    ctx->pc = 0x20ecf0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 59)));
label_20ecf4:
    // 0x20ecf4: 0x80430002  lb          $v1, 0x2($v0)
    ctx->pc = 0x20ecf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_20ecf8:
    // 0x20ecf8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x20ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_20ecfc:
    // 0x20ecfc: 0xa243003b  sb          $v1, 0x3B($s2)
    ctx->pc = 0x20ecfcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 59), (uint8_t)GPR_U32(ctx, 3));
label_20ed00:
    // 0x20ed00: 0x94420008  lhu         $v0, 0x8($v0)
    ctx->pc = 0x20ed00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_20ed04:
    // 0x20ed04: 0x96430030  lhu         $v1, 0x30($s2)
    ctx->pc = 0x20ed04u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 48)));
label_20ed08:
    // 0x20ed08: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20ed0c:
    // 0x20ed0c: 0xa6420030  sh          $v0, 0x30($s2)
    ctx->pc = 0x20ed0cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 48), (uint16_t)GPR_U32(ctx, 2));
label_20ed10:
    // 0x20ed10: 0x82420035  lb          $v0, 0x35($s2)
    ctx->pc = 0x20ed10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
label_20ed14:
    // 0x20ed14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_20ed18:
    // 0x20ed18: 0xa2420035  sb          $v0, 0x35($s2)
    ctx->pc = 0x20ed18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 53), (uint8_t)GPR_U32(ctx, 2));
label_20ed1c:
    // 0x20ed1c: 0x82420035  lb          $v0, 0x35($s2)
    ctx->pc = 0x20ed1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 53)));
label_20ed20:
    // 0x20ed20: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_20ed24:
    if (ctx->pc == 0x20ED24u) {
        ctx->pc = 0x20ED28u;
        goto label_20ed28;
    }
    ctx->pc = 0x20ED20u;
    {
        const bool branch_taken_0x20ed20 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x20ed20) {
            ctx->pc = 0x20ED2Cu;
            goto label_20ed2c;
        }
    }
    ctx->pc = 0x20ED28u;
label_20ed28:
    // 0x20ed28: 0xa2400035  sb          $zero, 0x35($s2)
    ctx->pc = 0x20ed28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 53), (uint8_t)GPR_U32(ctx, 0));
label_20ed2c:
    // 0x20ed2c: 0x86630920  lh          $v1, 0x920($s3)
    ctx->pc = 0x20ed2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2336)));
label_20ed30:
    // 0x20ed30: 0x2402013b  addiu       $v0, $zero, 0x13B
    ctx->pc = 0x20ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 315));
label_20ed34:
    // 0x20ed34: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_20ed38:
    if (ctx->pc == 0x20ED38u) {
        ctx->pc = 0x20ED3Cu;
        goto label_20ed3c;
    }
    ctx->pc = 0x20ED34u;
    {
        const bool branch_taken_0x20ed34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20ed34) {
            ctx->pc = 0x20ED68u;
            goto label_20ed68;
        }
    }
    ctx->pc = 0x20ED3Cu;
label_20ed3c:
    // 0x20ed3c: 0x82430015  lb          $v1, 0x15($s2)
    ctx->pc = 0x20ed3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 21)));
label_20ed40:
    // 0x20ed40: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_20ed44:
    if (ctx->pc == 0x20ED44u) {
        ctx->pc = 0x20ED44u;
            // 0x20ed44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20ED48u;
        goto label_20ed48;
    }
    ctx->pc = 0x20ED40u;
    {
        const bool branch_taken_0x20ed40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ED44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ED40u;
            // 0x20ed44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed40) {
            ctx->pc = 0x20ED58u;
            goto label_20ed58;
        }
    }
    ctx->pc = 0x20ED48u;
label_20ed48:
    // 0x20ed48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ed4c:
    // 0x20ed4c: 0x36100020  ori         $s0, $s0, 0x20
    ctx->pc = 0x20ed4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
label_20ed50:
    // 0x20ed50: 0x10000005  b           . + 4 + (0x5 << 2)
label_20ed54:
    if (ctx->pc == 0x20ED54u) {
        ctx->pc = 0x20ED54u;
            // 0x20ed54: 0xa2420015  sb          $v0, 0x15($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 21), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x20ED58u;
        goto label_20ed58;
    }
    ctx->pc = 0x20ED50u;
    {
        const bool branch_taken_0x20ed50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ED50u;
            // 0x20ed54: 0xa2420015  sb          $v0, 0x15($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 21), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed50) {
            ctx->pc = 0x20ED68u;
            goto label_20ed68;
        }
    }
    ctx->pc = 0x20ED58u;
label_20ed58:
    // 0x20ed58: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_20ed5c:
    if (ctx->pc == 0x20ED5Cu) {
        ctx->pc = 0x20ED60u;
        goto label_20ed60;
    }
    ctx->pc = 0x20ED58u;
    {
        const bool branch_taken_0x20ed58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20ed58) {
            ctx->pc = 0x20ED68u;
            goto label_20ed68;
        }
    }
    ctx->pc = 0x20ED60u;
label_20ed60:
    // 0x20ed60: 0xa2400015  sb          $zero, 0x15($s2)
    ctx->pc = 0x20ed60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 21), (uint8_t)GPR_U32(ctx, 0));
label_20ed64:
    // 0x20ed64: 0x36100010  ori         $s0, $s0, 0x10
    ctx->pc = 0x20ed64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
label_20ed68:
    // 0x20ed68: 0x96420038  lhu         $v0, 0x38($s2)
    ctx->pc = 0x20ed68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
label_20ed6c:
    // 0x20ed6c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20ed6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_20ed70:
    // 0x20ed70: 0xa6420038  sh          $v0, 0x38($s2)
    ctx->pc = 0x20ed70u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 56), (uint16_t)GPR_U32(ctx, 2));
label_20ed74:
    // 0x20ed74: 0x8242003b  lb          $v0, 0x3B($s2)
    ctx->pc = 0x20ed74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 59)));
label_20ed78:
    // 0x20ed78: 0x2841000b  slti        $at, $v0, 0xB
    ctx->pc = 0x20ed78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
label_20ed7c:
    // 0x20ed7c: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
label_20ed80:
    if (ctx->pc == 0x20ED80u) {
        ctx->pc = 0x20ED80u;
            // 0x20ed80: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x20ED84u;
        goto label_20ed84;
    }
    ctx->pc = 0x20ED7Cu;
    {
        const bool branch_taken_0x20ed7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ED80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20ED7Cu;
            // 0x20ed80: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed7c) {
            ctx->pc = 0x20EDC8u;
            goto label_20edc8;
        }
    }
    ctx->pc = 0x20ED84u;
label_20ed84:
    // 0x20ed84: 0xc0941b0  jal         func_2506C0
label_20ed88:
    if (ctx->pc == 0x20ED88u) {
        ctx->pc = 0x20ED8Cu;
        goto label_20ed8c;
    }
    ctx->pc = 0x20ED84u;
    SET_GPR_U32(ctx, 31, 0x20ED8Cu);
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ED8Cu; }
        if (ctx->pc != 0x20ED8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ED8Cu; }
        if (ctx->pc != 0x20ED8Cu) { return; }
    }
    ctx->pc = 0x20ED8Cu;
label_20ed8c:
    // 0x20ed8c: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x20ed8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20ed90:
    // 0x20ed90: 0xc0941b0  jal         func_2506C0
label_20ed94:
    if (ctx->pc == 0x20ED94u) {
        ctx->pc = 0x20ED94u;
            // 0x20ed94: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x20ED98u;
        goto label_20ed98;
    }
    ctx->pc = 0x20ED90u;
    SET_GPR_U32(ctx, 31, 0x20ED98u);
    ctx->pc = 0x20ED94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20ED90u;
            // 0x20ed94: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ED98u; }
        if (ctx->pc != 0x20ED98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ED98u; }
        if (ctx->pc != 0x20ED98u) { return; }
    }
    ctx->pc = 0x20ED98u;
label_20ed98:
    // 0x20ed98: 0x96430018  lhu         $v1, 0x18($s2)
    ctx->pc = 0x20ed98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
label_20ed9c:
    // 0x20ed9c: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x20ed9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_20eda0:
    // 0x20eda0: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x20eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_20eda4:
    // 0x20eda4: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x20eda4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_20eda8:
    // 0x20eda8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20eda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20edac:
    // 0x20edac: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x20edacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_20edb0:
    // 0x20edb0: 0xa6430018  sh          $v1, 0x18($s2)
    ctx->pc = 0x20edb0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 24), (uint16_t)GPR_U32(ctx, 3));
label_20edb4:
    // 0x20edb4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x20edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_20edb8:
    // 0x20edb8: 0x9643001a  lhu         $v1, 0x1A($s2)
    ctx->pc = 0x20edb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
label_20edbc:
    // 0x20edbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20edc0:
    // 0x20edc0: 0xa643001a  sh          $v1, 0x1A($s2)
    ctx->pc = 0x20edc0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 3));
label_20edc4:
    // 0x20edc4: 0xa242003b  sb          $v0, 0x3B($s2)
    ctx->pc = 0x20edc4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 59), (uint8_t)GPR_U32(ctx, 2));
label_20edc8:
    // 0x20edc8: 0x96420018  lhu         $v0, 0x18($s2)
    ctx->pc = 0x20edc8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
label_20edcc:
    // 0x20edcc: 0x284107d1  slti        $at, $v0, 0x7D1
    ctx->pc = 0x20edccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2001) ? 1 : 0);
label_20edd0:
    // 0x20edd0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_20edd4:
    if (ctx->pc == 0x20EDD4u) {
        ctx->pc = 0x20EDD4u;
            // 0x20edd4: 0x240207d0  addiu       $v0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->pc = 0x20EDD8u;
        goto label_20edd8;
    }
    ctx->pc = 0x20EDD0u;
    {
        const bool branch_taken_0x20edd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EDD0u;
            // 0x20edd4: 0x240207d0  addiu       $v0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20edd0) {
            ctx->pc = 0x20EDDCu;
            goto label_20eddc;
        }
    }
    ctx->pc = 0x20EDD8u;
label_20edd8:
    // 0x20edd8: 0xa6420018  sh          $v0, 0x18($s2)
    ctx->pc = 0x20edd8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 24), (uint16_t)GPR_U32(ctx, 2));
label_20eddc:
    // 0x20eddc: 0x9642001a  lhu         $v0, 0x1A($s2)
    ctx->pc = 0x20eddcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26)));
label_20ede0:
    // 0x20ede0: 0x3401ea61  ori         $at, $zero, 0xEA61
    ctx->pc = 0x20ede0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60001);
label_20ede4:
    // 0x20ede4: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x20ede4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_20ede8:
    // 0x20ede8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_20edec:
    if (ctx->pc == 0x20EDECu) {
        ctx->pc = 0x20EDECu;
            // 0x20edec: 0x3402ea60  ori         $v0, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->pc = 0x20EDF0u;
        goto label_20edf0;
    }
    ctx->pc = 0x20EDE8u;
    {
        const bool branch_taken_0x20ede8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EDE8u;
            // 0x20edec: 0x3402ea60  ori         $v0, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ede8) {
            ctx->pc = 0x20EDF4u;
            goto label_20edf4;
        }
    }
    ctx->pc = 0x20EDF0u;
label_20edf0:
    // 0x20edf0: 0xa642001a  sh          $v0, 0x1A($s2)
    ctx->pc = 0x20edf0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 26), (uint16_t)GPR_U32(ctx, 2));
label_20edf4:
    // 0x20edf4: 0xc066538  jal         func_1994E0
label_20edf8:
    if (ctx->pc == 0x20EDF8u) {
        ctx->pc = 0x20EDF8u;
            // 0x20edf8: 0x8e640938  lw          $a0, 0x938($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2360)));
        ctx->pc = 0x20EDFCu;
        goto label_20edfc;
    }
    ctx->pc = 0x20EDF4u;
    SET_GPR_U32(ctx, 31, 0x20EDFCu);
    ctx->pc = 0x20EDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EDF4u;
            // 0x20edf8: 0x8e640938  lw          $a0, 0x938($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2360)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1994E0u;
    if (runtime->hasFunction(0x1994E0u)) {
        auto targetFn = runtime->lookupFunction(0x1994E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EDFCu; }
        if (ctx->pc != 0x20EDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckParamLimmit__13CGameDataUsedFv_0x1994e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EDFCu; }
        if (ctx->pc != 0x20EDFCu) { return; }
    }
    ctx->pc = 0x20EDFCu;
label_20edfc:
    // 0x20edfc: 0xc083560  jal         func_20D580
label_20ee00:
    if (ctx->pc == 0x20EE00u) {
        ctx->pc = 0x20EE00u;
            // 0x20ee00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20EE04u;
        goto label_20ee04;
    }
    ctx->pc = 0x20EDFCu;
    SET_GPR_U32(ctx, 31, 0x20EE04u);
    ctx->pc = 0x20EE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EDFCu;
            // 0x20ee00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D580u;
    if (runtime->hasFunction(0x20D580u)) {
        auto targetFn = runtime->lookupFunction(0x20D580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EE04u; }
        if (ctx->pc != 0x20EE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAdjustScale__9CAquaFishFv_0x20d580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EE04u; }
        if (ctx->pc != 0x20EE04u) { return; }
    }
    ctx->pc = 0x20EE04u;
label_20ee04:
    // 0x20ee04: 0x86630920  lh          $v1, 0x920($s3)
    ctx->pc = 0x20ee04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2336)));
label_20ee08:
    // 0x20ee08: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x20ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_20ee0c:
    // 0x20ee0c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_20ee10:
    if (ctx->pc == 0x20EE10u) {
        ctx->pc = 0x20EE14u;
        goto label_20ee14;
    }
    ctx->pc = 0x20EE0Cu;
    {
        const bool branch_taken_0x20ee0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20ee0c) {
            ctx->pc = 0x20EE28u;
            goto label_20ee28;
        }
    }
    ctx->pc = 0x20EE14u;
label_20ee14:
    // 0x20ee14: 0x96430038  lhu         $v1, 0x38($s2)
    ctx->pc = 0x20ee14u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
label_20ee18:
    // 0x20ee18: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x20ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_20ee1c:
    // 0x20ee1c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x20ee1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_20ee20:
    // 0x20ee20: 0xa6430038  sh          $v1, 0x38($s2)
    ctx->pc = 0x20ee20u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 56), (uint16_t)GPR_U32(ctx, 3));
label_20ee24:
    // 0x20ee24: 0xa6420036  sh          $v0, 0x36($s2)
    ctx->pc = 0x20ee24u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 54), (uint16_t)GPR_U32(ctx, 2));
label_20ee28:
    // 0x20ee28: 0x96430038  lhu         $v1, 0x38($s2)
    ctx->pc = 0x20ee28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 56)));
label_20ee2c:
    // 0x20ee2c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x20ee2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_20ee30:
    // 0x20ee30: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_20ee34:
    if (ctx->pc == 0x20EE34u) {
        ctx->pc = 0x20EE38u;
        goto label_20ee38;
    }
    ctx->pc = 0x20EE30u;
    {
        const bool branch_taken_0x20ee30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ee30) {
            ctx->pc = 0x20EE54u;
            goto label_20ee54;
        }
    }
    ctx->pc = 0x20EE38u;
label_20ee38:
    // 0x20ee38: 0x96420036  lhu         $v0, 0x36($s2)
    ctx->pc = 0x20ee38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 54)));
label_20ee3c:
    // 0x20ee3c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x20ee3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_20ee40:
    // 0x20ee40: 0x1c800003  bgtz        $a0, . + 4 + (0x3 << 2)
label_20ee44:
    if (ctx->pc == 0x20EE44u) {
        ctx->pc = 0x20EE44u;
            // 0x20ee44: 0x34620080  ori         $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x20EE48u;
        goto label_20ee48;
    }
    ctx->pc = 0x20EE40u;
    {
        const bool branch_taken_0x20ee40 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x20EE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EE40u;
            // 0x20ee44: 0x34620080  ori         $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee40) {
            ctx->pc = 0x20EE50u;
            goto label_20ee50;
        }
    }
    ctx->pc = 0x20EE48u;
label_20ee48:
    // 0x20ee48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20ee48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ee4c:
    // 0x20ee4c: 0xa6420038  sh          $v0, 0x38($s2)
    ctx->pc = 0x20ee4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 56), (uint16_t)GPR_U32(ctx, 2));
label_20ee50:
    // 0x20ee50: 0xa6440036  sh          $a0, 0x36($s2)
    ctx->pc = 0x20ee50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 54), (uint16_t)GPR_U32(ctx, 4));
label_20ee54:
    // 0x20ee54: 0x8f8491bc  lw          $a0, -0x6E44($gp)
    ctx->pc = 0x20ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939068)));
label_20ee58:
    // 0x20ee58: 0xc094280  jal         func_250A00
label_20ee5c:
    if (ctx->pc == 0x20EE5Cu) {
        ctx->pc = 0x20EE5Cu;
            // 0x20ee5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20EE60u;
        goto label_20ee60;
    }
    ctx->pc = 0x20EE58u;
    SET_GPR_U32(ctx, 31, 0x20EE60u);
    ctx->pc = 0x20EE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EE58u;
            // 0x20ee5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250A00u;
    if (runtime->hasFunction(0x250A00u)) {
        auto targetFn = runtime->lookupFunction(0x250A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EE60u; }
        if (ctx->pc != 0x20EE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__FUii_0x250a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EE60u; }
        if (ctx->pc != 0x20EE60u) { return; }
    }
    ctx->pc = 0x20EE60u;
label_20ee60:
    // 0x20ee60: 0xa6600920  sh          $zero, 0x920($s3)
    ctx->pc = 0x20ee60u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2336), (uint16_t)GPR_U32(ctx, 0));
label_20ee64:
    // 0x20ee64: 0x8e620934  lw          $v0, 0x934($s3)
    ctx->pc = 0x20ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2356)));
label_20ee68:
    // 0x20ee68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20ee6c:
    // 0x20ee6c: 0xae620934  sw          $v0, 0x934($s3)
    ctx->pc = 0x20ee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2356), GPR_U32(ctx, 2));
label_20ee70:
    // 0x20ee70: 0x8e620934  lw          $v0, 0x934($s3)
    ctx->pc = 0x20ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2356)));
label_20ee74:
    // 0x20ee74: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x20ee74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
label_20ee78:
    // 0x20ee78: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_20ee7c:
    if (ctx->pc == 0x20EE7Cu) {
        ctx->pc = 0x20EE7Cu;
            // 0x20ee7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20EE80u;
        goto label_20ee80;
    }
    ctx->pc = 0x20EE78u;
    {
        const bool branch_taken_0x20ee78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EE78u;
            // 0x20ee7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee78) {
            ctx->pc = 0x20EE84u;
            goto label_20ee84;
        }
    }
    ctx->pc = 0x20EE80u;
label_20ee80:
    // 0x20ee80: 0xae600934  sw          $zero, 0x934($s3)
    ctx->pc = 0x20ee80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2356), GPR_U32(ctx, 0));
label_20ee84:
    // 0x20ee84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20ee84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_20ee88:
    // 0x20ee88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20ee88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20ee8c:
    // 0x20ee8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20ee8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20ee90:
    // 0x20ee90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20ee90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20ee94:
    // 0x20ee94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20ee94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20ee98:
    // 0x20ee98: 0x3e00008  jr          $ra
label_20ee9c:
    if (ctx->pc == 0x20EE9Cu) {
        ctx->pc = 0x20EE9Cu;
            // 0x20ee9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x20EEA0u;
        goto label_fallthrough_0x20ee98;
    }
    ctx->pc = 0x20EE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EE98u;
            // 0x20ee9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20ee98:
    ctx->pc = 0x20EEA0u;
}

#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditSetPlaceAnime__FiP9CMapParts
// Address: 0x2fbb60 - 0x2fbdc4
void EditSetPlaceAnime__FiP9CMapParts_0x2fbb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditSetPlaceAnime__FiP9CMapParts_0x2fbb60");
#endif

    switch (ctx->pc) {
        case 0x2fbb60u: goto label_2fbb60;
        case 0x2fbb64u: goto label_2fbb64;
        case 0x2fbb68u: goto label_2fbb68;
        case 0x2fbb6cu: goto label_2fbb6c;
        case 0x2fbb70u: goto label_2fbb70;
        case 0x2fbb74u: goto label_2fbb74;
        case 0x2fbb78u: goto label_2fbb78;
        case 0x2fbb7cu: goto label_2fbb7c;
        case 0x2fbb80u: goto label_2fbb80;
        case 0x2fbb84u: goto label_2fbb84;
        case 0x2fbb88u: goto label_2fbb88;
        case 0x2fbb8cu: goto label_2fbb8c;
        case 0x2fbb90u: goto label_2fbb90;
        case 0x2fbb94u: goto label_2fbb94;
        case 0x2fbb98u: goto label_2fbb98;
        case 0x2fbb9cu: goto label_2fbb9c;
        case 0x2fbba0u: goto label_2fbba0;
        case 0x2fbba4u: goto label_2fbba4;
        case 0x2fbba8u: goto label_2fbba8;
        case 0x2fbbacu: goto label_2fbbac;
        case 0x2fbbb0u: goto label_2fbbb0;
        case 0x2fbbb4u: goto label_2fbbb4;
        case 0x2fbbb8u: goto label_2fbbb8;
        case 0x2fbbbcu: goto label_2fbbbc;
        case 0x2fbbc0u: goto label_2fbbc0;
        case 0x2fbbc4u: goto label_2fbbc4;
        case 0x2fbbc8u: goto label_2fbbc8;
        case 0x2fbbccu: goto label_2fbbcc;
        case 0x2fbbd0u: goto label_2fbbd0;
        case 0x2fbbd4u: goto label_2fbbd4;
        case 0x2fbbd8u: goto label_2fbbd8;
        case 0x2fbbdcu: goto label_2fbbdc;
        case 0x2fbbe0u: goto label_2fbbe0;
        case 0x2fbbe4u: goto label_2fbbe4;
        case 0x2fbbe8u: goto label_2fbbe8;
        case 0x2fbbecu: goto label_2fbbec;
        case 0x2fbbf0u: goto label_2fbbf0;
        case 0x2fbbf4u: goto label_2fbbf4;
        case 0x2fbbf8u: goto label_2fbbf8;
        case 0x2fbbfcu: goto label_2fbbfc;
        case 0x2fbc00u: goto label_2fbc00;
        case 0x2fbc04u: goto label_2fbc04;
        case 0x2fbc08u: goto label_2fbc08;
        case 0x2fbc0cu: goto label_2fbc0c;
        case 0x2fbc10u: goto label_2fbc10;
        case 0x2fbc14u: goto label_2fbc14;
        case 0x2fbc18u: goto label_2fbc18;
        case 0x2fbc1cu: goto label_2fbc1c;
        case 0x2fbc20u: goto label_2fbc20;
        case 0x2fbc24u: goto label_2fbc24;
        case 0x2fbc28u: goto label_2fbc28;
        case 0x2fbc2cu: goto label_2fbc2c;
        case 0x2fbc30u: goto label_2fbc30;
        case 0x2fbc34u: goto label_2fbc34;
        case 0x2fbc38u: goto label_2fbc38;
        case 0x2fbc3cu: goto label_2fbc3c;
        case 0x2fbc40u: goto label_2fbc40;
        case 0x2fbc44u: goto label_2fbc44;
        case 0x2fbc48u: goto label_2fbc48;
        case 0x2fbc4cu: goto label_2fbc4c;
        case 0x2fbc50u: goto label_2fbc50;
        case 0x2fbc54u: goto label_2fbc54;
        case 0x2fbc58u: goto label_2fbc58;
        case 0x2fbc5cu: goto label_2fbc5c;
        case 0x2fbc60u: goto label_2fbc60;
        case 0x2fbc64u: goto label_2fbc64;
        case 0x2fbc68u: goto label_2fbc68;
        case 0x2fbc6cu: goto label_2fbc6c;
        case 0x2fbc70u: goto label_2fbc70;
        case 0x2fbc74u: goto label_2fbc74;
        case 0x2fbc78u: goto label_2fbc78;
        case 0x2fbc7cu: goto label_2fbc7c;
        case 0x2fbc80u: goto label_2fbc80;
        case 0x2fbc84u: goto label_2fbc84;
        case 0x2fbc88u: goto label_2fbc88;
        case 0x2fbc8cu: goto label_2fbc8c;
        case 0x2fbc90u: goto label_2fbc90;
        case 0x2fbc94u: goto label_2fbc94;
        case 0x2fbc98u: goto label_2fbc98;
        case 0x2fbc9cu: goto label_2fbc9c;
        case 0x2fbca0u: goto label_2fbca0;
        case 0x2fbca4u: goto label_2fbca4;
        case 0x2fbca8u: goto label_2fbca8;
        case 0x2fbcacu: goto label_2fbcac;
        case 0x2fbcb0u: goto label_2fbcb0;
        case 0x2fbcb4u: goto label_2fbcb4;
        case 0x2fbcb8u: goto label_2fbcb8;
        case 0x2fbcbcu: goto label_2fbcbc;
        case 0x2fbcc0u: goto label_2fbcc0;
        case 0x2fbcc4u: goto label_2fbcc4;
        case 0x2fbcc8u: goto label_2fbcc8;
        case 0x2fbcccu: goto label_2fbccc;
        case 0x2fbcd0u: goto label_2fbcd0;
        case 0x2fbcd4u: goto label_2fbcd4;
        case 0x2fbcd8u: goto label_2fbcd8;
        case 0x2fbcdcu: goto label_2fbcdc;
        case 0x2fbce0u: goto label_2fbce0;
        case 0x2fbce4u: goto label_2fbce4;
        case 0x2fbce8u: goto label_2fbce8;
        case 0x2fbcecu: goto label_2fbcec;
        case 0x2fbcf0u: goto label_2fbcf0;
        case 0x2fbcf4u: goto label_2fbcf4;
        case 0x2fbcf8u: goto label_2fbcf8;
        case 0x2fbcfcu: goto label_2fbcfc;
        case 0x2fbd00u: goto label_2fbd00;
        case 0x2fbd04u: goto label_2fbd04;
        case 0x2fbd08u: goto label_2fbd08;
        case 0x2fbd0cu: goto label_2fbd0c;
        case 0x2fbd10u: goto label_2fbd10;
        case 0x2fbd14u: goto label_2fbd14;
        case 0x2fbd18u: goto label_2fbd18;
        case 0x2fbd1cu: goto label_2fbd1c;
        case 0x2fbd20u: goto label_2fbd20;
        case 0x2fbd24u: goto label_2fbd24;
        case 0x2fbd28u: goto label_2fbd28;
        case 0x2fbd2cu: goto label_2fbd2c;
        case 0x2fbd30u: goto label_2fbd30;
        case 0x2fbd34u: goto label_2fbd34;
        case 0x2fbd38u: goto label_2fbd38;
        case 0x2fbd3cu: goto label_2fbd3c;
        case 0x2fbd40u: goto label_2fbd40;
        case 0x2fbd44u: goto label_2fbd44;
        case 0x2fbd48u: goto label_2fbd48;
        case 0x2fbd4cu: goto label_2fbd4c;
        case 0x2fbd50u: goto label_2fbd50;
        case 0x2fbd54u: goto label_2fbd54;
        case 0x2fbd58u: goto label_2fbd58;
        case 0x2fbd5cu: goto label_2fbd5c;
        case 0x2fbd60u: goto label_2fbd60;
        case 0x2fbd64u: goto label_2fbd64;
        case 0x2fbd68u: goto label_2fbd68;
        case 0x2fbd6cu: goto label_2fbd6c;
        case 0x2fbd70u: goto label_2fbd70;
        case 0x2fbd74u: goto label_2fbd74;
        case 0x2fbd78u: goto label_2fbd78;
        case 0x2fbd7cu: goto label_2fbd7c;
        case 0x2fbd80u: goto label_2fbd80;
        case 0x2fbd84u: goto label_2fbd84;
        case 0x2fbd88u: goto label_2fbd88;
        case 0x2fbd8cu: goto label_2fbd8c;
        case 0x2fbd90u: goto label_2fbd90;
        case 0x2fbd94u: goto label_2fbd94;
        case 0x2fbd98u: goto label_2fbd98;
        case 0x2fbd9cu: goto label_2fbd9c;
        case 0x2fbda0u: goto label_2fbda0;
        case 0x2fbda4u: goto label_2fbda4;
        case 0x2fbda8u: goto label_2fbda8;
        case 0x2fbdacu: goto label_2fbdac;
        case 0x2fbdb0u: goto label_2fbdb0;
        case 0x2fbdb4u: goto label_2fbdb4;
        case 0x2fbdb8u: goto label_2fbdb8;
        case 0x2fbdbcu: goto label_2fbdbc;
        case 0x2fbdc0u: goto label_2fbdc0;
        default: break;
    }

    ctx->pc = 0x2fbb60u;

label_2fbb60:
    // 0x2fbb60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2fbb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2fbb64:
    // 0x2fbb64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2fbb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2fbb68:
    // 0x2fbb68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fbb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2fbb6c:
    // 0x2fbb6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fbb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2fbb70:
    // 0x2fbb70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2fbb70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fbb74:
    // 0x2fbb74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fbb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fbb78:
    // 0x2fbb78: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2fbb78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fbb7c:
    // 0x2fbb7c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_2fbb80:
    if (ctx->pc == 0x2FBB80u) {
        ctx->pc = 0x2FBB80u;
            // 0x2fbb80: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2FBB84u;
        goto label_2fbb84;
    }
    ctx->pc = 0x2FBB7Cu;
    {
        const bool branch_taken_0x2fbb7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBB7Cu;
            // 0x2fbb80: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb7c) {
            ctx->pc = 0x2FBB8Cu;
            goto label_2fbb8c;
        }
    }
    ctx->pc = 0x2FBB84u;
label_2fbb84:
    // 0x2fbb84: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_2fbb88:
    if (ctx->pc == 0x2FBB88u) {
        ctx->pc = 0x2FBB88u;
            // 0x2fbb88: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2FBB8Cu;
        goto label_2fbb8c;
    }
    ctx->pc = 0x2FBB84u;
    {
        const bool branch_taken_0x2fbb84 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBB84u;
            // 0x2fbb88: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb84) {
            ctx->pc = 0x2FBB94u;
            goto label_2fbb94;
        }
    }
    ctx->pc = 0x2FBB8Cu;
label_2fbb8c:
    // 0x2fbb8c: 0x10000086  b           . + 4 + (0x86 << 2)
label_2fbb90:
    if (ctx->pc == 0x2FBB90u) {
        ctx->pc = 0x2FBB90u;
            // 0x2fbb90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB94u;
        goto label_2fbb94;
    }
    ctx->pc = 0x2FBB8Cu;
    {
        const bool branch_taken_0x2fbb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBB8Cu;
            // 0x2fbb90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb8c) {
            ctx->pc = 0x2FBDA8u;
            goto label_2fbda8;
        }
    }
    ctx->pc = 0x2FBB94u;
label_2fbb94:
    // 0x2fbb94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fbb94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fbb98:
    // 0x2fbb98: 0x1664004d  bne         $s3, $a0, . + 4 + (0x4D << 2)
label_2fbb9c:
    if (ctx->pc == 0x2FBB9Cu) {
        ctx->pc = 0x2FBB9Cu;
            // 0x2fbb9c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBBA0u;
        goto label_2fbba0;
    }
    ctx->pc = 0x2FBB98u;
    {
        const bool branch_taken_0x2fbb98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x2FBB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBB98u;
            // 0x2fbb9c: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbb98) {
            ctx->pc = 0x2FBCD0u;
            goto label_2fbcd0;
        }
    }
    ctx->pc = 0x2FBBA0u;
label_2fbba0:
    // 0x2fbba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fbba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fbba4:
    // 0x2fbba4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fbba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fbba8:
    // 0x2fbba8: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x2fbba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_2fbbac:
    // 0x2fbbac: 0x246396d0  addiu       $v1, $v1, -0x6930
    ctx->pc = 0x2fbbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940368));
label_2fbbb0:
    // 0x2fbbb0: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x2fbbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2fbbb4:
    // 0x2fbbb4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2fbbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2fbbb8:
    // 0x2fbbb8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2fbbbc:
    if (ctx->pc == 0x2FBBBCu) {
        ctx->pc = 0x2FBBC0u;
        goto label_2fbbc0;
    }
    ctx->pc = 0x2FBBB8u;
    {
        const bool branch_taken_0x2fbbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fbbb8) {
            ctx->pc = 0x2FBBCCu;
            goto label_2fbbcc;
        }
    }
    ctx->pc = 0x2FBBC0u;
label_2fbbc0:
    // 0x2fbbc0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2fbbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_2fbbc4:
    // 0x2fbbc4: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
label_2fbbc8:
    if (ctx->pc == 0x2FBBC8u) {
        ctx->pc = 0x2FBBC8u;
            // 0x2fbbc8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBBCCu;
        goto label_2fbbcc;
    }
    ctx->pc = 0x2FBBC4u;
    {
        const bool branch_taken_0x2fbbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2FBBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBBC4u;
            // 0x2fbbc8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbc4) {
            ctx->pc = 0x2FBBE0u;
            goto label_2fbbe0;
        }
    }
    ctx->pc = 0x2FBBCCu;
label_2fbbcc:
    // 0x2fbbcc: 0x0  nop
    ctx->pc = 0x2fbbccu;
    // NOP
label_2fbbd0:
    // 0x2fbbd0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fbbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2fbbd4:
    // 0x2fbbd4: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x2fbbd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_2fbbd8:
    // 0x2fbbd8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2fbbdc:
    if (ctx->pc == 0x2FBBDCu) {
        ctx->pc = 0x2FBBDCu;
            // 0x2fbbdc: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->pc = 0x2FBBE0u;
        goto label_2fbbe0;
    }
    ctx->pc = 0x2FBBD8u;
    {
        const bool branch_taken_0x2fbbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBBD8u;
            // 0x2fbbdc: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbbd8) {
            ctx->pc = 0x2FBBB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fbbb0;
        }
    }
    ctx->pc = 0x2FBBE0u;
label_2fbbe0:
    // 0x2fbbe0: 0x12000053  beqz        $s0, . + 4 + (0x53 << 2)
label_2fbbe4:
    if (ctx->pc == 0x2FBBE4u) {
        ctx->pc = 0x2FBBE8u;
        goto label_2fbbe8;
    }
    ctx->pc = 0x2FBBE0u;
    {
        const bool branch_taken_0x2fbbe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbbe0) {
            ctx->pc = 0x2FBD30u;
            goto label_2fbd30;
        }
    }
    ctx->pc = 0x2FBBE8u;
label_2fbbe8:
    // 0x2fbbe8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2fbbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2fbbec:
    // 0x2fbbec: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2fbbecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2fbbf0:
    // 0x2fbbf0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2fbbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2fbbf4:
    // 0x2fbbf4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fbbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fbbf8:
    // 0x2fbbf8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2fbbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2fbbfc:
    // 0x2fbbfc: 0x24849670  addiu       $a0, $a0, -0x6990
    ctx->pc = 0x2fbbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940272));
label_2fbc00:
    // 0x2fbc00: 0xac209694  sw          $zero, -0x696C($at)
    ctx->pc = 0x2fbc00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940308), GPR_U32(ctx, 0));
label_2fbc04:
    // 0x2fbc04: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x2fbc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_2fbc08:
    // 0x2fbc08: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fbc08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fbc0c:
    // 0x2fbc0c: 0xc04e748  jal         func_139D20
label_2fbc10:
    if (ctx->pc == 0x2FBC10u) {
        ctx->pc = 0x2FBC10u;
            // 0x2fbc10: 0xac20968c  sw          $zero, -0x6974($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294940300), GPR_U32(ctx, 0));
        ctx->pc = 0x2FBC14u;
        goto label_2fbc14;
    }
    ctx->pc = 0x2FBC0Cu;
    SET_GPR_U32(ctx, 31, 0x2FBC14u);
    ctx->pc = 0x2FBC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBC0Cu;
            // 0x2fbc10: 0xac20968c  sw          $zero, -0x6974($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294940300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBC14u; }
        if (ctx->pc != 0x2FBC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBC14u; }
        if (ctx->pc != 0x2FBC14u) { return; }
    }
    ctx->pc = 0x2FBC14u;
label_2fbc14:
    // 0x2fbc14: 0x24040310  addiu       $a0, $zero, 0x310
    ctx->pc = 0x2fbc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
label_2fbc18:
    // 0x2fbc18: 0xc04e638  jal         func_1398E0
label_2fbc1c:
    if (ctx->pc == 0x2FBC1Cu) {
        ctx->pc = 0x2FBC1Cu;
            // 0x2fbc1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC20u;
        goto label_2fbc20;
    }
    ctx->pc = 0x2FBC18u;
    SET_GPR_U32(ctx, 31, 0x2FBC20u);
    ctx->pc = 0x2FBC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBC18u;
            // 0x2fbc1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBC20u; }
        if (ctx->pc != 0x2FBC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBC20u; }
        if (ctx->pc != 0x2FBC20u) { return; }
    }
    ctx->pc = 0x2FBC20u;
label_2fbc20:
    // 0x2fbc20: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2fbc24:
    if (ctx->pc == 0x2FBC24u) {
        ctx->pc = 0x2FBC24u;
            // 0x2fbc24: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC28u;
        goto label_2fbc28;
    }
    ctx->pc = 0x2FBC20u;
    {
        const bool branch_taken_0x2fbc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBC20u;
            // 0x2fbc24: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc20) {
            ctx->pc = 0x2FBC9Cu;
            goto label_2fbc9c;
        }
    }
    ctx->pc = 0x2FBC28u;
label_2fbc28:
    // 0x2fbc28: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fbc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fbc2c:
    // 0x2fbc2c: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2fbc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2fbc30:
    // 0x2fbc30: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2fbc30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2fbc34:
    // 0x2fbc34: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2fbc34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fbc38:
    // 0x2fbc38: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fbc38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fbc3c:
    // 0x2fbc3c: 0x320f809  jalr        $t9
label_2fbc40:
    if (ctx->pc == 0x2FBC40u) {
        ctx->pc = 0x2FBC40u;
            // 0x2fbc40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC44u;
        goto label_2fbc44;
    }
    ctx->pc = 0x2FBC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FBC44u);
        ctx->pc = 0x2FBC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBC3Cu;
            // 0x2fbc40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FBC44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FBC44u; }
            if (ctx->pc != 0x2FBC44u) { return; }
        }
        }
    }
    ctx->pc = 0x2FBC44u;
label_2fbc44:
    // 0x2fbc44: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fbc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fbc48:
    // 0x2fbc48: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2fbc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2fbc4c:
    // 0x2fbc4c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2fbc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2fbc50:
    // 0x2fbc50: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2fbc50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fbc54:
    // 0x2fbc54: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fbc54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fbc58:
    // 0x2fbc58: 0x320f809  jalr        $t9
label_2fbc5c:
    if (ctx->pc == 0x2FBC5Cu) {
        ctx->pc = 0x2FBC5Cu;
            // 0x2fbc5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC60u;
        goto label_2fbc60;
    }
    ctx->pc = 0x2FBC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FBC60u);
        ctx->pc = 0x2FBC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBC58u;
            // 0x2fbc5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FBC60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FBC60u; }
            if (ctx->pc != 0x2FBC60u) { return; }
        }
        }
    }
    ctx->pc = 0x2FBC60u;
label_2fbc60:
    // 0x2fbc60: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fbc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fbc64:
    // 0x2fbc64: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x2fbc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_2fbc68:
    // 0x2fbc68: 0x244254d0  addiu       $v0, $v0, 0x54D0
    ctx->pc = 0x2fbc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21712));
label_2fbc6c:
    // 0x2fbc6c: 0xc04d924  jal         func_136490
label_2fbc70:
    if (ctx->pc == 0x2FBC70u) {
        ctx->pc = 0x2FBC70u;
            // 0x2fbc70: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBC74u;
        goto label_2fbc74;
    }
    ctx->pc = 0x2FBC6Cu;
    SET_GPR_U32(ctx, 31, 0x2FBC74u);
    ctx->pc = 0x2FBC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBC6Cu;
            // 0x2fbc70: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBC74u; }
        if (ctx->pc != 0x2FBC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBC74u; }
        if (ctx->pc != 0x2FBC74u) { return; }
    }
    ctx->pc = 0x2FBC74u;
label_2fbc74:
    // 0x2fbc74: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fbc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fbc78:
    // 0x2fbc78: 0x262402b0  addiu       $a0, $s1, 0x2B0
    ctx->pc = 0x2fbc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
label_2fbc7c:
    // 0x2fbc7c: 0x24426210  addiu       $v0, $v0, 0x6210
    ctx->pc = 0x2fbc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25104));
label_2fbc80:
    // 0x2fbc80: 0xc0a78d4  jal         func_29E350
label_2fbc84:
    if (ctx->pc == 0x2FBC84u) {
        ctx->pc = 0x2FBC84u;
            // 0x2fbc84: 0xae2202e0  sw          $v0, 0x2E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 2));
        ctx->pc = 0x2FBC88u;
        goto label_2fbc88;
    }
    ctx->pc = 0x2FBC80u;
    SET_GPR_U32(ctx, 31, 0x2FBC88u);
    ctx->pc = 0x2FBC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBC80u;
            // 0x2fbc84: 0xae2202e0  sw          $v0, 0x2E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E350u;
    if (runtime->hasFunction(0x29E350u)) {
        auto targetFn = runtime->lookupFunction(0x29E350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBC88u; }
        if (ctx->pc != 0x2FBC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CFuncPointMngrFv_0x29e350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FBC88u; }
        if (ctx->pc != 0x2FBC88u) { return; }
    }
    ctx->pc = 0x2FBC88u;
label_2fbc88:
    // 0x2fbc88: 0xae2002fc  sw          $zero, 0x2FC($s1)
    ctx->pc = 0x2fbc88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 764), GPR_U32(ctx, 0));
label_2fbc8c:
    // 0x2fbc8c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2fbc8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fbc90:
    // 0x2fbc90: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fbc90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fbc94:
    // 0x2fbc94: 0x320f809  jalr        $t9
label_2fbc98:
    if (ctx->pc == 0x2FBC98u) {
        ctx->pc = 0x2FBC98u;
            // 0x2fbc98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBC9Cu;
        goto label_2fbc9c;
    }
    ctx->pc = 0x2FBC94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FBC9Cu);
        ctx->pc = 0x2FBC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBC94u;
            // 0x2fbc98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FBC9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FBC9Cu; }
            if (ctx->pc != 0x2FBC9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FBC9Cu;
label_2fbc9c:
    // 0x2fbc9c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_2fbca0:
    if (ctx->pc == 0x2FBCA0u) {
        ctx->pc = 0x2FBCA0u;
            // 0x2fbca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCA4u;
        goto label_2fbca4;
    }
    ctx->pc = 0x2FBC9Cu;
    {
        const bool branch_taken_0x2fbc9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBC9Cu;
            // 0x2fbca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbc9c) {
            ctx->pc = 0x2FBCACu;
            goto label_2fbcac;
        }
    }
    ctx->pc = 0x2FBCA4u;
label_2fbca4:
    // 0x2fbca4: 0x10000041  b           . + 4 + (0x41 << 2)
label_2fbca8:
    if (ctx->pc == 0x2FBCA8u) {
        ctx->pc = 0x2FBCA8u;
            // 0x2fbca8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2FBCACu;
        goto label_2fbcac;
    }
    ctx->pc = 0x2FBCA4u;
    {
        const bool branch_taken_0x2fbca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBCA4u;
            // 0x2fbca8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbca4) {
            ctx->pc = 0x2FBDACu;
            goto label_2fbdac;
        }
    }
    ctx->pc = 0x2FBCACu;
label_2fbcac:
    // 0x2fbcac: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2fbcacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2fbcb0:
    // 0x2fbcb0: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x2fbcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
label_2fbcb4:
    // 0x2fbcb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fbcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fbcb8:
    // 0x2fbcb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fbcb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fbcbc:
    // 0x2fbcbc: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2fbcbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2fbcc0:
    // 0x2fbcc0: 0x320f809  jalr        $t9
label_2fbcc4:
    if (ctx->pc == 0x2FBCC4u) {
        ctx->pc = 0x2FBCC4u;
            // 0x2fbcc4: 0x24c69670  addiu       $a2, $a2, -0x6990 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940272));
        ctx->pc = 0x2FBCC8u;
        goto label_2fbcc8;
    }
    ctx->pc = 0x2FBCC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FBCC8u);
        ctx->pc = 0x2FBCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBCC0u;
            // 0x2fbcc4: 0x24c69670  addiu       $a2, $a2, -0x6990 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940272));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FBCC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FBCC8u; }
            if (ctx->pc != 0x2FBCC8u) { return; }
        }
        }
    }
    ctx->pc = 0x2FBCC8u;
label_2fbcc8:
    // 0x2fbcc8: 0x10000019  b           . + 4 + (0x19 << 2)
label_2fbccc:
    if (ctx->pc == 0x2FBCCCu) {
        ctx->pc = 0x2FBCD0u;
        goto label_2fbcd0;
    }
    ctx->pc = 0x2FBCC8u;
    {
        const bool branch_taken_0x2fbcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbcc8) {
            ctx->pc = 0x2FBD30u;
            goto label_2fbd30;
        }
    }
    ctx->pc = 0x2FBCD0u;
label_2fbcd0:
    // 0x2fbcd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fbcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fbcd4:
    // 0x2fbcd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fbcd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fbcd8:
    // 0x2fbcd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fbcd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fbcdc:
    // 0x2fbcdc: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x2fbcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_2fbce0:
    // 0x2fbce0: 0x246396d0  addiu       $v1, $v1, -0x6930
    ctx->pc = 0x2fbce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940368));
label_2fbce4:
    // 0x2fbce4: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x2fbce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2fbce8:
    // 0x2fbce8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2fbce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2fbcec:
    // 0x2fbcec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2fbcf0:
    if (ctx->pc == 0x2FBCF0u) {
        ctx->pc = 0x2FBCF0u;
            // 0x2fbcf0: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->pc = 0x2FBCF4u;
        goto label_2fbcf4;
    }
    ctx->pc = 0x2FBCECu;
    {
        const bool branch_taken_0x2fbcec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBCECu;
            // 0x2fbcf0: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcec) {
            ctx->pc = 0x2FBD04u;
            goto label_2fbd04;
        }
    }
    ctx->pc = 0x2FBCF4u;
label_2fbcf4:
    // 0x2fbcf4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2fbcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2fbcf8:
    // 0x2fbcf8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fbcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2fbcfc:
    // 0x2fbcfc: 0x1000000c  b           . + 4 + (0xC << 2)
label_2fbd00:
    if (ctx->pc == 0x2FBD00u) {
        ctx->pc = 0x2FBD00u;
            // 0x2fbd00: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x2FBD04u;
        goto label_2fbd04;
    }
    ctx->pc = 0x2FBCFCu;
    {
        const bool branch_taken_0x2fbcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBCFCu;
            // 0x2fbd00: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbcfc) {
            ctx->pc = 0x2FBD30u;
            goto label_2fbd30;
        }
    }
    ctx->pc = 0x2FBD04u;
label_2fbd04:
    // 0x2fbd04: 0x8ce20070  lw          $v0, 0x70($a3)
    ctx->pc = 0x2fbd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 112)));
label_2fbd08:
    // 0x2fbd08: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x2fbd08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2fbd0c:
    // 0x2fbd0c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2fbd10:
    if (ctx->pc == 0x2FBD10u) {
        ctx->pc = 0x2FBD14u;
        goto label_2fbd14;
    }
    ctx->pc = 0x2FBD0Cu;
    {
        const bool branch_taken_0x2fbd0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fbd0c) {
            ctx->pc = 0x2FBD1Cu;
            goto label_2fbd1c;
        }
    }
    ctx->pc = 0x2FBD14u;
label_2fbd14:
    // 0x2fbd14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fbd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fbd18:
    // 0x2fbd18: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2fbd18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2fbd1c:
    // 0x2fbd1c: 0x0  nop
    ctx->pc = 0x2fbd1cu;
    // NOP
label_2fbd20:
    // 0x2fbd20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fbd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2fbd24:
    // 0x2fbd24: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x2fbd24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_2fbd28:
    // 0x2fbd28: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_2fbd2c:
    if (ctx->pc == 0x2FBD2Cu) {
        ctx->pc = 0x2FBD2Cu;
            // 0x2fbd2c: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->pc = 0x2FBD30u;
        goto label_2fbd30;
    }
    ctx->pc = 0x2FBD28u;
    {
        const bool branch_taken_0x2fbd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBD28u;
            // 0x2fbd2c: 0x24c60090  addiu       $a2, $a2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd28) {
            ctx->pc = 0x2FBCE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fbce4;
        }
    }
    ctx->pc = 0x2FBD30u;
label_2fbd30:
    // 0x2fbd30: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2fbd34:
    if (ctx->pc == 0x2FBD34u) {
        ctx->pc = 0x2FBD34u;
            // 0x2fbd34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FBD38u;
        goto label_2fbd38;
    }
    ctx->pc = 0x2FBD30u;
    {
        const bool branch_taken_0x2fbd30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBD30u;
            // 0x2fbd34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd30) {
            ctx->pc = 0x2FBD40u;
            goto label_2fbd40;
        }
    }
    ctx->pc = 0x2FBD38u;
label_2fbd38:
    // 0x2fbd38: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2fbd3c:
    if (ctx->pc == 0x2FBD3Cu) {
        ctx->pc = 0x2FBD3Cu;
            // 0x2fbd3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD40u;
        goto label_2fbd40;
    }
    ctx->pc = 0x2FBD38u;
    {
        const bool branch_taken_0x2fbd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBD38u;
            // 0x2fbd3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fbd38) {
            ctx->pc = 0x2FBDA8u;
            goto label_2fbda8;
        }
    }
    ctx->pc = 0x2FBD40u;
label_2fbd40:
    // 0x2fbd40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2fbd40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2fbd44:
    // 0x2fbd44: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x2fbd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_2fbd48:
    // 0x2fbd48: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x2fbd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_2fbd4c:
    // 0x2fbd4c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2fbd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2fbd50:
    // 0x2fbd50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fbd50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fbd54:
    // 0x2fbd54: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2fbd54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2fbd58:
    // 0x2fbd58: 0x320f809  jalr        $t9
label_2fbd5c:
    if (ctx->pc == 0x2FBD5Cu) {
        ctx->pc = 0x2FBD5Cu;
            // 0x2fbd5c: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x2FBD60u;
        goto label_2fbd60;
    }
    ctx->pc = 0x2FBD58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FBD60u);
        ctx->pc = 0x2FBD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBD58u;
            // 0x2fbd5c: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FBD60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FBD60u; }
            if (ctx->pc != 0x2FBD60u) { return; }
        }
        }
    }
    ctx->pc = 0x2FBD60u;
label_2fbd60:
    // 0x2fbd60: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2fbd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2fbd64:
    // 0x2fbd64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fbd64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fbd68:
    // 0x2fbd68: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2fbd68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2fbd6c:
    // 0x2fbd6c: 0x320f809  jalr        $t9
label_2fbd70:
    if (ctx->pc == 0x2FBD70u) {
        ctx->pc = 0x2FBD70u;
            // 0x2fbd70: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2FBD74u;
        goto label_2fbd74;
    }
    ctx->pc = 0x2FBD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FBD74u);
        ctx->pc = 0x2FBD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBD6Cu;
            // 0x2fbd70: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FBD74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FBD74u; }
            if (ctx->pc != 0x2FBD74u) { return; }
        }
        }
    }
    ctx->pc = 0x2FBD74u;
label_2fbd74:
    // 0x2fbd74: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2fbd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2fbd78:
    // 0x2fbd78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fbd78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fbd7c:
    // 0x2fbd7c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2fbd7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2fbd80:
    // 0x2fbd80: 0x320f809  jalr        $t9
label_2fbd84:
    if (ctx->pc == 0x2FBD84u) {
        ctx->pc = 0x2FBD84u;
            // 0x2fbd84: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x2FBD88u;
        goto label_2fbd88;
    }
    ctx->pc = 0x2FBD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FBD88u);
        ctx->pc = 0x2FBD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBD80u;
            // 0x2fbd84: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FBD88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FBD88u; }
            if (ctx->pc != 0x2FBD88u) { return; }
        }
        }
    }
    ctx->pc = 0x2FBD88u;
label_2fbd88:
    // 0x2fbd88: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x2fbd88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_2fbd8c:
    // 0x2fbd8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fbd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2fbd90:
    // 0x2fbd90: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x2fbd90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
label_2fbd94:
    // 0x2fbd94: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x2fbd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_2fbd98:
    // 0x2fbd98: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x2fbd98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_2fbd9c:
    // 0x2fbd9c: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x2fbd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_2fbda0:
    // 0x2fbda0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fbda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fbda4:
    // 0x2fbda4: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x2fbda4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
label_2fbda8:
    // 0x2fbda8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2fbda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2fbdac:
    // 0x2fbdac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fbdacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fbdb0:
    // 0x2fbdb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fbdb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fbdb4:
    // 0x2fbdb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fbdb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fbdb8:
    // 0x2fbdb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fbdb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fbdbc:
    // 0x2fbdbc: 0x3e00008  jr          $ra
label_2fbdc0:
    if (ctx->pc == 0x2FBDC0u) {
        ctx->pc = 0x2FBDC0u;
            // 0x2fbdc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2FBDC4u;
        goto label_fallthrough_0x2fbdbc;
    }
    ctx->pc = 0x2FBDBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FBDBCu;
            // 0x2fbdc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2fbdbc:
    ctx->pc = 0x2FBDC4u;
}

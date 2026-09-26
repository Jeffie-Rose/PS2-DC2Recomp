#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: conv_new_text__FPcPc
// Address: 0x131b60 - 0x131ec0
void conv_new_text__FPcPc_0x131b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("conv_new_text__FPcPc_0x131b60");
#endif

    switch (ctx->pc) {
        case 0x131b8cu: goto label_131b8c;
        case 0x131c04u: goto label_131c04;
        case 0x131eacu: goto label_131eac;
        default: break;
    }

    ctx->pc = 0x131b60u;

    // 0x131b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x131b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x131b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x131b68: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x131B68u;
    {
        const bool branch_taken_0x131b68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x131b68) {
            ctx->pc = 0x131B7Cu;
            goto label_131b7c;
        }
    }
    ctx->pc = 0x131B70u;
    // 0x131b70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x131b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131b74: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x131B74u;
    {
        const bool branch_taken_0x131b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131b74) {
            ctx->pc = 0x131EB0u;
            goto label_131eb0;
        }
    }
    ctx->pc = 0x131B7Cu;
label_131b7c:
    // 0x131b7c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x131b7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131b80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x131b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131b84: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x131B84u;
    {
        const bool branch_taken_0x131b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131b84) {
            ctx->pc = 0x131BECu;
            goto label_131bec;
        }
    }
    ctx->pc = 0x131B8Cu;
label_131b8c:
    // 0x131b8c: 0x8163c  dsll32      $v0, $t0, 24
    ctx->pc = 0x131b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 24));
    // 0x131b90: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x131b90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x131b94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x131B94u;
    {
        const bool branch_taken_0x131b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131b94) {
            ctx->pc = 0x131BA8u;
            goto label_131ba8;
        }
    }
    ctx->pc = 0x131B9Cu;
    // 0x131b9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x131b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131ba0: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x131BA0u;
    {
        const bool branch_taken_0x131ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131ba0) {
            ctx->pc = 0x131E94u;
            goto label_131e94;
        }
    }
    ctx->pc = 0x131BA8u;
label_131ba8:
    // 0x131ba8: 0x2407005f  addiu       $a3, $zero, 0x5F
    ctx->pc = 0x131ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x131bac: 0x1447000b  bne         $v0, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x131BACu;
    {
        const bool branch_taken_0x131bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x131bac) {
            ctx->pc = 0x131BDCu;
            goto label_131bdc;
        }
    }
    ctx->pc = 0x131BB4u;
    // 0x131bb4: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x131bb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x131bb8: 0x14470008  bne         $v0, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x131BB8u;
    {
        const bool branch_taken_0x131bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x131bb8) {
            ctx->pc = 0x131BDCu;
            goto label_131bdc;
        }
    }
    ctx->pc = 0x131BC0u;
    // 0x131bc0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x131bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x131bc4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x131bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x131bc8: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x131bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x131bcc: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x131bccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x131bd0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x131bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x131bd4: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x131BD4u;
    {
        const bool branch_taken_0x131bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131bd4) {
            ctx->pc = 0x131E94u;
            goto label_131e94;
        }
    }
    ctx->pc = 0x131BDCu;
label_131bdc:
    // 0x131bdc: 0x0  nop
    ctx->pc = 0x131bdcu;
    // NOP
    // 0x131be0: 0xa0680000  sb          $t0, 0x0($v1)
    ctx->pc = 0x131be0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x131be4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x131be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x131be8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x131be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_131bec:
    // 0x131bec: 0x0  nop
    ctx->pc = 0x131becu;
    // NOP
    // 0x131bf0: 0x80a80000  lb          $t0, 0x0($a1)
    ctx->pc = 0x131bf0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131bf4: 0x1500ffe5  bnez        $t0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x131BF4u;
    {
        const bool branch_taken_0x131bf4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x131bf4) {
            ctx->pc = 0x131B8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_131b8c;
        }
    }
    ctx->pc = 0x131BFCu;
    // 0x131bfc: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x131BFCu;
    {
        const bool branch_taken_0x131bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131bfc) {
            ctx->pc = 0x131E94u;
            goto label_131e94;
        }
    }
    ctx->pc = 0x131C04u;
label_131c04:
    // 0x131c04: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x131c04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131c08: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x131C08u;
    {
        const bool branch_taken_0x131c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131c08) {
            ctx->pc = 0x131EA0u;
            goto label_131ea0;
        }
    }
    ctx->pc = 0x131C10u;
    // 0x131c10: 0x24070056  addiu       $a3, $zero, 0x56
    ctx->pc = 0x131c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x131c14: 0x10470097  beq         $v0, $a3, . + 4 + (0x97 << 2)
    ctx->pc = 0x131C14u;
    {
        const bool branch_taken_0x131c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131c14) {
            ctx->pc = 0x131E74u;
            goto label_131e74;
        }
    }
    ctx->pc = 0x131C1Cu;
    // 0x131c1c: 0x24070076  addiu       $a3, $zero, 0x76
    ctx->pc = 0x131c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x131c20: 0x10470094  beq         $v0, $a3, . + 4 + (0x94 << 2)
    ctx->pc = 0x131C20u;
    {
        const bool branch_taken_0x131c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131c20) {
            ctx->pc = 0x131E74u;
            goto label_131e74;
        }
    }
    ctx->pc = 0x131C28u;
    // 0x131c28: 0x2407004f  addiu       $a3, $zero, 0x4F
    ctx->pc = 0x131c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x131c2c: 0x10470089  beq         $v0, $a3, . + 4 + (0x89 << 2)
    ctx->pc = 0x131C2Cu;
    {
        const bool branch_taken_0x131c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131c2c) {
            ctx->pc = 0x131E54u;
            goto label_131e54;
        }
    }
    ctx->pc = 0x131C34u;
    // 0x131c34: 0x2407006f  addiu       $a3, $zero, 0x6F
    ctx->pc = 0x131c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x131c38: 0x10470086  beq         $v0, $a3, . + 4 + (0x86 << 2)
    ctx->pc = 0x131C38u;
    {
        const bool branch_taken_0x131c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131c38) {
            ctx->pc = 0x131E54u;
            goto label_131e54;
        }
    }
    ctx->pc = 0x131C40u;
    // 0x131c40: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x131c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x131c44: 0x1047007e  beq         $v0, $a3, . + 4 + (0x7E << 2)
    ctx->pc = 0x131C44u;
    {
        const bool branch_taken_0x131c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131c44) {
            ctx->pc = 0x131E40u;
            goto label_131e40;
        }
    }
    ctx->pc = 0x131C4Cu;
    // 0x131c4c: 0x24070074  addiu       $a3, $zero, 0x74
    ctx->pc = 0x131c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x131c50: 0x1047007b  beq         $v0, $a3, . + 4 + (0x7B << 2)
    ctx->pc = 0x131C50u;
    {
        const bool branch_taken_0x131c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131c50) {
            ctx->pc = 0x131E40u;
            goto label_131e40;
        }
    }
    ctx->pc = 0x131C58u;
    // 0x131c58: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x131c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x131c5c: 0x10470069  beq         $v0, $a3, . + 4 + (0x69 << 2)
    ctx->pc = 0x131C5Cu;
    {
        const bool branch_taken_0x131c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131c5c) {
            ctx->pc = 0x131E04u;
            goto label_131e04;
        }
    }
    ctx->pc = 0x131C64u;
    // 0x131c64: 0x24070062  addiu       $a3, $zero, 0x62
    ctx->pc = 0x131c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x131c68: 0x10470066  beq         $v0, $a3, . + 4 + (0x66 << 2)
    ctx->pc = 0x131C68u;
    {
        const bool branch_taken_0x131c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131c68) {
            ctx->pc = 0x131E04u;
            goto label_131e04;
        }
    }
    ctx->pc = 0x131C70u;
    // 0x131c70: 0x2407004d  addiu       $a3, $zero, 0x4D
    ctx->pc = 0x131c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x131c74: 0x1047005b  beq         $v0, $a3, . + 4 + (0x5B << 2)
    ctx->pc = 0x131C74u;
    {
        const bool branch_taken_0x131c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131c74) {
            ctx->pc = 0x131DE4u;
            goto label_131de4;
        }
    }
    ctx->pc = 0x131C7Cu;
    // 0x131c7c: 0x2407006d  addiu       $a3, $zero, 0x6D
    ctx->pc = 0x131c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x131c80: 0x10470058  beq         $v0, $a3, . + 4 + (0x58 << 2)
    ctx->pc = 0x131C80u;
    {
        const bool branch_taken_0x131c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131c80) {
            ctx->pc = 0x131DE4u;
            goto label_131de4;
        }
    }
    ctx->pc = 0x131C88u;
    // 0x131c88: 0x24070053  addiu       $a3, $zero, 0x53
    ctx->pc = 0x131c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x131c8c: 0x1047004d  beq         $v0, $a3, . + 4 + (0x4D << 2)
    ctx->pc = 0x131C8Cu;
    {
        const bool branch_taken_0x131c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131c8c) {
            ctx->pc = 0x131DC4u;
            goto label_131dc4;
        }
    }
    ctx->pc = 0x131C94u;
    // 0x131c94: 0x24070073  addiu       $a3, $zero, 0x73
    ctx->pc = 0x131c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x131c98: 0x1047004a  beq         $v0, $a3, . + 4 + (0x4A << 2)
    ctx->pc = 0x131C98u;
    {
        const bool branch_taken_0x131c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131c98) {
            ctx->pc = 0x131DC4u;
            goto label_131dc4;
        }
    }
    ctx->pc = 0x131CA0u;
    // 0x131ca0: 0x24070046  addiu       $a3, $zero, 0x46
    ctx->pc = 0x131ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x131ca4: 0x1047003f  beq         $v0, $a3, . + 4 + (0x3F << 2)
    ctx->pc = 0x131CA4u;
    {
        const bool branch_taken_0x131ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131ca4) {
            ctx->pc = 0x131DA4u;
            goto label_131da4;
        }
    }
    ctx->pc = 0x131CACu;
    // 0x131cac: 0x24070066  addiu       $a3, $zero, 0x66
    ctx->pc = 0x131cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x131cb0: 0x1047003c  beq         $v0, $a3, . + 4 + (0x3C << 2)
    ctx->pc = 0x131CB0u;
    {
        const bool branch_taken_0x131cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131cb0) {
            ctx->pc = 0x131DA4u;
            goto label_131da4;
        }
    }
    ctx->pc = 0x131CB8u;
    // 0x131cb8: 0x2407005a  addiu       $a3, $zero, 0x5A
    ctx->pc = 0x131cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x131cbc: 0x10470032  beq         $v0, $a3, . + 4 + (0x32 << 2)
    ctx->pc = 0x131CBCu;
    {
        const bool branch_taken_0x131cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131cbc) {
            ctx->pc = 0x131D88u;
            goto label_131d88;
        }
    }
    ctx->pc = 0x131CC4u;
    // 0x131cc4: 0x2407007a  addiu       $a3, $zero, 0x7A
    ctx->pc = 0x131cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x131cc8: 0x1047002f  beq         $v0, $a3, . + 4 + (0x2F << 2)
    ctx->pc = 0x131CC8u;
    {
        const bool branch_taken_0x131cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131cc8) {
            ctx->pc = 0x131D88u;
            goto label_131d88;
        }
    }
    ctx->pc = 0x131CD0u;
    // 0x131cd0: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x131cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x131cd4: 0x10470021  beq         $v0, $a3, . + 4 + (0x21 << 2)
    ctx->pc = 0x131CD4u;
    {
        const bool branch_taken_0x131cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131cd4) {
            ctx->pc = 0x131D5Cu;
            goto label_131d5c;
        }
    }
    ctx->pc = 0x131CDCu;
    // 0x131cdc: 0x24070061  addiu       $a3, $zero, 0x61
    ctx->pc = 0x131cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x131ce0: 0x1047001e  beq         $v0, $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x131CE0u;
    {
        const bool branch_taken_0x131ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131ce0) {
            ctx->pc = 0x131D5Cu;
            goto label_131d5c;
        }
    }
    ctx->pc = 0x131CE8u;
    // 0x131ce8: 0x2407004e  addiu       $a3, $zero, 0x4E
    ctx->pc = 0x131ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x131cec: 0x10470013  beq         $v0, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x131CECu;
    {
        const bool branch_taken_0x131cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131cec) {
            ctx->pc = 0x131D3Cu;
            goto label_131d3c;
        }
    }
    ctx->pc = 0x131CF4u;
    // 0x131cf4: 0x2407006e  addiu       $a3, $zero, 0x6E
    ctx->pc = 0x131cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x131cf8: 0x10470010  beq         $v0, $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x131CF8u;
    {
        const bool branch_taken_0x131cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131cf8) {
            ctx->pc = 0x131D3Cu;
            goto label_131d3c;
        }
    }
    ctx->pc = 0x131D00u;
    // 0x131d00: 0x24070043  addiu       $a3, $zero, 0x43
    ctx->pc = 0x131d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x131d04: 0x10470006  beq         $v0, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x131D04u;
    {
        const bool branch_taken_0x131d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131d04) {
            ctx->pc = 0x131D20u;
            goto label_131d20;
        }
    }
    ctx->pc = 0x131D0Cu;
    // 0x131d0c: 0x24070063  addiu       $a3, $zero, 0x63
    ctx->pc = 0x131d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x131d10: 0x10470003  beq         $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x131D10u;
    {
        const bool branch_taken_0x131d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x131d10) {
            ctx->pc = 0x131D20u;
            goto label_131d20;
        }
    }
    ctx->pc = 0x131D18u;
    // 0x131d18: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x131D18u;
    {
        const bool branch_taken_0x131d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d18) {
            ctx->pc = 0x131E8Cu;
            goto label_131e8c;
        }
    }
    ctx->pc = 0x131D20u;
label_131d20:
    // 0x131d20: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x131d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x131d24: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x131d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x131d28: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x131d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x131d2c: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x131d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x131d30: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x131d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x131d34: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x131D34u;
    {
        const bool branch_taken_0x131d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d34) {
            ctx->pc = 0x131E8Cu;
            goto label_131e8c;
        }
    }
    ctx->pc = 0x131D3Cu;
label_131d3c:
    // 0x131d3c: 0x0  nop
    ctx->pc = 0x131d3cu;
    // NOP
    // 0x131d40: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x131d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x131d44: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x131d44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x131d48: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x131d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x131d4c: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x131d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x131d50: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x131d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x131d54: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x131D54u;
    {
        const bool branch_taken_0x131d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d54) {
            ctx->pc = 0x131E8Cu;
            goto label_131e8c;
        }
    }
    ctx->pc = 0x131D5Cu;
label_131d5c:
    // 0x131d5c: 0x0  nop
    ctx->pc = 0x131d5cu;
    // NOP
    // 0x131d60: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x131d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x131d64: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x131d64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x131d68: 0x80a20001  lb          $v0, 0x1($a1)
    ctx->pc = 0x131d68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x131d6c: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x131d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x131d70: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x131d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x131d74: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x131d74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131d78: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x131d78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x131d7c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x131d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x131d80: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x131D80u;
    {
        const bool branch_taken_0x131d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d80) {
            ctx->pc = 0x131E8Cu;
            goto label_131e8c;
        }
    }
    ctx->pc = 0x131D88u;
label_131d88:
    // 0x131d88: 0x2402007a  addiu       $v0, $zero, 0x7A
    ctx->pc = 0x131d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x131d8c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x131d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x131d90: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x131d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x131d94: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x131d94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x131d98: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x131d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x131d9c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x131D9Cu;
    {
        const bool branch_taken_0x131d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131d9c) {
            ctx->pc = 0x131E8Cu;
            goto label_131e8c;
        }
    }
    ctx->pc = 0x131DA4u;
label_131da4:
    // 0x131da4: 0x0  nop
    ctx->pc = 0x131da4u;
    // NOP
    // 0x131da8: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x131da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x131dac: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x131dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x131db0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x131db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x131db4: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x131db4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x131db8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x131db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x131dbc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x131DBCu;
    {
        const bool branch_taken_0x131dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131dbc) {
            ctx->pc = 0x131E8Cu;
            goto label_131e8c;
        }
    }
    ctx->pc = 0x131DC4u;
label_131dc4:
    // 0x131dc4: 0x0  nop
    ctx->pc = 0x131dc4u;
    // NOP
    // 0x131dc8: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x131dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x131dcc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x131dccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x131dd0: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x131dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x131dd4: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x131dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x131dd8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x131dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x131ddc: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x131DDCu;
    {
        const bool branch_taken_0x131ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131ddc) {
            ctx->pc = 0x131E8Cu;
            goto label_131e8c;
        }
    }
    ctx->pc = 0x131DE4u;
label_131de4:
    // 0x131de4: 0x0  nop
    ctx->pc = 0x131de4u;
    // NOP
    // 0x131de8: 0x2402006d  addiu       $v0, $zero, 0x6D
    ctx->pc = 0x131de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x131dec: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x131decu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x131df0: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x131df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x131df4: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x131df4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x131df8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x131df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x131dfc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x131DFCu;
    {
        const bool branch_taken_0x131dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131dfc) {
            ctx->pc = 0x131E8Cu;
            goto label_131e8c;
        }
    }
    ctx->pc = 0x131E04u;
label_131e04:
    // 0x131e04: 0x0  nop
    ctx->pc = 0x131e04u;
    // NOP
    // 0x131e08: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x131e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x131e0c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x131e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x131e10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x131e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x131e14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x131e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x131e18: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x131e18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x131e1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x131E1Cu;
    {
        const bool branch_taken_0x131e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131e1c) {
            ctx->pc = 0x131E30u;
            goto label_131e30;
        }
    }
    ctx->pc = 0x131E24u;
    // 0x131e24: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x131e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x131e28: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x131E28u;
    {
        const bool branch_taken_0x131e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131e28) {
            ctx->pc = 0x131E8Cu;
            goto label_131e8c;
        }
    }
    ctx->pc = 0x131E30u;
label_131e30:
    // 0x131e30: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x131e30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x131e34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x131e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x131e38: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x131E38u;
    {
        const bool branch_taken_0x131e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131e38) {
            ctx->pc = 0x131E8Cu;
            goto label_131e8c;
        }
    }
    ctx->pc = 0x131E40u;
label_131e40:
    // 0x131e40: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x131e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x131e44: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x131e44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x131e48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x131e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x131e4c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x131E4Cu;
    {
        const bool branch_taken_0x131e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131e4c) {
            ctx->pc = 0x131E8Cu;
            goto label_131e8c;
        }
    }
    ctx->pc = 0x131E54u;
label_131e54:
    // 0x131e54: 0x0  nop
    ctx->pc = 0x131e54u;
    // NOP
    // 0x131e58: 0x2402006f  addiu       $v0, $zero, 0x6F
    ctx->pc = 0x131e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x131e5c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x131e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x131e60: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x131e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x131e64: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x131e64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x131e68: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x131e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x131e6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x131E6Cu;
    {
        const bool branch_taken_0x131e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131e6c) {
            ctx->pc = 0x131E8Cu;
            goto label_131e8c;
        }
    }
    ctx->pc = 0x131E74u;
label_131e74:
    // 0x131e74: 0x0  nop
    ctx->pc = 0x131e74u;
    // NOP
    // 0x131e78: 0x24020076  addiu       $v0, $zero, 0x76
    ctx->pc = 0x131e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x131e7c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x131e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x131e80: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x131e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x131e84: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x131e84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x131e88: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x131e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_131e8c:
    // 0x131e8c: 0x0  nop
    ctx->pc = 0x131e8cu;
    // NOP
    // 0x131e90: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x131e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_131e94:
    // 0x131e94: 0x0  nop
    ctx->pc = 0x131e94u;
    // NOP
    // 0x131e98: 0x14c0ff5a  bnez        $a2, . + 4 + (-0xA6 << 2)
    ctx->pc = 0x131E98u;
    {
        const bool branch_taken_0x131e98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x131e98) {
            ctx->pc = 0x131C04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_131c04;
        }
    }
    ctx->pc = 0x131EA0u;
label_131ea0:
    // 0x131ea0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x131ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x131ea4: 0xc04a422  jal         func_129088
    ctx->pc = 0x131EA4u;
    SET_GPR_U32(ctx, 31, 0x131EACu);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131EACu; }
        if (ctx->pc != 0x131EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131EACu; }
        if (ctx->pc != 0x131EACu) { return; }
    }
    ctx->pc = 0x131EACu;
label_131eac:
    // 0x131eac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x131eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_131eb0:
    // 0x131eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131eb4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x131eb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x131eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x131EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131EC0u;
}

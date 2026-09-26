#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetFrameAttr__FP8mgCFramei
// Address: 0x131fa0 - 0x1325f8
void mgSetFrameAttr__FP8mgCFramei_0x131fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetFrameAttr__FP8mgCFramei_0x131fa0");
#endif

    switch (ctx->pc) {
        case 0x131fd8u: goto label_131fd8;
        case 0x132024u: goto label_132024;
        case 0x13208cu: goto label_13208c;
        case 0x1320a0u: goto label_1320a0;
        case 0x132304u: goto label_132304;
        case 0x132560u: goto label_132560;
        case 0x1325b0u: goto label_1325b0;
        case 0x1325c0u: goto label_1325c0;
        default: break;
    }

    ctx->pc = 0x131fa0u;

label_131fa0:
    // 0x131fa0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x131fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x131fa4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x131fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x131fa8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x131fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x131fac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x131facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x131fb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x131fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x131fb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x131fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x131fb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x131fbc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x131fbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131fc0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x131fc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131fc4: 0x12600183  beqz        $s3, . + 4 + (0x183 << 2)
    ctx->pc = 0x131FC4u;
    {
        const bool branch_taken_0x131fc4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x131fc4) {
            ctx->pc = 0x1325D4u;
            goto label_1325d4;
        }
    }
    ctx->pc = 0x131FCCu;
    // 0x131fcc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x131fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x131fd0: 0xc04d6d8  jal         func_135B60
    ctx->pc = 0x131FD0u;
    SET_GPR_U32(ctx, 31, 0x131FD8u);
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131FD8u; }
        if (ctx->pc != 0x131FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131FD8u; }
        if (ctx->pc != 0x131FD8u) { return; }
    }
    ctx->pc = 0x131FD8u;
label_131fd8:
    // 0x131fd8: 0x8e7000f4  lw          $s0, 0xF4($s3)
    ctx->pc = 0x131fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
    // 0x131fdc: 0x16000002  bnez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x131FDCu;
    {
        const bool branch_taken_0x131fdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x131fdc) {
            ctx->pc = 0x131FE8u;
            goto label_131fe8;
        }
    }
    ctx->pc = 0x131FE4u;
    // 0x131fe4: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x131fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_131fe8:
    // 0x131fe8: 0x8e710050  lw          $s1, 0x50($s3)
    ctx->pc = 0x131fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x131fec: 0x83828718  lb          $v0, -0x78E8($gp)
    ctx->pc = 0x131fecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x131ff0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x131FF0u;
    {
        const bool branch_taken_0x131ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131ff0) {
            ctx->pc = 0x13200Cu;
            goto label_13200c;
        }
    }
    ctx->pc = 0x131FF8u;
    // 0x131ff8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x131ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x131ffc: 0x24422530  addiu       $v0, $v0, 0x2530
    ctx->pc = 0x131ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9520));
    // 0x132000: 0xaf828714  sw          $v0, -0x78EC($gp)
    ctx->pc = 0x132000u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936340), GPR_U32(ctx, 2));
    // 0x132004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132008: 0xa3828718  sb          $v0, -0x78E8($gp)
    ctx->pc = 0x132008u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936344), (uint8_t)GPR_U32(ctx, 2));
label_13200c:
    // 0x13200c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13200Cu;
    {
        const bool branch_taken_0x13200c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13200c) {
            ctx->pc = 0x13201Cu;
            goto label_13201c;
        }
    }
    ctx->pc = 0x132014u;
    // 0x132014: 0x8f918714  lw          $s1, -0x78EC($gp)
    ctx->pc = 0x132014u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x132018: 0x0  nop
    ctx->pc = 0x132018u;
    // NOP
label_13201c:
    // 0x13201c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x13201Cu;
    {
        const bool branch_taken_0x13201c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13201c) {
            ctx->pc = 0x13206Cu;
            goto label_13206c;
        }
    }
    ctx->pc = 0x132024u;
label_132024:
    // 0x132024: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x132024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x132028: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x132028u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x13202c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13202Cu;
    {
        const bool branch_taken_0x13202c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13202c) {
            ctx->pc = 0x13203Cu;
            goto label_13203c;
        }
    }
    ctx->pc = 0x132034u;
    // 0x132034: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x132034u;
    {
        const bool branch_taken_0x132034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132034) {
            ctx->pc = 0x13207Cu;
            goto label_13207c;
        }
    }
    ctx->pc = 0x13203Cu;
label_13203c:
    // 0x13203c: 0x0  nop
    ctx->pc = 0x13203cu;
    // NOP
    // 0x132040: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x132040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x132044: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x132044u;
    {
        const bool branch_taken_0x132044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x132044) {
            ctx->pc = 0x132064u;
            goto label_132064;
        }
    }
    ctx->pc = 0x13204Cu;
    // 0x13204c: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x13204cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x132050: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x132050u;
    {
        const bool branch_taken_0x132050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x132050) {
            ctx->pc = 0x132064u;
            goto label_132064;
        }
    }
    ctx->pc = 0x132058u;
    // 0x132058: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x132058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x13205c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13205Cu;
    {
        const bool branch_taken_0x13205c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13205c) {
            ctx->pc = 0x13207Cu;
            goto label_13207c;
        }
    }
    ctx->pc = 0x132064u;
label_132064:
    // 0x132064: 0x0  nop
    ctx->pc = 0x132064u;
    // NOP
    // 0x132068: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x132068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13206c:
    // 0x13206c: 0x0  nop
    ctx->pc = 0x13206cu;
    // NOP
    // 0x132070: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x132070u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x132074: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x132074u;
    {
        const bool branch_taken_0x132074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132074) {
            ctx->pc = 0x132024u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_132024;
        }
    }
    ctx->pc = 0x13207Cu;
label_13207c:
    // 0x13207c: 0x0  nop
    ctx->pc = 0x13207cu;
    // NOP
    // 0x132080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x132080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132084: 0xc04a422  jal         func_129088
    ctx->pc = 0x132084u;
    SET_GPR_U32(ctx, 31, 0x13208Cu);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13208Cu; }
        if (ctx->pc != 0x13208Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13208Cu; }
        if (ctx->pc != 0x13208Cu) { return; }
    }
    ctx->pc = 0x13208Cu;
label_13208c:
    // 0x13208c: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x13208cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x132090: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x132090u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x132094: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x132094u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132098: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x132098u;
    {
        const bool branch_taken_0x132098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132098) {
            ctx->pc = 0x13258Cu;
            goto label_13258c;
        }
    }
    ctx->pc = 0x1320A0u;
label_1320a0:
    // 0x1320a0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1320a0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1320a4: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1320a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1320a8: 0x24040056  addiu       $a0, $zero, 0x56
    ctx->pc = 0x1320a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1320ac: 0x10640107  beq         $v1, $a0, . + 4 + (0x107 << 2)
    ctx->pc = 0x1320ACu;
    {
        const bool branch_taken_0x1320ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1320ac) {
            ctx->pc = 0x1324CCu;
            goto label_1324cc;
        }
    }
    ctx->pc = 0x1320B4u;
    // 0x1320b4: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x1320b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x1320b8: 0x10640104  beq         $v1, $a0, . + 4 + (0x104 << 2)
    ctx->pc = 0x1320B8u;
    {
        const bool branch_taken_0x1320b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1320b8) {
            ctx->pc = 0x1324CCu;
            goto label_1324cc;
        }
    }
    ctx->pc = 0x1320C0u;
    // 0x1320c0: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x1320c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1320c4: 0x106400f1  beq         $v1, $a0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x1320C4u;
    {
        const bool branch_taken_0x1320c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1320c4) {
            ctx->pc = 0x13248Cu;
            goto label_13248c;
        }
    }
    ctx->pc = 0x1320CCu;
    // 0x1320cc: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x1320ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1320d0: 0x106400ee  beq         $v1, $a0, . + 4 + (0xEE << 2)
    ctx->pc = 0x1320D0u;
    {
        const bool branch_taken_0x1320d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1320d0) {
            ctx->pc = 0x13248Cu;
            goto label_13248c;
        }
    }
    ctx->pc = 0x1320D8u;
    // 0x1320d8: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x1320d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1320dc: 0x106400e5  beq         $v1, $a0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x1320DCu;
    {
        const bool branch_taken_0x1320dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1320dc) {
            ctx->pc = 0x132474u;
            goto label_132474;
        }
    }
    ctx->pc = 0x1320E4u;
    // 0x1320e4: 0x24040074  addiu       $a0, $zero, 0x74
    ctx->pc = 0x1320e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x1320e8: 0x106400e2  beq         $v1, $a0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x1320E8u;
    {
        const bool branch_taken_0x1320e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1320e8) {
            ctx->pc = 0x132474u;
            goto label_132474;
        }
    }
    ctx->pc = 0x1320F0u;
    // 0x1320f0: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1320f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1320f4: 0x106400c7  beq         $v1, $a0, . + 4 + (0xC7 << 2)
    ctx->pc = 0x1320F4u;
    {
        const bool branch_taken_0x1320f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1320f4) {
            ctx->pc = 0x132414u;
            goto label_132414;
        }
    }
    ctx->pc = 0x1320FCu;
    // 0x1320fc: 0x24040062  addiu       $a0, $zero, 0x62
    ctx->pc = 0x1320fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x132100: 0x106400c4  beq         $v1, $a0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x132100u;
    {
        const bool branch_taken_0x132100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x132100) {
            ctx->pc = 0x132414u;
            goto label_132414;
        }
    }
    ctx->pc = 0x132108u;
    // 0x132108: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x132108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x13210c: 0x106400ba  beq         $v1, $a0, . + 4 + (0xBA << 2)
    ctx->pc = 0x13210Cu;
    {
        const bool branch_taken_0x13210c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x13210c) {
            ctx->pc = 0x1323F8u;
            goto label_1323f8;
        }
    }
    ctx->pc = 0x132114u;
    // 0x132114: 0x2404006d  addiu       $a0, $zero, 0x6D
    ctx->pc = 0x132114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    // 0x132118: 0x106400b7  beq         $v1, $a0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x132118u;
    {
        const bool branch_taken_0x132118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x132118) {
            ctx->pc = 0x1323F8u;
            goto label_1323f8;
        }
    }
    ctx->pc = 0x132120u;
    // 0x132120: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x132120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x132124: 0x106400ab  beq         $v1, $a0, . + 4 + (0xAB << 2)
    ctx->pc = 0x132124u;
    {
        const bool branch_taken_0x132124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x132124) {
            ctx->pc = 0x1323D4u;
            goto label_1323d4;
        }
    }
    ctx->pc = 0x13212Cu;
    // 0x13212c: 0x24040073  addiu       $a0, $zero, 0x73
    ctx->pc = 0x13212cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x132130: 0x106400a8  beq         $v1, $a0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x132130u;
    {
        const bool branch_taken_0x132130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x132130) {
            ctx->pc = 0x1323D4u;
            goto label_1323d4;
        }
    }
    ctx->pc = 0x132138u;
    // 0x132138: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x132138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x13213c: 0x1064009d  beq         $v1, $a0, . + 4 + (0x9D << 2)
    ctx->pc = 0x13213Cu;
    {
        const bool branch_taken_0x13213c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x13213c) {
            ctx->pc = 0x1323B4u;
            goto label_1323b4;
        }
    }
    ctx->pc = 0x132144u;
    // 0x132144: 0x24040066  addiu       $a0, $zero, 0x66
    ctx->pc = 0x132144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x132148: 0x1064009a  beq         $v1, $a0, . + 4 + (0x9A << 2)
    ctx->pc = 0x132148u;
    {
        const bool branch_taken_0x132148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x132148) {
            ctx->pc = 0x1323B4u;
            goto label_1323b4;
        }
    }
    ctx->pc = 0x132150u;
    // 0x132150: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x132150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x132154: 0x10640071  beq         $v1, $a0, . + 4 + (0x71 << 2)
    ctx->pc = 0x132154u;
    {
        const bool branch_taken_0x132154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x132154) {
            ctx->pc = 0x13231Cu;
            goto label_13231c;
        }
    }
    ctx->pc = 0x13215Cu;
    // 0x13215c: 0x2404007a  addiu       $a0, $zero, 0x7A
    ctx->pc = 0x13215cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x132160: 0x1064006e  beq         $v1, $a0, . + 4 + (0x6E << 2)
    ctx->pc = 0x132160u;
    {
        const bool branch_taken_0x132160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x132160) {
            ctx->pc = 0x13231Cu;
            goto label_13231c;
        }
    }
    ctx->pc = 0x132168u;
    // 0x132168: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x132168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x13216c: 0x10640024  beq         $v1, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x13216Cu;
    {
        const bool branch_taken_0x13216c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x13216c) {
            ctx->pc = 0x132200u;
            goto label_132200;
        }
    }
    ctx->pc = 0x132174u;
    // 0x132174: 0x24040061  addiu       $a0, $zero, 0x61
    ctx->pc = 0x132174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x132178: 0x10640021  beq         $v1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x132178u;
    {
        const bool branch_taken_0x132178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x132178) {
            ctx->pc = 0x132200u;
            goto label_132200;
        }
    }
    ctx->pc = 0x132180u;
    // 0x132180: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x132180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x132184: 0x10640016  beq         $v1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x132184u;
    {
        const bool branch_taken_0x132184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x132184) {
            ctx->pc = 0x1321E0u;
            goto label_1321e0;
        }
    }
    ctx->pc = 0x13218Cu;
    // 0x13218c: 0x2404006e  addiu       $a0, $zero, 0x6E
    ctx->pc = 0x13218cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x132190: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x132190u;
    {
        const bool branch_taken_0x132190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x132190) {
            ctx->pc = 0x1321E0u;
            goto label_1321e0;
        }
    }
    ctx->pc = 0x132198u;
    // 0x132198: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x132198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x13219c: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13219Cu;
    {
        const bool branch_taken_0x13219c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x13219c) {
            ctx->pc = 0x1321B8u;
            goto label_1321b8;
        }
    }
    ctx->pc = 0x1321A4u;
    // 0x1321a4: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x1321a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1321a8: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1321A8u;
    {
        const bool branch_taken_0x1321a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1321a8) {
            ctx->pc = 0x1321B8u;
            goto label_1321b8;
        }
    }
    ctx->pc = 0x1321B0u;
    // 0x1321b0: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x1321B0u;
    {
        const bool branch_taken_0x1321b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1321b0) {
            ctx->pc = 0x132534u;
            goto label_132534;
        }
    }
    ctx->pc = 0x1321B8u;
label_1321b8:
    // 0x1321b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1321b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1321bc: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1321bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1321c0: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x1321c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1321c4: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x1321c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x1321c8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1321c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1321cc: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x1321ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x1321d0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1321d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1321d4: 0x346b8000  ori         $t3, $v1, 0x8000
    ctx->pc = 0x1321d4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1321d8: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x1321D8u;
    {
        const bool branch_taken_0x1321d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1321d8) {
            ctx->pc = 0x132534u;
            goto label_132534;
        }
    }
    ctx->pc = 0x1321E0u;
label_1321e0:
    // 0x1321e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1321e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1321e4: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1321e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1321e8: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x1321e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1321ec: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1321ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1321f0: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1321f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1321f4: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x1321f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1321f8: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x1321F8u;
    {
        const bool branch_taken_0x1321f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1321f8) {
            ctx->pc = 0x132534u;
            goto label_132534;
        }
    }
    ctx->pc = 0x132200u;
label_132200:
    // 0x132200: 0x82230001  lb          $v1, 0x1($s1)
    ctx->pc = 0x132200u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x132204: 0xa3a300fc  sb          $v1, 0xFC($sp)
    ctx->pc = 0x132204u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 252), (uint8_t)GPR_U32(ctx, 3));
    // 0x132208: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x132208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x13220c: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x13220cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x132210: 0x27a500fd  addiu       $a1, $sp, 0xFD
    ctx->pc = 0x132210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 253));
    // 0x132214: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x132214u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x132218: 0xa3a000fe  sb          $zero, 0xFE($sp)
    ctx->pc = 0x132218u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 254), (uint8_t)GPR_U32(ctx, 0));
    // 0x13221c: 0x83a400fc  lb          $a0, 0xFC($sp)
    ctx->pc = 0x13221cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x132220: 0x28830061  slti        $v1, $a0, 0x61
    ctx->pc = 0x132220u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x132224: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x132224u;
    {
        const bool branch_taken_0x132224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x132224) {
            ctx->pc = 0x132240u;
            goto label_132240;
        }
    }
    ctx->pc = 0x13222Cu;
    // 0x13222c: 0x2881007b  slti        $at, $a0, 0x7B
    ctx->pc = 0x13222cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)123) ? 1 : 0);
    // 0x132230: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x132230u;
    {
        const bool branch_taken_0x132230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x132230) {
            ctx->pc = 0x132240u;
            goto label_132240;
        }
    }
    ctx->pc = 0x132238u;
    // 0x132238: 0x2483ffe0  addiu       $v1, $a0, -0x20
    ctx->pc = 0x132238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x13223c: 0xa3a300fc  sb          $v1, 0xFC($sp)
    ctx->pc = 0x13223cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 252), (uint8_t)GPR_U32(ctx, 3));
label_132240:
    // 0x132240: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x132240u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x132244: 0x28830061  slti        $v1, $a0, 0x61
    ctx->pc = 0x132244u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x132248: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x132248u;
    {
        const bool branch_taken_0x132248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x132248) {
            ctx->pc = 0x132264u;
            goto label_132264;
        }
    }
    ctx->pc = 0x132250u;
    // 0x132250: 0x2881007b  slti        $at, $a0, 0x7B
    ctx->pc = 0x132250u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)123) ? 1 : 0);
    // 0x132254: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x132254u;
    {
        const bool branch_taken_0x132254 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x132254) {
            ctx->pc = 0x132264u;
            goto label_132264;
        }
    }
    ctx->pc = 0x13225Cu;
    // 0x13225c: 0x2483ffe0  addiu       $v1, $a0, -0x20
    ctx->pc = 0x13225cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x132260: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x132260u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_132264:
    // 0x132264: 0x0  nop
    ctx->pc = 0x132264u;
    // NOP
    // 0x132268: 0x83a600fc  lb          $a2, 0xFC($sp)
    ctx->pc = 0x132268u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x13226c: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x13226cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x132270: 0x14c40009  bne         $a2, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x132270u;
    {
        const bool branch_taken_0x132270 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x132270) {
            ctx->pc = 0x132298u;
            goto label_132298;
        }
    }
    ctx->pc = 0x132278u;
    // 0x132278: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x132278u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13227c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13227Cu;
    {
        const bool branch_taken_0x13227c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x13227c) {
            ctx->pc = 0x132298u;
            goto label_132298;
        }
    }
    ctx->pc = 0x132284u;
    // 0x132284: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x132284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x132288: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x132288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x13228c: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x13228cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x132290: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x132290u;
    {
        const bool branch_taken_0x132290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132290) {
            ctx->pc = 0x132534u;
            goto label_132534;
        }
    }
    ctx->pc = 0x132298u;
label_132298:
    // 0x132298: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x132298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x13229c: 0x14c40009  bne         $a2, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13229Cu;
    {
        const bool branch_taken_0x13229c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x13229c) {
            ctx->pc = 0x1322C4u;
            goto label_1322c4;
        }
    }
    ctx->pc = 0x1322A4u;
    // 0x1322a4: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x1322a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1322a8: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1322A8u;
    {
        const bool branch_taken_0x1322a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1322a8) {
            ctx->pc = 0x1322C4u;
            goto label_1322c4;
        }
    }
    ctx->pc = 0x1322B0u;
    // 0x1322b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1322b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1322b4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1322b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1322b8: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x1322b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1322bc: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x1322BCu;
    {
        const bool branch_taken_0x1322bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1322bc) {
            ctx->pc = 0x132534u;
            goto label_132534;
        }
    }
    ctx->pc = 0x1322C4u;
label_1322c4:
    // 0x1322c4: 0x0  nop
    ctx->pc = 0x1322c4u;
    // NOP
    // 0x1322c8: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x1322c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1322cc: 0x14c30009  bne         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1322CCu;
    {
        const bool branch_taken_0x1322cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1322cc) {
            ctx->pc = 0x1322F4u;
            goto label_1322f4;
        }
    }
    ctx->pc = 0x1322D4u;
    // 0x1322d4: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x1322d4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1322d8: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x1322d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1322dc: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1322DCu;
    {
        const bool branch_taken_0x1322dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1322dc) {
            ctx->pc = 0x1322F4u;
            goto label_1322f4;
        }
    }
    ctx->pc = 0x1322E4u;
    // 0x1322e4: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x1322e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1322e8: 0xae0b0004  sw          $t3, 0x4($s0)
    ctx->pc = 0x1322e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 11));
    // 0x1322ec: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x1322ECu;
    {
        const bool branch_taken_0x1322ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1322ec) {
            ctx->pc = 0x132534u;
            goto label_132534;
        }
    }
    ctx->pc = 0x1322F4u;
label_1322f4:
    // 0x1322f4: 0x0  nop
    ctx->pc = 0x1322f4u;
    // NOP
    // 0x1322f8: 0x27a400fc  addiu       $a0, $sp, 0xFC
    ctx->pc = 0x1322f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x1322fc: 0xc04c7b0  jal         func_131EC0
    ctx->pc = 0x1322FCu;
    SET_GPR_U32(ctx, 31, 0x132304u);
    ctx->pc = 0x131EC0u;
    if (runtime->hasFunction(0x131EC0u)) {
        auto targetFn = runtime->lookupFunction(0x131EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132304u; }
        if (ctx->pc != 0x132304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        htoi__FPc_0x131ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132304u; }
        if (ctx->pc != 0x132304u) { return; }
    }
    ctx->pc = 0x132304u;
label_132304:
    // 0x132304: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x132304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x132308: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x132308u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x13230c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x13230cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x132310: 0x356b0002  ori         $t3, $t3, 0x2
    ctx->pc = 0x132310u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)2);
    // 0x132314: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x132314u;
    {
        const bool branch_taken_0x132314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132314) {
            ctx->pc = 0x132534u;
            goto label_132534;
        }
    }
    ctx->pc = 0x13231Cu;
label_13231c:
    // 0x13231c: 0x0  nop
    ctx->pc = 0x13231cu;
    // NOP
    // 0x132320: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x132320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x132324: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x132324u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x132328: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x132328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x13232c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13232Cu;
    {
        const bool branch_taken_0x13232c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13232c) {
            ctx->pc = 0x132340u;
            goto label_132340;
        }
    }
    ctx->pc = 0x132334u;
    // 0x132334: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x132334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x132338: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x132338u;
    {
        const bool branch_taken_0x132338 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x132338) {
            ctx->pc = 0x13237Cu;
            goto label_13237c;
        }
    }
    ctx->pc = 0x132340u;
label_132340:
    // 0x132340: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x132340u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x132344: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x132344u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x132348: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x132348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x13234c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13234Cu;
    {
        const bool branch_taken_0x13234c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13234c) {
            ctx->pc = 0x132368u;
            goto label_132368;
        }
    }
    ctx->pc = 0x132354u;
    // 0x132354: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x132354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x132358: 0x3463a3d7  ori         $v1, $v1, 0xA3D7
    ctx->pc = 0x132358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41943);
    // 0x13235c: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x13235cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x132360: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x132360u;
    {
        const bool branch_taken_0x132360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132360) {
            ctx->pc = 0x13236Cu;
            goto label_13236c;
        }
    }
    ctx->pc = 0x132368u;
label_132368:
    // 0x132368: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x132368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_13236c:
    // 0x13236c: 0x0  nop
    ctx->pc = 0x13236cu;
    // NOP
    // 0x132370: 0x3c0b0020  lui         $t3, 0x20
    ctx->pc = 0x132370u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32 << 16));
    // 0x132374: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x132374u;
    {
        const bool branch_taken_0x132374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132374) {
            ctx->pc = 0x132534u;
            goto label_132534;
        }
    }
    ctx->pc = 0x13237Cu;
label_13237c:
    // 0x13237c: 0x0  nop
    ctx->pc = 0x13237cu;
    // NOP
    // 0x132380: 0x2483ffd0  addiu       $v1, $a0, -0x30
    ctx->pc = 0x132380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x132384: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x132384u;
    {
        const bool branch_taken_0x132384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132384) {
            ctx->pc = 0x13239Cu;
            goto label_13239c;
        }
    }
    ctx->pc = 0x13238Cu;
    // 0x13238c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13238cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132390: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x132390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x132394: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x132394u;
    {
        const bool branch_taken_0x132394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132394) {
            ctx->pc = 0x1323A8u;
            goto label_1323a8;
        }
    }
    ctx->pc = 0x13239Cu;
label_13239c:
    // 0x13239c: 0x0  nop
    ctx->pc = 0x13239cu;
    // NOP
    // 0x1323a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1323a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1323a4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1323a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1323a8:
    // 0x1323a8: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x1323a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1323ac: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1323ACu;
    {
        const bool branch_taken_0x1323ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1323ac) {
            ctx->pc = 0x132534u;
            goto label_132534;
        }
    }
    ctx->pc = 0x1323B4u;
label_1323b4:
    // 0x1323b4: 0x0  nop
    ctx->pc = 0x1323b4u;
    // NOP
    // 0x1323b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1323b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1323bc: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1323bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1323c0: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x1323c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1323c4: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x1323c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x1323c8: 0x240b0400  addiu       $t3, $zero, 0x400
    ctx->pc = 0x1323c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1323cc: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1323CCu;
    {
        const bool branch_taken_0x1323cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1323cc) {
            ctx->pc = 0x132534u;
            goto label_132534;
        }
    }
    ctx->pc = 0x1323D4u;
label_1323d4:
    // 0x1323d4: 0x0  nop
    ctx->pc = 0x1323d4u;
    // NOP
    // 0x1323d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1323d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1323dc: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1323dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1323e0: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x1323e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1323e4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1323e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1323e8: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x1323e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x1323ec: 0x240b0200  addiu       $t3, $zero, 0x200
    ctx->pc = 0x1323ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1323f0: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1323F0u;
    {
        const bool branch_taken_0x1323f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1323f0) {
            ctx->pc = 0x132534u;
            goto label_132534;
        }
    }
    ctx->pc = 0x1323F8u;
label_1323f8:
    // 0x1323f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1323f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1323fc: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1323fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x132400: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x132400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x132404: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x132404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x132408: 0x240b4000  addiu       $t3, $zero, 0x4000
    ctx->pc = 0x132408u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x13240c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x13240Cu;
    {
        const bool branch_taken_0x13240c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13240c) {
            ctx->pc = 0x132534u;
            goto label_132534;
        }
    }
    ctx->pc = 0x132414u;
label_132414:
    // 0x132414: 0x0  nop
    ctx->pc = 0x132414u;
    // NOP
    // 0x132418: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x132418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13241c: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x13241cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x132420: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x132420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x132424: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x132424u;
    {
        const bool branch_taken_0x132424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x132424) {
            ctx->pc = 0x132438u;
            goto label_132438;
        }
    }
    ctx->pc = 0x13242Cu;
    // 0x13242c: 0x24030079  addiu       $v1, $zero, 0x79
    ctx->pc = 0x13242cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x132430: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x132430u;
    {
        const bool branch_taken_0x132430 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x132430) {
            ctx->pc = 0x132440u;
            goto label_132440;
        }
    }
    ctx->pc = 0x132438u;
label_132438:
    // 0x132438: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x132438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13243c: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x13243cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_132440:
    // 0x132440: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x132440u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x132444: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x132444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x132448: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x132448u;
    {
        const bool branch_taken_0x132448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x132448) {
            ctx->pc = 0x13245Cu;
            goto label_13245c;
        }
    }
    ctx->pc = 0x132450u;
    // 0x132450: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x132450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x132454: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x132454u;
    {
        const bool branch_taken_0x132454 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x132454) {
            ctx->pc = 0x132468u;
            goto label_132468;
        }
    }
    ctx->pc = 0x13245Cu;
label_13245c:
    // 0x13245c: 0x0  nop
    ctx->pc = 0x13245cu;
    // NOP
    // 0x132460: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x132460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132464: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x132464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_132468:
    // 0x132468: 0x3c0b0008  lui         $t3, 0x8
    ctx->pc = 0x132468u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)8 << 16));
    // 0x13246c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x13246Cu;
    {
        const bool branch_taken_0x13246c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13246c) {
            ctx->pc = 0x132534u;
            goto label_132534;
        }
    }
    ctx->pc = 0x132474u;
label_132474:
    // 0x132474: 0x0  nop
    ctx->pc = 0x132474u;
    // NOP
    // 0x132478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x132478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13247c: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x13247cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x132480: 0x3c0b0080  lui         $t3, 0x80
    ctx->pc = 0x132480u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)128 << 16));
    // 0x132484: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x132484u;
    {
        const bool branch_taken_0x132484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132484) {
            ctx->pc = 0x132534u;
            goto label_132534;
        }
    }
    ctx->pc = 0x13248Cu;
label_13248c:
    // 0x13248c: 0x0  nop
    ctx->pc = 0x13248cu;
    // NOP
    // 0x132490: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x132490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x132494: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x132494u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x132498: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x132498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x13249c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13249Cu;
    {
        const bool branch_taken_0x13249c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13249c) {
            ctx->pc = 0x1324B4u;
            goto label_1324b4;
        }
    }
    ctx->pc = 0x1324A4u;
    // 0x1324a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1324a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1324a8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1324a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1324ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1324ACu;
    {
        const bool branch_taken_0x1324ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1324ac) {
            ctx->pc = 0x1324BCu;
            goto label_1324bc;
        }
    }
    ctx->pc = 0x1324B4u;
label_1324b4:
    // 0x1324b4: 0x0  nop
    ctx->pc = 0x1324b4u;
    // NOP
    // 0x1324b8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1324b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1324bc:
    // 0x1324bc: 0x0  nop
    ctx->pc = 0x1324bcu;
    // NOP
    // 0x1324c0: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x1324c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1324c4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1324C4u;
    {
        const bool branch_taken_0x1324c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1324c4) {
            ctx->pc = 0x132534u;
            goto label_132534;
        }
    }
    ctx->pc = 0x1324CCu;
label_1324cc:
    // 0x1324cc: 0x0  nop
    ctx->pc = 0x1324ccu;
    // NOP
    // 0x1324d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1324d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1324d4: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x1324d4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1324d8: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x1324d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1324dc: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1324DCu;
    {
        const bool branch_taken_0x1324dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1324dc) {
            ctx->pc = 0x1324F0u;
            goto label_1324f0;
        }
    }
    ctx->pc = 0x1324E4u;
    // 0x1324e4: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x1324e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1324e8: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1324E8u;
    {
        const bool branch_taken_0x1324e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1324e8) {
            ctx->pc = 0x132508u;
            goto label_132508;
        }
    }
    ctx->pc = 0x1324F0u;
label_1324f0:
    // 0x1324f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1324f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1324f4: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x1324f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1324f8: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x1324f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1324fc: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x1324fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x132500: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x132500u;
    {
        const bool branch_taken_0x132500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132500) {
            ctx->pc = 0x132534u;
            goto label_132534;
        }
    }
    ctx->pc = 0x132508u;
label_132508:
    // 0x132508: 0x2483ffd0  addiu       $v1, $a0, -0x30
    ctx->pc = 0x132508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x13250c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13250Cu;
    {
        const bool branch_taken_0x13250c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13250c) {
            ctx->pc = 0x132524u;
            goto label_132524;
        }
    }
    ctx->pc = 0x132514u;
    // 0x132514: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x132514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132518: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x132518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x13251c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13251Cu;
    {
        const bool branch_taken_0x13251c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13251c) {
            ctx->pc = 0x132530u;
            goto label_132530;
        }
    }
    ctx->pc = 0x132524u;
label_132524:
    // 0x132524: 0x0  nop
    ctx->pc = 0x132524u;
    // NOP
    // 0x132528: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x132528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13252c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x13252cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_132530:
    // 0x132530: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x132530u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132534:
    // 0x132534: 0x0  nop
    ctx->pc = 0x132534u;
    // NOP
    // 0x132538: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x132538u;
    {
        const bool branch_taken_0x132538 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x132538) {
            ctx->pc = 0x132560u;
            goto label_132560;
        }
    }
    ctx->pc = 0x132540u;
    // 0x132540: 0x11600007  beqz        $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x132540u;
    {
        const bool branch_taken_0x132540 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x132540) {
            ctx->pc = 0x132560u;
            goto label_132560;
        }
    }
    ctx->pc = 0x132548u;
    // 0x132548: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x132548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13254c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13254cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132550: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x132550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132554: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x132554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132558: 0xc04de54  jal         func_137950
    ctx->pc = 0x132558u;
    SET_GPR_U32(ctx, 31, 0x132560u);
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132560u; }
        if (ctx->pc != 0x132560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132560u; }
        if (ctx->pc != 0x132560u) { return; }
    }
    ctx->pc = 0x132560u;
label_132560:
    // 0x132560: 0x82240000  lb          $a0, 0x0($s1)
    ctx->pc = 0x132560u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x132564: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x132564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x132568: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x132568u;
    {
        const bool branch_taken_0x132568 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x132568) {
            ctx->pc = 0x13257Cu;
            goto label_13257c;
        }
    }
    ctx->pc = 0x132570u;
    // 0x132570: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x132570u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132574: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x132574u;
    {
        const bool branch_taken_0x132574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132574) {
            ctx->pc = 0x132584u;
            goto label_132584;
        }
    }
    ctx->pc = 0x13257Cu;
label_13257c:
    // 0x13257c: 0x0  nop
    ctx->pc = 0x13257cu;
    // NOP
    // 0x132580: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x132580u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_132584:
    // 0x132584: 0x0  nop
    ctx->pc = 0x132584u;
    // NOP
    // 0x132588: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x132588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13258c:
    // 0x13258c: 0x0  nop
    ctx->pc = 0x13258cu;
    // NOP
    // 0x132590: 0x234182b  sltu        $v1, $s1, $s4
    ctx->pc = 0x132590u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x132594: 0x1460fec2  bnez        $v1, . + 4 + (-0x13E << 2)
    ctx->pc = 0x132594u;
    {
        const bool branch_taken_0x132594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x132594) {
            ctx->pc = 0x1320A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1320a0;
        }
    }
    ctx->pc = 0x13259Cu;
    // 0x13259c: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x13259Cu;
    {
        const bool branch_taken_0x13259c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13259c) {
            ctx->pc = 0x1325D4u;
            goto label_1325d4;
        }
    }
    ctx->pc = 0x1325A4u;
    // 0x1325a4: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x1325a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x1325a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1325A8u;
    {
        const bool branch_taken_0x1325a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1325a8) {
            ctx->pc = 0x1325C8u;
            goto label_1325c8;
        }
    }
    ctx->pc = 0x1325B0u;
label_1325b0:
    // 0x1325b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1325b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1325b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1325b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1325b8: 0xc04c7e8  jal         func_131FA0
    ctx->pc = 0x1325B8u;
    SET_GPR_U32(ctx, 31, 0x1325C0u);
    ctx->pc = 0x131FA0u;
    goto label_131fa0;
    ctx->pc = 0x1325C0u;
label_1325c0:
    // 0x1325c0: 0x8e10005c  lw          $s0, 0x5C($s0)
    ctx->pc = 0x1325c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1325c4: 0x0  nop
    ctx->pc = 0x1325c4u;
    // NOP
label_1325c8:
    // 0x1325c8: 0x0  nop
    ctx->pc = 0x1325c8u;
    // NOP
    // 0x1325cc: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1325CCu;
    {
        const bool branch_taken_0x1325cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1325cc) {
            ctx->pc = 0x1325B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1325b0;
        }
    }
    ctx->pc = 0x1325D4u;
label_1325d4:
    // 0x1325d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1325d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1325d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1325d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1325dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1325dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1325e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1325e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1325e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1325e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1325e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1325e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1325ec: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1325ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1325f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1325F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1325F8u;
}
